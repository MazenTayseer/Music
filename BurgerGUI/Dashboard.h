#pragma once
#include "Account.h"
#include "Explore.h"
#include "AllSongs.h"
#include "CurrentSong.h"


namespace BugerGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FontAwesome::Sharp;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: FontAwesome::Sharp::IconButton^ ExploreBoard;
	private: FontAwesome::Sharp::IconButton^ AccountBtn;
	protected:

	private: FontAwesome::Sharp::IconButton^ Settings;
	private: FontAwesome::Sharp::IconButton^ SongsButton;

	private: System::Windows::Forms::Panel^ SideMenu;

	private: System::Windows::Forms::Panel^ panel1;
	
	private:IconButton currentBtn;
	private: System::Windows::Forms::Panel^ pnlcontent;
	private: FontAwesome::Sharp::IconButton^ CurrentlyPlaying;







	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ExploreBoard = (gcnew FontAwesome::Sharp::IconButton());
			this->AccountBtn = (gcnew FontAwesome::Sharp::IconButton());
			this->Settings = (gcnew FontAwesome::Sharp::IconButton());
			this->SongsButton = (gcnew FontAwesome::Sharp::IconButton());
			this->SideMenu = (gcnew System::Windows::Forms::Panel());
			this->CurrentlyPlaying = (gcnew FontAwesome::Sharp::IconButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pnlcontent = (gcnew System::Windows::Forms::Panel());
			this->SideMenu->SuspendLayout();
			this->SuspendLayout();
			// 
			// ExploreBoard
			// 
			this->ExploreBoard->Cursor = System::Windows::Forms::Cursors::Hand;
			this->ExploreBoard->Dock = System::Windows::Forms::DockStyle::Top;
			this->ExploreBoard->FlatAppearance->BorderSize = 0;
			this->ExploreBoard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->ExploreBoard->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->ExploreBoard->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExploreBoard->ForeColor = System::Drawing::Color::White;
			this->ExploreBoard->IconChar = FontAwesome::Sharp::IconChar::LocationArrow;
			this->ExploreBoard->IconColor = System::Drawing::Color::White;
			this->ExploreBoard->IconSize = 32;
			this->ExploreBoard->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ExploreBoard->Location = System::Drawing::Point(0, 165);
			this->ExploreBoard->Name = L"ExploreBoard";
			this->ExploreBoard->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->ExploreBoard->Rotation = 0;
			this->ExploreBoard->Size = System::Drawing::Size(326, 139);
			this->ExploreBoard->TabIndex = 1;
			this->ExploreBoard->Text = L"Explore";
			this->ExploreBoard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ExploreBoard->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ExploreBoard->UseVisualStyleBackColor = true;
			this->ExploreBoard->Click += gcnew System::EventHandler(this, &Dashboard::ExploreBoard_Click);
			// 
			// AccountBtn
			// 
			this->AccountBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->AccountBtn->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->AccountBtn->FlatAppearance->BorderSize = 0;
			this->AccountBtn->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AccountBtn->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->AccountBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AccountBtn->ForeColor = System::Drawing::Color::White;
			this->AccountBtn->IconChar = FontAwesome::Sharp::IconChar::User;
			this->AccountBtn->IconColor = System::Drawing::Color::White;
			this->AccountBtn->IconSize = 32;
			this->AccountBtn->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->AccountBtn->Location = System::Drawing::Point(0, 653);
			this->AccountBtn->Name = L"AccountBtn";
			this->AccountBtn->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->AccountBtn->Rotation = 0;
			this->AccountBtn->Size = System::Drawing::Size(326, 139);
			this->AccountBtn->TabIndex = 3;
			this->AccountBtn->Text = L"Account";
			this->AccountBtn->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->AccountBtn->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->AccountBtn->UseVisualStyleBackColor = true;
			this->AccountBtn->Click += gcnew System::EventHandler(this, &Dashboard::AccountBtn_Click);
			// 
			// Settings
			// 
			this->Settings->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Settings->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->Settings->FlatAppearance->BorderSize = 0;
			this->Settings->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Settings->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Settings->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Settings->ForeColor = System::Drawing::Color::White;
			this->Settings->IconChar = FontAwesome::Sharp::IconChar::Tools;
			this->Settings->IconColor = System::Drawing::Color::White;
			this->Settings->IconSize = 32;
			this->Settings->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Settings->Location = System::Drawing::Point(0, 792);
			this->Settings->Name = L"Settings";
			this->Settings->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->Settings->Rotation = 0;
			this->Settings->Size = System::Drawing::Size(326, 139);
			this->Settings->TabIndex = 4;
			this->Settings->Text = L"Settings";
			this->Settings->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Settings->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->Settings->UseVisualStyleBackColor = true;
			// 
			// SongsButton
			// 
			this->SongsButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SongsButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->SongsButton->FlatAppearance->BorderSize = 0;
			this->SongsButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->SongsButton->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->SongsButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SongsButton->ForeColor = System::Drawing::Color::White;
			this->SongsButton->IconChar = FontAwesome::Sharp::IconChar::Book;
			this->SongsButton->IconColor = System::Drawing::Color::White;
			this->SongsButton->IconSize = 32;
			this->SongsButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SongsButton->Location = System::Drawing::Point(0, 304);
			this->SongsButton->Name = L"SongsButton";
			this->SongsButton->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->SongsButton->Rotation = 0;
			this->SongsButton->Size = System::Drawing::Size(326, 139);
			this->SongsButton->TabIndex = 2;
			this->SongsButton->Text = L"All Songs";
			this->SongsButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->SongsButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->SongsButton->UseVisualStyleBackColor = true;
			this->SongsButton->Click += gcnew System::EventHandler(this, &Dashboard::SongsButton_Click);
			// 
			// SideMenu
			// 
			this->SideMenu->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(31)), static_cast<System::Int32>(static_cast<System::Byte>(31)),
				static_cast<System::Int32>(static_cast<System::Byte>(70)));
			this->SideMenu->Controls->Add(this->CurrentlyPlaying);
			this->SideMenu->Controls->Add(this->AccountBtn);
			this->SideMenu->Controls->Add(this->SongsButton);
			this->SideMenu->Controls->Add(this->ExploreBoard);
			this->SideMenu->Controls->Add(this->panel1);
			this->SideMenu->Controls->Add(this->Settings);
			this->SideMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->SideMenu->Location = System::Drawing::Point(0, 0);
			this->SideMenu->Name = L"SideMenu";
			this->SideMenu->Size = System::Drawing::Size(326, 931);
			this->SideMenu->TabIndex = 5;
			// 
			// CurrentlyPlaying
			// 
			this->CurrentlyPlaying->Cursor = System::Windows::Forms::Cursors::Hand;
			this->CurrentlyPlaying->Dock = System::Windows::Forms::DockStyle::Top;
			this->CurrentlyPlaying->FlatAppearance->BorderSize = 0;
			this->CurrentlyPlaying->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->CurrentlyPlaying->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->CurrentlyPlaying->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CurrentlyPlaying->ForeColor = System::Drawing::Color::White;
			this->CurrentlyPlaying->IconChar = FontAwesome::Sharp::IconChar::Music;
			this->CurrentlyPlaying->IconColor = System::Drawing::Color::White;
			this->CurrentlyPlaying->IconSize = 32;
			this->CurrentlyPlaying->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->CurrentlyPlaying->Location = System::Drawing::Point(0, 443);
			this->CurrentlyPlaying->Name = L"CurrentlyPlaying";
			this->CurrentlyPlaying->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			this->CurrentlyPlaying->Rotation = 0;
			this->CurrentlyPlaying->Size = System::Drawing::Size(326, 139);
			this->CurrentlyPlaying->TabIndex = 6;
			this->CurrentlyPlaying->Text = L"Currently Playing";
			this->CurrentlyPlaying->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->CurrentlyPlaying->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->CurrentlyPlaying->UseVisualStyleBackColor = true;
			this->CurrentlyPlaying->Click += gcnew System::EventHandler(this, &Dashboard::CurrentlyPlaying_Click);
			// 
			// panel1
			// 
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(326, 165);
			this->panel1->TabIndex = 5;
			// 
			// pnlcontent
			// 
			this->pnlcontent->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pnlcontent->Location = System::Drawing::Point(326, 0);
			this->pnlcontent->Name = L"pnlcontent";
			this->pnlcontent->Size = System::Drawing::Size(1202, 931);
			this->pnlcontent->TabIndex = 6;
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ClientSize = System::Drawing::Size(1528, 931);
			this->Controls->Add(this->pnlcontent);
			this->Controls->Add(this->SideMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->SideMenu->ResumeLayout(false);
			this->ResumeLayout(false);

		}
