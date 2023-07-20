#ifndef MOUSE_HELPER_H
#define MOUSE_HELPER_H

#include "IEventReceiver.h"
#include "IrrlichtDevice.h"
#include "../gframe/game.h"
#include "../gframe/joystick_wrapper.h"


namespace ygo {
	class MouseHelper{
	public:
		static void Click(const irr::SEvent& event, bool rightClick = false)
		{
			auto cursor = mainGame->device->getCursorControl();
			auto pos = cursor->getRelativePosition();

			auto& jevent = event.JoystickEvent;
			static irr::u32 buttonstates = 0;
			buttonstates |= irr::E_MOUSE_BUTTON_STATE_MASK::EMBSM_LEFT;
			irr::SEvent simulated{};
			simulated.EventType = irr::EET_MOUSE_INPUT_EVENT;
			simulated.MouseInput.ButtonStates = buttonstates;
			simulated.MouseInput.Control = false;
			simulated.MouseInput.Shift = false;
			simulated.MouseInput.X = irr::core::round32(pos.X * mainGame->window_size.Width);
			simulated.MouseInput.Y = irr::core::round32(pos.Y * mainGame->window_size.Height);

			buttonstates |= (simulated.MouseInput.Control) ? 1 << 30 : 0;
			buttonstates |= (simulated.MouseInput.Shift) ? 1 << 29 : 0;

			auto& changed = jevent.POV;

			auto CheckAndPost = [device = mainGame->device, &simulated, &changed, &states = jevent.ButtonStates](int button, irr::EMOUSE_INPUT_EVENT type) {
				simulated.MouseInput.Event = (states & button) ? type : (irr::EMOUSE_INPUT_EVENT)(type + 3);
				device->postEventFromUser(simulated);
			};

			CheckAndPost(JWrapper::Buttons::A, rightClick ? irr::EMIE_RMOUSE_PRESSED_DOWN : irr::EMIE_LMOUSE_PRESSED_DOWN);
		}
	};
}

#endif //MOUSE_HELPER_H
