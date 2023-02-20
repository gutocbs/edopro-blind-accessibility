GL_FUNC(glAlphaFunc, void, GLenum func, GLfloat ref)
GL_FUNC(glBindTexture, void, GLenum target, GLuint texture)
GL_FUNC(glBlendFunc, void, GLenum sfactor, GLenum dfactor)
GL_FUNC(glClear, void, GLbitfield mask)
GL_FUNC(glClearColor, void, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
GL_FUNC(glClearDepth, void, GLdouble depth)
GL_FUNC(glClearStencil, void, GLint s)
GL_FUNC(glClipPlane, void, GLenum plane, const GLdouble * equation)
GL_FUNC(glColor4ub, void, GLubyte red, GLubyte green, GLubyte blue, GLubyte alpha)
GL_FUNC(glColorMask, void, GLboolean red, GLboolean green, GLboolean blue, GLboolean alpha)
GL_FUNC(glColorMaterial, void, GLenum face, GLenum mode)
GL_FUNC(glColorPointer, void, GLint size, GLenum type, GLsizei stride, const void * pointer)
GL_FUNC(glCopyTexSubImage2D, void, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLint x, GLint y, GLsizei width, GLsizei height)
GL_FUNC(glCullFace, void, GLenum mode)
GL_FUNC(glDeleteTextures, void, GLsizei n, const GLuint * textures)
GL_FUNC(glDepthFunc, void, GLenum func)
GL_FUNC(glDepthMask, void, GLboolean flag)
GL_FUNC(glDisable, void, GLenum cap)
GL_FUNC(glDisableClientState, void, GLenum array)
GL_FUNC(glDrawArrays, void, GLenum mode, GLint first, GLsizei count)
GL_FUNC(glDrawBuffer, void, GLenum buf)
GL_FUNC(glDrawElements, void, GLenum mode, GLsizei count, GLenum type, const void * indices)
GL_FUNC(glEnable, void, GLenum cap)
GL_FUNC(glEnableClientState, void, GLenum array)
GL_FUNC(glFlush, void)
GL_FUNC(glFogf, void, GLenum pname, GLfloat param)
GL_FUNC(glFogfv, void, GLenum pname, const GLfloat * params)
GL_FUNC(glFogi, void, GLenum pname, GLint param)
GL_FUNC(glFrontFace, void, GLenum mode)
GL_FUNC(glGenTextures, void, GLsizei n, GLuint * textures)
GL_FUNC(glGetBooleanv, void, GLenum pname, GLboolean * data)
GL_FUNC(glGetError, GLenum)
GL_FUNC(glGetFloatv, void, GLenum pname, GLfloat * data)
GL_FUNC(glGetIntegerv, void, GLenum pname, GLint * data)
GL_FUNC(glGetString, const GLubyte *, GLenum name)
GL_FUNC(glGetTexImage, void, GLenum target, GLint level, GLenum format, GLenum type, void * pixels)
GL_FUNC(glHint, void, GLenum target, GLenum mode)
GL_FUNC(glIsEnabled, GLboolean, GLenum cap)
GL_FUNC(glLightModelfv, void, GLenum pname, const GLfloat * params)
GL_FUNC(glLightModeli, void, GLenum pname, GLint param)
GL_FUNC(glLightf, void, GLenum light, GLenum pname, GLfloat param)
GL_FUNC(glLightfv, void, GLenum light, GLenum pname, const GLfloat * params)
GL_FUNC(glLineStipple, void, GLint factor, GLushort pattern)
GL_FUNC(glLineWidth, void, GLfloat width)
GL_FUNC(glLoadIdentity, void)
GL_FUNC(glLoadMatrixf, void, const GLfloat * m)
GL_FUNC(glMaterialf, void, GLenum face, GLenum pname, GLfloat param)
GL_FUNC(glMaterialfv, void, GLenum face, GLenum pname, const GLfloat * params)
GL_FUNC(glMatrixMode, void, GLenum mode)
GL_FUNC(glMultMatrixf, void, const GLfloat * m)
GL_FUNC(glNormalPointer, void, GLenum type, GLsizei stride, const void * pointer)
GL_FUNC(glPixelStorei, void, GLenum pname, GLint param)
GL_FUNC(glPointSize, void, GLfloat size)
GL_FUNC(glPolygonMode, void, GLenum face, GLenum mode)
GL_FUNC(glPolygonOffset, void, GLfloat factor, GLfloat units)
GL_FUNC(glPopAttrib, void)
GL_FUNC(glPopMatrix, void)
GL_FUNC(glPushAttrib, void, GLbitfield mask)
GL_FUNC(glPushMatrix, void)
GL_FUNC(glReadBuffer, void, GLenum src)
GL_FUNC(glReadPixels, void, GLint x, GLint y, GLsizei width, GLsizei height, GLenum format, GLenum type, void * pixels)
GL_FUNC(glRectf, void, GLfloat x1, GLfloat y1, GLfloat x2, GLfloat y2)
GL_FUNC(glScissor, void, GLint x, GLint y, GLsizei width, GLsizei height)
GL_FUNC(glShadeModel, void, GLenum mode)
GL_FUNC(glStencilFunc, void, GLenum func, GLint ref, GLuint mask)
GL_FUNC(glStencilMask, void, GLuint mask)
GL_FUNC(glStencilOp, void, GLenum fail, GLenum zfail, GLenum zpass)
GL_FUNC(glTexCoordPointer, void, GLint size, GLenum type, GLsizei stride, const void * pointer)
GL_FUNC(glTexEnvf, void, GLenum target, GLenum pname, GLfloat param)
GL_FUNC(glTexEnvi, void, GLenum target, GLenum pname, GLint param)
GL_FUNC(glTexGeni, void, GLenum coord, GLenum pname, GLint param)
GL_FUNC(glTexImage2D, void, GLenum target, GLint level, GLint internalformat, GLsizei width, GLsizei height, GLint border, GLenum format, GLenum type, const void * pixels)
GL_FUNC(glTexParameterf, void, GLenum target, GLenum pname, GLfloat param)
GL_FUNC(glTexParameteri, void, GLenum target, GLenum pname, GLint param)
GL_FUNC(glTexSubImage2D, void, GLenum target, GLint level, GLint xoffset, GLint yoffset, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
GL_FUNC(glTranslatef, void, GLfloat x, GLfloat y, GLfloat z)
GL_FUNC(glVertexPointer, void, GLint size, GLenum type, GLsizei stride, const void * pointer)
GL_FUNC(glViewport, void, GLint x, GLint y, GLsizei width, GLsizei height)

#if 0
GL_FUNC(glAccum, void, GLenum op, GLfloat value)
GL_FUNC(glAreTexturesResident, GLboolean, GLsizei n, const GLuint * textures, GLboolean * residences)
GL_FUNC(glArrayElement, void, GLint i)
GL_FUNC(glBegin, void, GLenum mode)
GL_FUNC(glBitmap, void, GLsizei width, GLsizei height, GLfloat xorig, GLfloat yorig, GLfloat xmove, GLfloat ymove, const GLubyte * bitmap)
GL_FUNC(glCallList, void, GLuint list)
GL_FUNC(glCallLists, void, GLsizei n, GLenum type, const void * lists)
GL_FUNC(glClearAccum, void, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
GL_FUNC(glClearIndex, void, GLfloat c)
GL_FUNC(glColor3b, void, GLbyte red, GLbyte green, GLbyte blue)
GL_FUNC(glColor3bv, void, const GLbyte * v)
GL_FUNC(glColor3d, void, GLdouble red, GLdouble green, GLdouble blue)
GL_FUNC(glColor3dv, void, const GLdouble * v)
GL_FUNC(glColor3f, void, GLfloat red, GLfloat green, GLfloat blue)
GL_FUNC(glColor3fv, void, const GLfloat * v)
GL_FUNC(glColor3i, void, GLint red, GLint green, GLint blue)
GL_FUNC(glColor3iv, void, const GLint * v)
GL_FUNC(glColor3s, void, GLshort red, GLshort green, GLshort blue)
GL_FUNC(glColor3sv, void, const GLshort * v)
GL_FUNC(glColor3ub, void, GLubyte red, GLubyte green, GLubyte blue)
GL_FUNC(glColor3ubv, void, const GLubyte * v)
GL_FUNC(glColor3ui, void, GLuint red, GLuint green, GLuint blue)
GL_FUNC(glColor3uiv, void, const GLuint * v)
GL_FUNC(glColor3us, void, GLushort red, GLushort green, GLushort blue)
GL_FUNC(glColor3usv, void, const GLushort * v)
GL_FUNC(glColor4b, void, GLbyte red, GLbyte green, GLbyte blue, GLbyte alpha)
GL_FUNC(glColor4bv, void, const GLbyte * v)
GL_FUNC(glColor4d, void, GLdouble red, GLdouble green, GLdouble blue, GLdouble alpha)
GL_FUNC(glColor4dv, void, const GLdouble * v)
GL_FUNC(glColor4f, void, GLfloat red, GLfloat green, GLfloat blue, GLfloat alpha)
GL_FUNC(glColor4fv, void, const GLfloat * v)
GL_FUNC(glColor4i, void, GLint red, GLint green, GLint blue, GLint alpha)
GL_FUNC(glColor4iv, void, const GLint * v)
GL_FUNC(glColor4s, void, GLshort red, GLshort green, GLshort blue, GLshort alpha)
GL_FUNC(glColor4sv, void, const GLshort * v)
GL_FUNC(glColor4ubv, void, const GLubyte * v)
GL_FUNC(glColor4ui, void, GLuint red, GLuint green, GLuint blue, GLuint alpha)
GL_FUNC(glColor4uiv, void, const GLuint * v)
GL_FUNC(glColor4us, void, GLushort red, GLushort green, GLushort blue, GLushort alpha)
GL_FUNC(glColor4usv, void, const GLushort * v)
GL_FUNC(glCopyPixels, void, GLint x, GLint y, GLsizei width, GLsizei height, GLenum type)
GL_FUNC(glCopyTexImage1D, void, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLint border)
GL_FUNC(glCopyTexImage2D, void, GLenum target, GLint level, GLenum internalformat, GLint x, GLint y, GLsizei width, GLsizei height, GLint border)
GL_FUNC(glCopyTexSubImage1D, void, GLenum target, GLint level, GLint xoffset, GLint x, GLint y, GLsizei width)
GL_FUNC(glDeleteLists, void, GLuint list, GLsizei range)
GL_FUNC(glDepthRange, void, GLdouble n, GLdouble f)
GL_FUNC(glDrawPixels, void, GLsizei width, GLsizei height, GLenum format, GLenum type, const void * pixels)
GL_FUNC(glEdgeFlag, void, GLboolean flag)
GL_FUNC(glEdgeFlagPointer, void, GLsizei stride, const void * pointer)
GL_FUNC(glEdgeFlagv, void, const GLboolean * flag)
GL_FUNC(glEnd, void)
GL_FUNC(glEndList, void)
GL_FUNC(glEvalCoord1d, void, GLdouble u)
GL_FUNC(glEvalCoord1dv, void, const GLdouble * u)
GL_FUNC(glEvalCoord1f, void, GLfloat u)
GL_FUNC(glEvalCoord1fv, void, const GLfloat * u)
GL_FUNC(glEvalCoord2d, void, GLdouble u, GLdouble v)
GL_FUNC(glEvalCoord2dv, void, const GLdouble * u)
GL_FUNC(glEvalCoord2f, void, GLfloat u, GLfloat v)
GL_FUNC(glEvalCoord2fv, void, const GLfloat * u)
GL_FUNC(glEvalMesh1, void, GLenum mode, GLint i1, GLint i2)
GL_FUNC(glEvalMesh2, void, GLenum mode, GLint i1, GLint i2, GLint j1, GLint j2)
GL_FUNC(glEvalPoint1, void, GLint i)
GL_FUNC(glEvalPoint2, void, GLint i, GLint j)
GL_FUNC(glFeedbackBuffer, void, GLsizei size, GLenum type, GLfloat * buffer)
GL_FUNC(glFinish, void)
GL_FUNC(glFogiv, void, GLenum pname, const GLint * params)
GL_FUNC(glFrustum, void, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
GL_FUNC(glGenLists, GLuint, GLsizei range)
GL_FUNC(glGenTextures, void, GLsizei n, GLuint * textures)
GL_FUNC(glGetBooleanv, void, GLenum pname, GLboolean * data)
GL_FUNC(glGetClipPlane, void, GLenum plane, GLdouble * equation)
GL_FUNC(glGetDoublev, void, GLenum pname, GLdouble * data)
GL_FUNC(glGetLightfv, void, GLenum light, GLenum pname, GLfloat * params)
GL_FUNC(glGetLightiv, void, GLenum light, GLenum pname, GLint * params)
GL_FUNC(glGetMapdv, void, GLenum target, GLenum query, GLdouble * v)
GL_FUNC(glGetMapfv, void, GLenum target, GLenum query, GLfloat * v)
GL_FUNC(glGetMapiv, void, GLenum target, GLenum query, GLint * v)
GL_FUNC(glGetMaterialfv, void, GLenum face, GLenum pname, GLfloat * params)
GL_FUNC(glGetMaterialiv, void, GLenum face, GLenum pname, GLint * params)
GL_FUNC(glGetPixelMapfv, void, GLenum map, GLfloat * values)
GL_FUNC(glGetPixelMapuiv, void, GLenum map, GLuint * values)
GL_FUNC(glGetPixelMapusv, void, GLenum map, GLushort * values)
GL_FUNC(glGetPointerv, void, GLenum pname, void ** params)
GL_FUNC(glGetPolygonStipple, void, GLubyte * mask)
GL_FUNC(glGetTexEnvfv, void, GLenum target, GLenum pname, GLfloat * params)
GL_FUNC(glGetTexEnviv, void, GLenum target, GLenum pname, GLint * params)
GL_FUNC(glGetTexGendv, void, GLenum coord, GLenum pname, GLdouble * params)
GL_FUNC(glGetTexGenfv, void, GLenum coord, GLenum pname, GLfloat * params)
GL_FUNC(glGetTexGeniv, void, GLenum coord, GLenum pname, GLint * params)
GL_FUNC(glGetTexLevelParameterfv, void, GLenum target, GLint level, GLenum pname, GLfloat * params)
GL_FUNC(glGetTexLevelParameteriv, void, GLenum target, GLint level, GLenum pname, GLint * params)
GL_FUNC(glGetTexParameterfv, void, GLenum target, GLenum pname, GLfloat * params)
GL_FUNC(glGetTexParameteriv, void, GLenum target, GLenum pname, GLint * params)
GL_FUNC(glIndexMask, void, GLuint mask)
GL_FUNC(glIndexPointer, void, GLenum type, GLsizei stride, const void * pointer)
GL_FUNC(glIndexd, void, GLdouble c)
GL_FUNC(glIndexdv, void, const GLdouble * c)
GL_FUNC(glIndexf, void, GLfloat c)
GL_FUNC(glIndexfv, void, const GLfloat * c)
GL_FUNC(glIndexi, void, GLint c)
GL_FUNC(glIndexiv, void, const GLint * c)
GL_FUNC(glIndexs, void, GLshort c)
GL_FUNC(glIndexsv, void, const GLshort * c)
GL_FUNC(glIndexub, void, GLubyte c)
GL_FUNC(glIndexubv, void, const GLubyte * c)
GL_FUNC(glInitNames, void)
GL_FUNC(glInterleavedArrays, void, GLenum format, GLsizei stride, const void * pointer)
GL_FUNC(glIsList, GLboolean, GLuint list)
GL_FUNC(glIsTexture, GLboolean, GLuint texture)
GL_FUNC(glLightModelf, void, GLenum pname, GLfloat param)
GL_FUNC(glLightModeliv, void, GLenum pname, const GLint * params)
GL_FUNC(glLighti, void, GLenum light, GLenum pname, GLint param)
GL_FUNC(glLightiv, void, GLenum light, GLenum pname, const GLint * params)
GL_FUNC(glListBase, void, GLuint base)
GL_FUNC(glLoadMatrixd, void, const GLdouble * m)
GL_FUNC(glLoadName, void, GLuint name)
GL_FUNC(glLogicOp, void, GLenum opcode)
GL_FUNC(glMap1d, void, GLenum target, GLdouble u1, GLdouble u2, GLint stride, GLint order, const GLdouble * points)
GL_FUNC(glMap1f, void, GLenum target, GLfloat u1, GLfloat u2, GLint stride, GLint order, const GLfloat * points)
GL_FUNC(glMap2d, void, GLenum target, GLdouble u1, GLdouble u2, GLint ustride, GLint uorder, GLdouble v1, GLdouble v2, GLint vstride, GLint vorder, const GLdouble * points)
GL_FUNC(glMap2f, void, GLenum target, GLfloat u1, GLfloat u2, GLint ustride, GLint uorder, GLfloat v1, GLfloat v2, GLint vstride, GLint vorder, const GLfloat * points)
GL_FUNC(glMapGrid1d, void, GLint un, GLdouble u1, GLdouble u2)
GL_FUNC(glMapGrid1f, void, GLint un, GLfloat u1, GLfloat u2)
GL_FUNC(glMapGrid2d, void, GLint un, GLdouble u1, GLdouble u2, GLint vn, GLdouble v1, GLdouble v2)
GL_FUNC(glMapGrid2f, void, GLint un, GLfloat u1, GLfloat u2, GLint vn, GLfloat v1, GLfloat v2)
GL_FUNC(glMateriali, void, GLenum face, GLenum pname, GLint param)
GL_FUNC(glMaterialiv, void, GLenum face, GLenum pname, const GLint * params)
GL_FUNC(glMultMatrixd, void, const GLdouble * m)
GL_FUNC(glNewList, void, GLuint list, GLenum mode)
GL_FUNC(glNormal3b, void, GLbyte nx, GLbyte ny, GLbyte nz)
GL_FUNC(glNormal3bv, void, const GLbyte * v)
GL_FUNC(glNormal3d, void, GLdouble nx, GLdouble ny, GLdouble nz)
GL_FUNC(glNormal3dv, void, const GLdouble * v)
GL_FUNC(glNormal3f, void, GLfloat nx, GLfloat ny, GLfloat nz)
GL_FUNC(glNormal3fv, void, const GLfloat * v)
GL_FUNC(glNormal3i, void, GLint nx, GLint ny, GLint nz)
GL_FUNC(glNormal3iv, void, const GLint * v)
GL_FUNC(glNormal3s, void, GLshort nx, GLshort ny, GLshort nz)
GL_FUNC(glNormal3sv, void, const GLshort * v)
GL_FUNC(glOrtho, void, GLdouble left, GLdouble right, GLdouble bottom, GLdouble top, GLdouble zNear, GLdouble zFar)
GL_FUNC(glPassThrough, void, GLfloat token)
GL_FUNC(glPixelMapfv, void, GLenum map, GLsizei mapsize, const GLfloat * values)
GL_FUNC(glPixelMapuiv, void, GLenum map, GLsizei mapsize, const GLuint * values)
GL_FUNC(glPixelMapusv, void, GLenum map, GLsizei mapsize, const GLushort * values)
GL_FUNC(glPixelStoref, void, GLenum pname, GLfloat param)
GL_FUNC(glPixelTransferf, void, GLenum pname, GLfloat param)
GL_FUNC(glPixelTransferi, void, GLenum pname, GLint param)
GL_FUNC(glPixelZoom, void, GLfloat xfactor, GLfloat yfactor)
GL_FUNC(glPolygonStipple, void, const GLubyte * mask)
GL_FUNC(glPopClientAttrib, void)
GL_FUNC(glPopName, void)
GL_FUNC(glPrioritizeTextures, void, GLsizei n, const GLuint * textures, const GLfloat * priorities)
GL_FUNC(glPushClientAttrib, void, GLbitfield mask)
GL_FUNC(glPushName, void, GLuint name)
GL_FUNC(glRasterPos2d, void, GLdouble x, GLdouble y)
GL_FUNC(glRasterPos2dv, void, const GLdouble * v)
GL_FUNC(glRasterPos2f, void, GLfloat x, GLfloat y)
GL_FUNC(glRasterPos2fv, void, const GLfloat * v)
GL_FUNC(glRasterPos2i, void, GLint x, GLint y)
GL_FUNC(glRasterPos2iv, void, const GLint * v)
GL_FUNC(glRasterPos2s, void, GLshort x, GLshort y)
GL_FUNC(glRasterPos2sv, void, const GLshort * v)
GL_FUNC(glRasterPos3d, void, GLdouble x, GLdouble y, GLdouble z)
GL_FUNC(glRasterPos3dv, void, const GLdouble * v)
GL_FUNC(glRasterPos3f, void, GLfloat x, GLfloat y, GLfloat z)
GL_FUNC(glRasterPos3fv, void, const GLfloat * v)
GL_FUNC(glRasterPos3i, void, GLint x, GLint y, GLint z)
GL_FUNC(glRasterPos3iv, void, const GLint * v)
GL_FUNC(glRasterPos3s, void, GLshort x, GLshort y, GLshort z)
GL_FUNC(glRasterPos3sv, void, const GLshort * v)
GL_FUNC(glRasterPos4d, void, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
GL_FUNC(glRasterPos4dv, void, const GLdouble * v)
GL_FUNC(glRasterPos4f, void, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
GL_FUNC(glRasterPos4fv, void, const GLfloat * v)
GL_FUNC(glRasterPos4i, void, GLint x, GLint y, GLint z, GLint w)
GL_FUNC(glRasterPos4iv, void, const GLint * v)
GL_FUNC(glRasterPos4s, void, GLshort x, GLshort y, GLshort z, GLshort w)
GL_FUNC(glRasterPos4sv, void, const GLshort * v)
GL_FUNC(glRectd, void, GLdouble x1, GLdouble y1, GLdouble x2, GLdouble y2)
GL_FUNC(glRectdv, void, const GLdouble * v1, const GLdouble * v2)
GL_FUNC(glRectfv, void, const GLfloat * v1, const GLfloat * v2)
GL_FUNC(glRecti, void, GLint x1, GLint y1, GLint x2, GLint y2)
GL_FUNC(glRectiv, void, const GLint * v1, const GLint * v2)
GL_FUNC(glRects, void, GLshort x1, GLshort y1, GLshort x2, GLshort y2)
GL_FUNC(glRectsv, void, const GLshort * v1, const GLshort * v2)
GL_FUNC(glRenderMode, GLint, GLenum mode)
GL_FUNC(glRotated, void, GLdouble angle, GLdouble x, GLdouble y, GLdouble z)
GL_FUNC(glRotatef, void, GLfloat angle, GLfloat x, GLfloat y, GLfloat z)
GL_FUNC(glScaled, void, GLdouble x, GLdouble y, GLdouble z)
GL_FUNC(glScalef, void, GLfloat x, GLfloat y, GLfloat z)
GL_FUNC(glSelectBuffer, void, GLsizei size, GLuint * buffer)
GL_FUNC(glTexCoord1d, void, GLdouble s)
GL_FUNC(glTexCoord1dv, void, const GLdouble * v)
GL_FUNC(glTexCoord1f, void, GLfloat s)
GL_FUNC(glTexCoord1fv, void, const GLfloat * v)
GL_FUNC(glTexCoord1i, void, GLint s)
GL_FUNC(glTexCoord1iv, void, const GLint * v)
GL_FUNC(glTexCoord1s, void, GLshort s)
GL_FUNC(glTexCoord1sv, void, const GLshort * v)
GL_FUNC(glTexCoord2d, void, GLdouble s, GLdouble t)
GL_FUNC(glTexCoord2dv, void, const GLdouble * v)
GL_FUNC(glTexCoord2f, void, GLfloat s, GLfloat t)
GL_FUNC(glTexCoord2fv, void, const GLfloat * v)
GL_FUNC(glTexCoord2i, void, GLint s, GLint t)
GL_FUNC(glTexCoord2iv, void, const GLint * v)
GL_FUNC(glTexCoord2s, void, GLshort s, GLshort t)
GL_FUNC(glTexCoord2sv, void, const GLshort * v)
GL_FUNC(glTexCoord3d, void, GLdouble s, GLdouble t, GLdouble r)
GL_FUNC(glTexCoord3dv, void, const GLdouble * v)
GL_FUNC(glTexCoord3f, void, GLfloat s, GLfloat t, GLfloat r)
GL_FUNC(glTexCoord3fv, void, const GLfloat * v)
GL_FUNC(glTexCoord3i, void, GLint s, GLint t, GLint r)
GL_FUNC(glTexCoord3iv, void, const GLint * v)
GL_FUNC(glTexCoord3s, void, GLshort s, GLshort t, GLshort r)
GL_FUNC(glTexCoord3sv, void, const GLshort * v)
GL_FUNC(glTexCoord4d, void, GLdouble s, GLdouble t, GLdouble r, GLdouble q)
GL_FUNC(glTexCoord4dv, void, const GLdouble * v)
GL_FUNC(glTexCoord4f, void, GLfloat s, GLfloat t, GLfloat r, GLfloat q)
GL_FUNC(glTexCoord4fv, void, const GLfloat * v)
GL_FUNC(glTexCoord4i, void, GLint s, GLint t, GLint r, GLint q)
GL_FUNC(glTexCoord4iv, void, const GLint * v)
GL_FUNC(glTexCoord4s, void, GLshort s, GLshort t, GLshort r, GLshort q)
GL_FUNC(glTexCoord4sv, void, const GLshort * v)
GL_FUNC(glTexEnvfv, void, GLenum target, GLenum pname, const GLfloat * params)
GL_FUNC(glTexEnviv, void, GLenum target, GLenum pname, const GLint * params)
GL_FUNC(glTexGend, void, GLenum coord, GLenum pname, GLdouble param)
GL_FUNC(glTexGendv, void, GLenum coord, GLenum pname, const GLdouble * params)
GL_FUNC(glTexGenf, void, GLenum coord, GLenum pname, GLfloat param)
GL_FUNC(glTexGenfv, void, GLenum coord, GLenum pname, const GLfloat * params)
GL_FUNC(glTexGeniv, void, GLenum coord, GLenum pname, const GLint * params)
GL_FUNC(glTexImage1D, void, GLenum target, GLint level, GLint internalformat, GLsizei width, GLint border, GLenum format, GLenum type, const void * pixels)
GL_FUNC(glTexParameterfv, void, GLenum target, GLenum pname, const GLfloat * params)
GL_FUNC(glTexParameteriv, void, GLenum target, GLenum pname, const GLint * params)
GL_FUNC(glTexSubImage1D, void, GLenum target, GLint level, GLint xoffset, GLsizei width, GLenum format, GLenum type, const void * pixels)
GL_FUNC(glTranslated, void, GLdouble x, GLdouble y, GLdouble z)
GL_FUNC(glVertex2d, void, GLdouble x, GLdouble y)
GL_FUNC(glVertex2dv, void, const GLdouble * v)
GL_FUNC(glVertex2f, void, GLfloat x, GLfloat y)
GL_FUNC(glVertex2fv, void, const GLfloat * v)
GL_FUNC(glVertex2i, void, GLint x, GLint y)
GL_FUNC(glVertex2iv, void, const GLint * v)
GL_FUNC(glVertex2s, void, GLshort x, GLshort y)
GL_FUNC(glVertex2sv, void, const GLshort * v)
GL_FUNC(glVertex3d, void, GLdouble x, GLdouble y, GLdouble z)
GL_FUNC(glVertex3dv, void, const GLdouble * v)
GL_FUNC(glVertex3f, void, GLfloat x, GLfloat y, GLfloat z)
GL_FUNC(glVertex3fv, void, const GLfloat * v)
GL_FUNC(glVertex3i, void, GLint x, GLint y, GLint z)
GL_FUNC(glVertex3iv, void, const GLint * v)
GL_FUNC(glVertex3s, void, GLshort x, GLshort y, GLshort z)
GL_FUNC(glVertex3sv, void, const GLshort * v)
GL_FUNC(glVertex4d, void, GLdouble x, GLdouble y, GLdouble z, GLdouble w)
GL_FUNC(glVertex4dv, void, const GLdouble * v)
GL_FUNC(glVertex4f, void, GLfloat x, GLfloat y, GLfloat z, GLfloat w)
GL_FUNC(glVertex4fv, void, const GLfloat * v)
GL_FUNC(glVertex4i, void, GLint x, GLint y, GLint z, GLint w)
GL_FUNC(glVertex4iv, void, const GLint * v)
GL_FUNC(glVertex4s, void, GLshort x, GLshort y, GLshort z, GLshort w)
GL_FUNC(glVertex4sv, void, const GLshort * v)
#endif