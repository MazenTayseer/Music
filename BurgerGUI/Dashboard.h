#pragma once
#include "Account.h"
#include "Explore.h"
#include "AllSongs.h"
#include "CurrrentSong.h"
#include "LikesPage.h"
#include "Testing.h"
#include "User.h"
#include "signUp.h"
#include "Login.h"

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
		
		Dashboard()
		{

		
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		Dashboard(User^user)
		{


			InitializeComponent();
			label1->Text = L"Hello, " + user->Username;
			label2->Text = user->Username;
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
	private: FontAwesome::Sharp::IconButton^ LogOut;

	protected:


	private: FontAwesome::Sharp::IconButton^ SongsButton;

	private: System::Windows::Forms::Panel^ SideMenu;

	private: System::Windows::Forms::Panel^ panel1;

	private:IconButton currentBtn;
	private: System::Windows::Forms::Panel^ pnlcontent;
	private: FontAwesome::Sharp::IconButton^ CurrentlyPlaying;
	private: FontAwesome::Sharp::IconButton^ LikesButton;
	private: System::Windows::Forms::Label^ label1;

	private: FontAwesome::Sharp::IconButton^ iconButton1;
	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
















	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ExploreBoard = (gcnew FontAwesome::Sharp::IconButton());
			this->LogOut = (gcnew FontAwesome::Sharp::IconButton());
			this->SongsButton = (gcnew FontAwesome::Sharp::IconButton());
			this->SideMenu = (gcnew System::Windows::Forms::Panel());
			this->LikesButton = (gcnew FontAwesome::Sharp::IconButton());
			this->CurrentlyPlaying = (gcnew FontAwesome::Sharp::IconButton());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pnlcontent = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SideMenu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->pnlcontent->SuspendLayout();
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
			this->ExploreBoard->Location = System::Drawing::Point(0, 130);
			this->ExploreBoard->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->ExploreBoard->Name = L"ExploreBoard";
			this->ExploreBoard->Padding = System::Windows::Forms::Padding(18, 0, 0, 0);
			this->ExploreBoard->Rotation = 0;
			this->ExploreBoard->Size = System::Drawing::Size(290, 111);
			this->ExploreBoard->TabIndex = 1;
			this->ExploreBoard->Text = L"Explore";
			this->ExploreBoard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->ExploreBoard->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->ExploreBoard->UseVisualStyleBackColor = true;
			this->ExploreBoard->Click += gcnew System::EventHandler(this, &Dashboard::ExploreBoard_Click);
			// 
			// LogOut
			// 
			this->LogOut->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LogOut->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->LogOut->FlatAppearance->BorderSize = 0;
			this->LogOut->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LogOut->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->LogOut->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LogOut->ForeColor = System::Drawing::Color::White;
			this->LogOut->IconChar = FontAwesome::Sharp::IconChar::ArrowCircleLeft;
			this->LogOut->IconColor = System::Drawing::Color::White;
			this->LogOut->IconSize = 32;
			this->LogOut->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->LogOut->Location = System::Drawing::Point(0, 634);
			this->LogOut->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->LogOut->Name = L"LogOut";
			this->LogOut->Padding = System::Windows::Forms::Padding(18, 0, 0, 0);
			this->LogOut->Rotation = 0;
			this->LogOut->Size = System::Drawing::Size(290, 111);
			this->LogOut->TabIndex = 4;
			this->LogOut->Text = L"Close";
			this->LogOut->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->LogOut->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->LogOut->UseVisualStyleBackColor = true;
			this->LogOut->Click += gcnew System::EventHandler(this, &Dashboard::LogOut_Click);
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
			this->SongsButton->Location = System::Drawing::Point(0, 241);
			this->SongsButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SongsButton->Name = L"SongsButton";
			this->SongsButton->Padding = System::Windows::Forms::Padding(18, 0, 0, 0);
			this->SongsButton->Rotation = 0;
			this->SongsButton->Size = System::Drawing::Size(290, 107);
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
			this->SideMenu->Controls->Add(this->LikesButton);
			this->SideMenu->Controls->Add(this->CurrentlyPlaying);
			this->SideMenu->Controls->Add(this->SongsButton);
			this->SideMenu->Controls->Add(this->ExploreBoard);
			this->SideMenu->Controls->Add(this->panel1);
			this->SideMenu->Controls->Add(this->LogOut);
			this->SideMenu->Dock = System::Windows::Forms::DockStyle::Left;
			this->SideMenu->Location = System::Drawing::Point(0, 0);
			this->SideMenu->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SideMenu->Name = L"SideMenu";
			this->SideMenu->Size = System::Drawing::Size(290, 745);
			this->SideMenu->TabIndex = 5;
			// 
			// LikesButton
			// 
			this->LikesButton->Cursor = System::Windows::Forms::Cursors::Hand;
			this->LikesButton->Dock = System::Windows::Forms::DockStyle::Top;
			this->LikesButton->FlatAppearance->BorderSize = 0;
			this->LikesButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->LikesButton->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->LikesButton->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LikesButton->ForeColor = System::Drawing::Color::White;
			this->LikesButton->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->LikesButton->IconColor = System::Drawing::Color::White;
			this->LikesButton->IconSize = 32;
			this->LikesButton->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->LikesButton->Location = System::Drawing::Point(0, 459);
			this->LikesButton->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->LikesButton->Name = L"LikesButton";
			this->LikesButton->Padding = System::Windows::Forms::Padding(18, 0, 0, 0);
			this->LikesButton->Rotation = 0;
			this->LikesButton->Size = System::Drawing::Size(290, 91);
			this->LikesButton->TabIndex = 7;
			this->LikesButton->Text = L"Likes";
			this->LikesButton->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->LikesButton->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->LikesButton->UseVisualStyleBackColor = true;
			this->LikesButton->Click += gcnew System::EventHandler(this, &Dashboard::LikesButton_Click);
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
			this->CurrentlyPlaying->Location = System::Drawing::Point(0, 348);
			this->CurrentlyPlaying->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->CurrentlyPlaying->Name = L"CurrentlyPlaying";
			this->CurrentlyPlaying->Padding = System::Windows::Forms::Padding(18, 0, 0, 0);
			this->CurrentlyPlaying->Rotation = 0;
			this->CurrentlyPlaying->Size = System::Drawing::Size(290, 111);
			this->CurrentlyPlaying->TabIndex = 6;
			this->CurrentlyPlaying->Text = L"Currently Playing";
			this->CurrentlyPlaying->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->CurrentlyPlaying->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->CurrentlyPlaying->UseVisualStyleBackColor = true;
			this->CurrentlyPlaying->Click += gcnew System::EventHandler(this, &Dashboard::CurrentlyPlaying_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->iconButton1);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(290, 130);
			this->panel1->TabIndex = 5;
			// 
			// iconButton1
			// 
			this->iconButton1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->iconButton1->FlatAppearance->BorderColor = System::Drawing::Color::Navy;
			this->iconButton1->FlatAppearance->BorderSize = 0;
			this->iconButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton1->ForeColor = System::Drawing::SystemColors::ControlText;
			this->iconButton1->IconChar = FontAwesome::Sharp::IconChar::User;
			this->iconButton1->IconColor = System::Drawing::Color::White;
			this->iconButton1->IconSize = 44;
			this->iconButton1->Location = System::Drawing::Point(14, 43);
			this->iconButton1->Name = L"iconButton1";
			this->iconButton1->Rotation = 0;
			this->iconButton1->Size = System::Drawing::Size(51, 49);
			this->iconButton1->TabIndex = 2;
			this->iconButton1->UseVisualStyleBackColor = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::White;
			this->label1->Location = System::Drawing::Point(71, 59);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->Click += gcnew System::EventHandler(this, &Dashboard::label1_Click);
			// 
			// pnlcontent
			// 
			this->pnlcontent->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->pnlcontent->Controls->Add(this->label4);
			this->pnlcontent->Controls->Add(this->label3);
			this->pnlcontent->Controls->Add(this->label2);
			this->pnlcontent->Location = System::Drawing::Point(290, 0);
			this->pnlcontent->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pnlcontent->Name = L"pnlcontent";
			this->pnlcontent->Size = System::Drawing::Size(1068, 745);
			this->pnlcontent->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::White;
			this->label4->Location = System::Drawing::Point(56, 389);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(949, 70);
			this->label4->TabIndex = 5;
			this->label4->Text = L"Start Playing your favorite songs";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(239, 308);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(323, 70);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Welcome,";
			this->label3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 36, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(568, 308);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(142, 70);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Kiks";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label2->Click += gcnew System::EventHandler(this, &Dashboard::label2_Click_1);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ClientSize = System::Drawing::Size(1358, 745);
			this->Controls->Add(this->pnlcontent);
			this->Controls->Add(this->SideMenu);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->SideMenu->ResumeLayout(false);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->pnlcontent->ResumeLayout(false);
			this->pnlcontent->PerformLayout();
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
		//usedForSongs::song =
		if (usedForSongs::song != "") {
			CurrentSong^ currentSongWindow = gcnew CurrentSong(usedForSongs::song);
			currentSongWindow->TopLevel = false;
			this->pnlcontent->Controls->Add(currentSongWindow);
			currentSongWindow->BringToFront();
			currentSongWindow->Show();
		}
		else {
			CurrentSong^ currentSongWindo = gcnew CurrentSong();
			currentSongWindo->TopLevel = false;
			this->pnlcontent->Controls->Add(currentSongWindo);
			currentSongWindo->BringToFront();
			currentSongWindo->Show();
		}
		/*currentSongWindow->TopLevel = false;
		this->pnlcontent->Controls->Add(currentSongWindow);
		currentSongWindow->BringToFront();
		currentSongWindow->Show();*/
	}
	private: System::Void LikesButton_Click(System::Object^ sender, System::EventArgs^ e) {
		LikesPage^ likespage = gcnew LikesPage();
		likespage->TopLevel = false;
		this->pnlcontent->Controls->Add(likespage);
		likespage->BringToFront();
		likespage->Show();
	}

	private: System::Void LogOut_Click(System::Object^ sender, System::EventArgs^ e) {
		//this->LogOut1 = true;
		this->Close();

	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label2_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}