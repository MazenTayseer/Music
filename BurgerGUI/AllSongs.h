#pragma once
#include <string>
#include "DoubleLinked.h"

namespace BugerGUI {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	

	 ////<summary>
	 ////Summary for AllSongs
	 ////</summary>
	public ref class AllSongs : public System::Windows::Forms::Form
	{
	public:
		AllSongs(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~AllSongs()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;
	private: FontAwesome::Sharp::IconPictureBox^ iconPictureBox1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel2;
	private: FontAwesome::Sharp::IconButton^ DripTooHard;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel3;
	private: FontAwesome::Sharp::IconButton^ Manhos;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: FontAwesome::Sharp::IconButton^ iconButton2;
	private: FontAwesome::Sharp::IconButton^ iconButton1;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AllSongs::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->iconPictureBox1 = (gcnew FontAwesome::Sharp::IconPictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->DripTooHard = (gcnew FontAwesome::Sharp::IconButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Manhos = (gcnew FontAwesome::Sharp::IconButton());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton2 = (gcnew FontAwesome::Sharp::IconButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconPictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
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
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1180, 93);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MediumPurple;
			this->label1->Location = System::Drawing::Point(88, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(135, 34);
			this->label1->TabIndex = 1;
			this->label1->Text = L"All Songs";
			// 
			// iconPictureBox1
			// 
			this->iconPictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->iconPictureBox1->ForeColor = System::Drawing::Color::MediumPurple;
			this->iconPictureBox1->IconChar = FontAwesome::Sharp::IconChar::Book;
			this->iconPictureBox1->IconColor = System::Drawing::Color::MediumPurple;
			this->iconPictureBox1->IconSize = 44;
			this->iconPictureBox1->Location = System::Drawing::Point(43, 31);
			this->iconPictureBox1->Name = L"iconPictureBox1";
			this->iconPictureBox1->Size = System::Drawing::Size(49, 44);
			this->iconPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconPictureBox1->TabIndex = 0;
			this->iconPictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->iconButton2);
			this->panel2->Controls->Add(this->DripTooHard);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Location = System::Drawing::Point(43, 152);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1091, 79);
			this->panel2->TabIndex = 1;
			// 
			// DripTooHard
			// 
			this->DripTooHard->Dock = System::Windows::Forms::DockStyle::Left;
			this->DripTooHard->FlatAppearance->BorderSize = 0;
			this->DripTooHard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DripTooHard->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->DripTooHard->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DripTooHard->ForeColor = System::Drawing::Color::White;
			this->DripTooHard->IconChar = FontAwesome::Sharp::IconChar::None;
			this->DripTooHard->IconColor = System::Drawing::Color::Black;
			this->DripTooHard->IconSize = 16;
			this->DripTooHard->Location = System::Drawing::Point(100, 0);
			this->DripTooHard->Name = L"DripTooHard";
			this->DripTooHard->Rotation = 0;
			this->DripTooHard->Size = System::Drawing::Size(988, 79);
			this->DripTooHard->TabIndex = 1;
			this->DripTooHard->Tag = L"0";
			this->DripTooHard->Text = L"1 - Drip too hard\r\n     Lil Baby\r\n";
			this->DripTooHard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->DripTooHard->UseVisualStyleBackColor = false;
			this->DripTooHard->Click += gcnew System::EventHandler(this, &AllSongs::Song_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(100, 79);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->iconButton1);
			this->panel3->Controls->Add(this->Manhos);
			this->panel3->Controls->Add(this->pictureBox2);
			this->panel3->Location = System::Drawing::Point(43, 269);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1091, 79);
			this->panel3->TabIndex = 2;
			// 
			// Manhos
			// 
			this->Manhos->Dock = System::Windows::Forms::DockStyle::Left;
			this->Manhos->FlatAppearance->BorderSize = 0;
			this->Manhos->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Manhos->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Manhos->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Manhos->ForeColor = System::Drawing::Color::White;
			this->Manhos->IconChar = FontAwesome::Sharp::IconChar::None;
			this->Manhos->IconColor = System::Drawing::Color::Black;
			this->Manhos->IconSize = 16;
			this->Manhos->Location = System::Drawing::Point(100, 0);
			this->Manhos->Name = L"Manhos";
			this->Manhos->Rotation = 0;
			this->Manhos->Size = System::Drawing::Size(988, 79);
			this->Manhos->TabIndex = 1;
			this->Manhos->Tag = L"1";
			this->Manhos->Text = L"2 - Manhos\r\n     Wegz\r\n";
			this->Manhos->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->Manhos->UseVisualStyleBackColor = false;
			this->Manhos->Click += gcnew System::EventHandler(this, &AllSongs::Song_Click);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Left;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(100, 79);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox2->TabIndex = 0;
			this->pictureBox2->TabStop = false;
			// 
			// iconButton1
			// 
			this->iconButton1->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton1->FlatAppearance->BorderSize = 0;
			this->iconButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton1->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->iconButton1->IconColor = System::Drawing::Color::White;
			this->iconButton1->IconSize = 44;
			this->iconButton1->Location = System::Drawing::Point(1012, 0);
			this->iconButton1->Name = L"iconButton1";
			this->iconButton1->Rotation = 0;
			this->iconButton1->Size = System::Drawing::Size(79, 79);
			this->iconButton1->TabIndex = 2;
			this->iconButton1->UseVisualStyleBackColor = true;
			// 
			// iconButton2
			// 
			this->iconButton2->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton2->FlatAppearance->BorderSize = 0;
			this->iconButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton2->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton2->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->iconButton2->IconColor = System::Drawing::Color::White;
			this->iconButton2->IconSize = 44;
			this->iconButton2->Location = System::Drawing::Point(1012, 0);
			this->iconButton2->Name = L"iconButton2";
			this->iconButton2->Rotation = 0;
			this->iconButton2->Size = System::Drawing::Size(79, 79);
			this->iconButton2->TabIndex = 3;
			this->iconButton2->UseVisualStyleBackColor = true;
			// 
			// AllSongs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ClientSize = System::Drawing::Size(1180, 875);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AllSongs";
			this->Text = L"Account";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconPictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel3->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->ResumeLayout(false);

		}

		#pragma endregion
		private: System::Void Song_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ button = safe_cast<Button^>(sender);
			int tagNumber = Convert::ToInt32(button->Tag);
			//string name = songs.get(tagNumber);
			//songs.playSong(name);
		}
};
}