#pragma endregion

		private: System::Void AccountBtn_Click(System::Object^ sender, System::EventArgs^ e) {
			Account^ account = gcnew Account();
			account->TopLevel = false;
			this->pnlcontent->Controls->Add(account);
			account->BringToFront();
			account->Show();
		}

		private: System::Void ExploreBoard_Click(System::Object^ sender, System::EventArgs^ e) {
			Explore^ explore = gcnew Explore();
			explore->TopLevel = false;
			this->pnlcontent->Controls->Add(explore);
			explore->BringToFront();
			explore->Show();
		}
		private: System::Void SongsButton_Click(System::Object^ sender, System::EventArgs^ e) {
			AllSongs^ AllSongsWindow = gcnew AllSongs();
			AllSongsWindow->TopLevel = false;
			this->pnlcontent->Controls->Add(AllSongsWindow);
			AllSongsWindow->BringToFront();
			AllSongsWindow->Show();
		}
		private: System::Void CurrentlyPlaying_Click(System::Object^ sender, System::EventArgs^ e) {
			CurrentSong^ currentSongWindow = gcnew CurrentSong();
			currentSongWindow->TopLevel = false;
			this->pnlcontent->Controls->Add(currentSongWindow);
			currentSongWindow->BringToFront();
			currentSongWindow->Show();
		}
};
}
