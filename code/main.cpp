#include "loading_screen.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	solver::loading_screen form;
	Application::Run(% form);
	return 0;
}