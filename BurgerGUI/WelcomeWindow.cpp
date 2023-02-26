#include "Login.h"
#include "WelcomeWindow.h"

using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
void main(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	BugerGUI::WelcomeWindow form;
	Application::Run(% form);
}

