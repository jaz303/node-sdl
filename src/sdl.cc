#include "deps.h"

namespace sdl2_bindings {

using namespace v8;

void SDL2BindingsInit(Local<Object> exports) {
	InitSymbols(exports->GetIsolate());
	InitConstants(exports);

	InitClipboardFunctions(exports);
	InitCoreFunctions(exports);
	InitCPUFeatureDetectionFunctions(exports);
	InitDisplayWindowFunctions(exports);
	InitErrorFunctions(exports);
	InitEventFunctions(exports);
	InitExtImageFunctions(exports);
	InitGLFunctions(exports);
	InitJoystickFunctions(exports);
	InitKeyboardFunctions(exports);
	InitMouseFunctions(exports);
	InitPixelFormatConversionFunctions(exports);
	InitSurfaceDrawingFunctions(exports);
	InitTimerFunctions(exports);

	Cursor::Init(exports->GetIsolate());
	GLContext::Init(exports->GetIsolate());
	Joystick::Init(exports->GetIsolate());
	Surface::Init(exports->GetIsolate());
	Window::Init(exports->GetIsolate());
}

NODE_MODULE(sdl2_bindings, SDL2BindingsInit);

}
