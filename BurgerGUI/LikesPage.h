#pragma once
#include "Testing.h"

namespace BugerGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for LikesPage
	/// </summary>
	public ref class LikesPage : public System::Windows::Forms::Form
	{
	public:
		LikesPage(void)
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
		~LikesPage()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: FontAwesome::Sharp::IconPictureBox^ iconPictureBox1;
	private: FontAwesome::Sharp::IconButton^ song;
	private: FontAwesome::Sharp::IconButton^ iconButton1;









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
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->iconPictureBox1 = (gcnew FontAwesome::Sharp::IconPictureBox());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconPictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->iconPictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1068, 74);
			this->panel1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MediumPurple;
			this->label1->Location = System::Drawing::Point(78, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(68, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Likes";
			// 
			// iconPictureBox1
			// 
			this->iconPictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->iconPictureBox1->ForeColor = System::Drawing::Color::MediumPurple;
			this->iconPictureBox1->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->iconPictureBox1->IconColor = System::Drawing::Color::MediumPurple;
			this->iconPictureBox1->IconSize = 35;
			this->iconPictureBox1->Location = System::Drawing::Point(38, 25);
			this->iconPictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconPictureBox1->Name = L"iconPictureBox1";
			this->iconPictureBox1->Size = System::Drawing::Size(44, 35);
			this->iconPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconPictureBox1->TabIndex = 0;
			this->iconPictureBox1->TabStop = false;
			// 
			// iconButton1
			// 
			this->iconButton1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->iconButton1->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton1->IconColor = System::Drawing::Color::Black;
			this->iconButton1->IconSize = 16;
			this->iconButton1->Location = System::Drawing::Point(925, 700);
			this->iconButton1->Name = L"iconButton1";
			this->iconButton1->Rotation = 0;
			this->iconButton1->Size = System::Drawing::Size(131, 33);
			this->iconButton1->TabIndex = 2;
			this->iconButton1->Text = L"Shuffle";
			this->iconButton1->UseVisualStyleBackColor = true;
			this->iconButton1->Click += gcnew System::EventHandler(this, &LikesPage::iconButton1_Click);
			// 
			// LikesPage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ClientSize = System::Drawing::Size(1068, 745);
			this->Controls->Add(this->iconButton1);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"LikesPage";
			this->Text = L"CurrentSong";
			this->Load += gcnew System::EventHandler(this, &LikesPage::LikesPage_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconPictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void LikesPage_Load(System::Object^ sender, System::EventArgs^ e) {
		int x = 0;
		int y = 79, yInc = 1;
		for (int i = 0; i < usedForSongs::LikesList.nodeCount(); i++) {
			FontAwesome::Sharp::IconButton^ label = (gcnew FontAwesome::Sharp::IconButton());
			
			label->Location = System::Drawing::Point(0, 79 * yInc);
			label->Size = System::Drawing::Size(1068, 58);
			label->Name = L"LikedSong";
			label->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			label->ForeColor = System::Drawing::Color::White;
			label->FlatAppearance->BorderSize = 0;
			label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			label->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			label->Padding = System::Windows::Forms::Padding(20, 0, 0, 0);
			label->Cursor = System::Windows::Forms::Cursors::Hand;
			label->FlatAppearance->BorderSize = 0;
			label->FlatStyle = System::Windows::Forms::FlatStyle::Flat;

			string s = usedForSongs::LikesList.get(i);
			String^ ss = gcnew String(s.c_str());

			label->Text = yInc + " - " + ss;
			label->Tag = usedForSongs::mp.at(s);

			label->Click += gcnew System::EventHandler(this ,&LikesPage::Play_Click);
			Controls->Add(label);
			yInc += 1;
		}
	}


	private: System::Void Play_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!usedForSongs::flag) {
			Button^ button = safe_cast<Button^>(sender);
			int tagNumber = Convert::ToInt32(button->Tag);
			string name = usedForSongs::songsList.get(tagNumber);

			usedForSongs::songsList.playSong(name);

			//index = tagNumber;
			usedForSongs::flag = true;
			//state = "Playing";
			usedForSongs::song = usedForSongs::songsList.get(tagNumber).c_str();
		}
		else {
			usedForSongs::songsList.stopSong(usedForSongs::song);
			Button^ button = safe_cast<Button^>(sender);
			int tagNumber = Convert::ToInt32(button->Tag);
			string name = usedForSongs::songsList.get(tagNumber);

			usedForSongs::songsList.playSong(name);
			usedForSongs::song = name;
		}

	}

	private: System::Void iconButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!usedForSongs::LikesList.empty()) {
			usedForSongs::LikesList = usedForSongs::LikesList.shuffleList();
		}
	}
};
}