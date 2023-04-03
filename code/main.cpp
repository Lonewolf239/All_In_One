#include "main.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main() {
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	solver::main form;
	Application::Run(% form);
	return 0;
}