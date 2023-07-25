#include "loading_screen.h"
#include <ctime>

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main() {
	srand(static_cast<unsigned int>(time(NULL)));
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	solver::loading_screen form;
	Application::Run(% form);
	return 0;
}