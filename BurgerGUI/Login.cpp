#include "Login.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BugerGUI::Login form;
	Application::Run(% form);
}

