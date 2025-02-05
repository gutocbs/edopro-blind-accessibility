// Copyright (C) 2013 Christian Stehno
// This file is part of the "Irrlicht Engine".
// For conditions of distribution and use, see copyright notice in Irrlicht.h

#ifndef __C_GLX_MANAGER_H_INCLUDED__
#define __C_GLX_MANAGER_H_INCLUDED__

#include "IrrCompileConfig.h"

#ifdef _IRR_COMPILE_WITH_GLX_MANAGER_

#include "SIrrCreationParameters.h"
#include "SExposedVideoData.h"
#include "IContextManager.h"
#include "SColor.h"
#include <X11/Xlib.h>
#include <X11/Xutil.h>

// we can't include glx.h here, because gl.h has incompatible types with ogl es headers and it
// cause redefinition errors, thats why we use ugly trick with void* types and casts.

namespace irr
{
namespace video
{
    // GLX manager.
    class CGLXManager : public IContextManager
    {
    public:
        //! Constructor.
        CGLXManager(const SIrrlichtCreationParameters& params, const SExposedVideoData& videodata, int screennr);

        //! Destructor
        ~CGLXManager();

        // Initialize
        virtual bool initialize(const SIrrlichtCreationParameters& params, const SExposedVideoData& data) _IRR_OVERRIDE_;

        // Terminate
        virtual void terminate() _IRR_OVERRIDE_;

        // Create surface.
        virtual bool generateSurface() _IRR_OVERRIDE_;

        // Destroy surface.
        virtual void destroySurface() _IRR_OVERRIDE_;

        // Create context.
        virtual bool generateContext() _IRR_OVERRIDE_;

        // Destroy context.
        virtual void destroyContext() _IRR_OVERRIDE_;

        //! Get current context
        virtual const SExposedVideoData& getContext() const _IRR_OVERRIDE_;

        //! Change render context, disable old and activate new defined by videoData
        virtual bool activateContext(const SExposedVideoData& videoData, bool restorePrimaryOnZero) _IRR_OVERRIDE_;

        // Swap buffers.
        virtual bool swapBuffers() _IRR_OVERRIDE_;
		
		// Generic vsync setting method for several extensions
		virtual void swapInterval(int interval) _IRR_OVERRIDE_;

        // Context dependent getProcAddress or equivalent function
        virtual void* loadFunction(const char* function_name) _IRR_OVERRIDE_;

        XVisualInfo* getVisual() const {return VisualInfo;} // return XVisualInfo

    private:
        SIrrlichtCreationParameters Params;
        SExposedVideoData PrimaryContext;
        SExposedVideoData CurrentContext;
        XVisualInfo* VisualInfo;
        void* glxFBConfig; // GLXFBConfig
        XID GlxWin; // GLXWindow
	#if defined(_IRR_OPENGL_USE_EXTPOINTER_)
		void* pGlxSwapIntervalSGI;
		void* pGlxSwapIntervalEXT;
		void* pGlxSwapIntervalMESA;
	#endif
        void* pglXGetProcAddress;
	#ifdef _IRR_X11_DYNAMIC_LOAD_
		void* LibGL;
		void* LibGLX;
	#define GLX_FUNC(name) void* p##name;
		#include "CGLXFunctions.inl"
	#undef GLX_FUNC
	#endif
	};
}
}

#endif

#endif

