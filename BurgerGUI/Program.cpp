#include"Login.h"
#include"Dashboard.h"
#include "DoubleLinked.h"
#include "Testing.h"
using namespace System;
using namespace System::Windows::Forms;

//array<String^>^ args
string usedForSongs::song = "";
Doublelinked usedForSongs::songsList;
Doublelinked usedForSongs::LikesList;
bool usedForSongs::flag = false;
map<string, int> usedForSongs::mp;
int usedForSongs::index = -1;
string usedForSongs::state = "NULL";

void main() {
		usedForSongs::songsList.push_back("DripTooHard");
		usedForSongs::songsList.push_back("Man7os");
		usedForSongs::songsList.push_back("NumberOne");
		usedForSongs::songsList.push_back("Malek");
		usedForSongs::songsList.push_back("METAMORPHOSIS");
		usedForSongs::songsList.push_back("Mesafer");
		usedForSongs::songsList.push_back("MidnightCity");

		usedForSongs::mp.insert(pair<string, int>("DripTooHard",0));
		usedForSongs::mp.insert(pair<string, int>("Man7os", 1));
		usedForSongs::mp.insert(pair<string, int>("NumberOne", 2));
		usedForSongs::mp.insert(pair<string, int>("Malek", 3));
		usedForSongs::mp.insert(pair<string, int>("METAMORPHOSIS", 4));
		usedForSongs::mp.insert(pair<string, int>("Mesafer", 5));
		usedForSongs::mp.insert(pair<string, int>("MidnightCity", 6));

		Application::EnableVisualStyles();
		Application::SetCompatibleTextRenderingDefault(false);


		User^ user = nullptr;
		while (true) {
			BugerGUI::Login loginForm;
			loginForm.ShowDialog();
			/*BugerGUI::Dashboard dashboard;
			dashboard.ShowDialog();

			if (dashboard.LogOut1) {
				BugerGUI::Login loginForm;
				loginForm.ShowDialog();*/



			if (loginForm.switchToRegister) {
				//show the register form
				BugerGUI::signUp registerForm;
				registerForm.ShowDialog();


				if (registerForm.switchToLogin) {
					continue;
				}
				else {
					user = registerForm.user;
					break;
				}
			}
			else {
				user = loginForm.user;
				break;
			}
		}

		if (user != nullptr) {

			BugerGUI::Dashboard mainForm(user);
			Application::Run(% mainForm);

			
		}
		else {
			MessageBox::Show("Authentication Canceled",
				"Program.cpp", MessageBoxButtons::OK);

		}
		
		}
	
