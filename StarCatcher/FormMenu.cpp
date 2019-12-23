#include <Windows.h>
#include "FormMenu.h"
#include "BelbinTest.h"

using namespace StarCatcher;

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew FormMenu);
	return 0;
}