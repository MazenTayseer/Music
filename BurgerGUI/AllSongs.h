#pragma once
#include <string>
#include "DoubleLinked.h"
#include "CurrrentSong.h"
#include "Testing.h"
//#include <msclr\marshal_cppstd.h>

namespace BugerGUI {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace FontAwesome::Sharp;


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
	private: FontAwesome::Sharp::IconButton^ Likes0;

	private: FontAwesome::Sharp::IconButton^ Stop;
	private: FontAwesome::Sharp::IconButton^ Pause1;
	private: FontAwesome::Sharp::IconButton^ DripTooHard1;
	private: FontAwesome::Sharp::IconButton^ Play1;









	private: System::Windows::Forms::Panel^ panel4;
	private: FontAwesome::Sharp::IconButton^ Play2;
	private: FontAwesome::Sharp::IconButton^ Stop2;
	private: FontAwesome::Sharp::IconButton^ Pause2;
	private: FontAwesome::Sharp::IconButton^ Likes1;





	private: FontAwesome::Sharp::IconButton^ iconButton7;

	//private: bool usedForSongs::flag = false;
	//private: int index = -1;
	//private: String^ state = "NULL";
	private: System::Windows::Forms::Panel^ panel3;
	private: FontAwesome::Sharp::IconButton^ Play3;
	private: FontAwesome::Sharp::IconButton^ Stop3;
	private: FontAwesome::Sharp::IconButton^ Pause3;
	private: FontAwesome::Sharp::IconButton^ Likes2;






	private: FontAwesome::Sharp::IconButton^ iconButton5;
	private: System::Windows::Forms::Panel^ panel5;
	private: FontAwesome::Sharp::IconButton^ iconButton1;
	private: FontAwesome::Sharp::IconButton^ iconButton2;
	private: FontAwesome::Sharp::IconButton^ iconButton3;
	private: FontAwesome::Sharp::IconButton^ Likes3;

	private: FontAwesome::Sharp::IconButton^ iconButton6;
	private: System::Windows::Forms::Panel^ panel6;
	private: FontAwesome::Sharp::IconButton^ iconButton4;
	private: FontAwesome::Sharp::IconButton^ iconButton8;
	private: FontAwesome::Sharp::IconButton^ iconButton9;
	private: FontAwesome::Sharp::IconButton^ iconButton10;
	private: FontAwesome::Sharp::IconButton^ iconButton11;
	private: System::Windows::Forms::Panel^ panel7;
	private: FontAwesome::Sharp::IconButton^ iconButton12;
	private: FontAwesome::Sharp::IconButton^ iconButton13;
	private: FontAwesome::Sharp::IconButton^ iconButton14;
	private: FontAwesome::Sharp::IconButton^ iconButton15;
	private: FontAwesome::Sharp::IconButton^ iconButton16;
	private: System::Windows::Forms::Panel^ panel8;
	private: FontAwesome::Sharp::IconButton^ iconButton17;
	private: FontAwesome::Sharp::IconButton^ iconButton18;
	private: FontAwesome::Sharp::IconButton^ iconButton19;
	private: FontAwesome::Sharp::IconButton^ iconButton20;
	private: FontAwesome::Sharp::IconButton^ iconButton21;

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
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->Play1 = (gcnew FontAwesome::Sharp::IconButton());
			this->Stop = (gcnew FontAwesome::Sharp::IconButton());
			this->Pause1 = (gcnew FontAwesome::Sharp::IconButton());
			this->Likes0 = (gcnew FontAwesome::Sharp::IconButton());
			this->DripTooHard1 = (gcnew FontAwesome::Sharp::IconButton());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->Play2 = (gcnew FontAwesome::Sharp::IconButton());
			this->Stop2 = (gcnew FontAwesome::Sharp::IconButton());
			this->Pause2 = (gcnew FontAwesome::Sharp::IconButton());
			this->Likes1 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton7 = (gcnew FontAwesome::Sharp::IconButton());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->Play3 = (gcnew FontAwesome::Sharp::IconButton());
			this->Stop3 = (gcnew FontAwesome::Sharp::IconButton());
			this->Pause3 = (gcnew FontAwesome::Sharp::IconButton());
			this->Likes2 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton5 = (gcnew FontAwesome::Sharp::IconButton());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton2 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton3 = (gcnew FontAwesome::Sharp::IconButton());
			this->Likes3 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton6 = (gcnew FontAwesome::Sharp::IconButton());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->iconButton4 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton8 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton9 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton10 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton11 = (gcnew FontAwesome::Sharp::IconButton());
			this->panel7 = (gcnew System::Windows::Forms::Panel());
			this->iconButton12 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton13 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton14 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton15 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton16 = (gcnew FontAwesome::Sharp::IconButton());
			this->panel8 = (gcnew System::Windows::Forms::Panel());
			this->iconButton17 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton18 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton19 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton20 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton21 = (gcnew FontAwesome::Sharp::IconButton());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconPictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->panel3->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panel7->SuspendLayout();
			this->panel8->SuspendLayout();
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
			this->panel1->Size = System::Drawing::Size(1049, 74);
			this->panel1->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MediumPurple;
			this->label1->Location = System::Drawing::Point(78, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(118, 30);
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
			this->iconPictureBox1->IconSize = 35;
			this->iconPictureBox1->Location = System::Drawing::Point(38, 25);
			this->iconPictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconPictureBox1->Name = L"iconPictureBox1";
			this->iconPictureBox1->Size = System::Drawing::Size(44, 35);
			this->iconPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconPictureBox1->TabIndex = 0;
			this->iconPictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Play1);
			this->panel2->Controls->Add(this->Stop);
			this->panel2->Controls->Add(this->Pause1);
			this->panel2->Controls->Add(this->Likes0);
			this->panel2->Controls->Add(this->DripTooHard1);
			this->panel2->Location = System::Drawing::Point(38, 122);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(967, 63);
			this->panel2->TabIndex = 1;
			// 
			// Play1
			// 
			this->Play1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Play1->Dock = System::Windows::Forms::DockStyle::Right;
			this->Play1->FlatAppearance->BorderSize = 0;
			this->Play1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Play1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Play1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->Play1->IconChar = FontAwesome::Sharp::IconChar::Play;
			this->Play1->IconColor = System::Drawing::Color::White;
			this->Play1->IconSize = 44;
			this->Play1->Location = System::Drawing::Point(687, 0);
			this->Play1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Play1->Name = L"Play1";
			this->Play1->Rotation = 0;
			this->Play1->Size = System::Drawing::Size(70, 63);
			this->Play1->TabIndex = 6;
			this->Play1->Tag = L"0";
			this->Play1->UseVisualStyleBackColor = true;
			this->Play1->Visible = false;
			this->Play1->Click += gcnew System::EventHandler(this, &AllSongs::Play_Click);
			// 
			// Stop
			// 
			this->Stop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Stop->Dock = System::Windows::Forms::DockStyle::Right;
			this->Stop->FlatAppearance->BorderSize = 0;
			this->Stop->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Stop->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Stop->IconChar = FontAwesome::Sharp::IconChar::Stop;
			this->Stop->IconColor = System::Drawing::Color::White;
			this->Stop->IconSize = 44;
			this->Stop->Location = System::Drawing::Point(757, 0);
			this->Stop->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Stop->Name = L"Stop";
			this->Stop->Rotation = 0;
			this->Stop->Size = System::Drawing::Size(70, 63);
			this->Stop->TabIndex = 5;
			this->Stop->Tag = L"0";
			this->Stop->UseVisualStyleBackColor = true;
			this->Stop->Visible = false;
			this->Stop->Click += gcnew System::EventHandler(this, &AllSongs::Stop_Click);
			// 
			// Pause1
			// 
			this->Pause1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pause1->Dock = System::Windows::Forms::DockStyle::Right;
			this->Pause1->FlatAppearance->BorderSize = 0;
			this->Pause1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Pause1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Pause1->IconChar = FontAwesome::Sharp::IconChar::Pause;
			this->Pause1->IconColor = System::Drawing::Color::White;
			this->Pause1->IconSize = 44;
			this->Pause1->Location = System::Drawing::Point(827, 0);
			this->Pause1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Pause1->Name = L"Pause1";
			this->Pause1->Rotation = 0;
			this->Pause1->Size = System::Drawing::Size(70, 63);
			this->Pause1->TabIndex = 4;
			this->Pause1->Tag = L"0";
			this->Pause1->UseVisualStyleBackColor = true;
			this->Pause1->Visible = false;
			this->Pause1->Click += gcnew System::EventHandler(this, &AllSongs::Pause_Click);
			// 
			// Likes0
			// 
			this->Likes0->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Likes0->Dock = System::Windows::Forms::DockStyle::Right;
			this->Likes0->FlatAppearance->BorderSize = 0;
			this->Likes0->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Likes0->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Likes0->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->Likes0->IconColor = System::Drawing::Color::White;
			this->Likes0->IconSize = 44;
			this->Likes0->Location = System::Drawing::Point(897, 0);
			this->Likes0->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Likes0->Name = L"Likes0";
			this->Likes0->Rotation = 0;
			this->Likes0->Size = System::Drawing::Size(70, 63);
			this->Likes0->TabIndex = 3;
			this->Likes0->Tag = L"0";
			this->Likes0->UseVisualStyleBackColor = true;
			this->Likes0->Click += gcnew System::EventHandler(this, &AllSongs::AddToLikes);
			// 
			// DripTooHard1
			// 
			this->DripTooHard1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->DripTooHard1->Dock = System::Windows::Forms::DockStyle::Left;
			this->DripTooHard1->FlatAppearance->BorderSize = 0;
			this->DripTooHard1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->DripTooHard1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->DripTooHard1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->DripTooHard1->ForeColor = System::Drawing::Color::White;
			this->DripTooHard1->IconChar = FontAwesome::Sharp::IconChar::None;
			this->DripTooHard1->IconColor = System::Drawing::Color::Black;
			this->DripTooHard1->IconSize = 16;
			this->DripTooHard1->Location = System::Drawing::Point(0, 0);
			this->DripTooHard1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->DripTooHard1->Name = L"DripTooHard1";
			this->DripTooHard1->Rotation = 0;
			this->DripTooHard1->Size = System::Drawing::Size(897, 63);
			this->DripTooHard1->TabIndex = 1;
			this->DripTooHard1->Tag = L"0";
			this->DripTooHard1->Text = L"1 - Drip too hard";
			this->DripTooHard1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->DripTooHard1->UseVisualStyleBackColor = false;
			this->DripTooHard1->Click += gcnew System::EventHandler(this, &AllSongs::Play_Click);
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->Play2);
			this->panel4->Controls->Add(this->Stop2);
			this->panel4->Controls->Add(this->Pause2);
			this->panel4->Controls->Add(this->Likes1);
			this->panel4->Controls->Add(this->iconButton7);
			this->panel4->Location = System::Drawing::Point(38, 210);
			this->panel4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(967, 63);
			this->panel4->TabIndex = 3;
			// 
			// Play2
			// 
			this->Play2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Play2->Dock = System::Windows::Forms::DockStyle::Right;
			this->Play2->FlatAppearance->BorderSize = 0;
			this->Play2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Play2->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Play2->IconChar = FontAwesome::Sharp::IconChar::Play;
			this->Play2->IconColor = System::Drawing::Color::White;
			this->Play2->IconSize = 44;
			this->Play2->Location = System::Drawing::Point(687, 0);
			this->Play2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Play2->Name = L"Play2";
			this->Play2->Rotation = 0;
			this->Play2->Size = System::Drawing::Size(70, 63);
			this->Play2->TabIndex = 6;
			this->Play2->Tag = L"1";
			this->Play2->UseVisualStyleBackColor = true;
			this->Play2->Visible = false;
			this->Play2->Click += gcnew System::EventHandler(this, &AllSongs::Play_Click);
			// 
			// Stop2
			// 
			this->Stop2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Stop2->Dock = System::Windows::Forms::DockStyle::Right;
			this->Stop2->FlatAppearance->BorderSize = 0;
			this->Stop2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Stop2->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Stop2->IconChar = FontAwesome::Sharp::IconChar::Stop;
			this->Stop2->IconColor = System::Drawing::Color::White;
			this->Stop2->IconSize = 44;
			this->Stop2->Location = System::Drawing::Point(757, 0);
			this->Stop2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Stop2->Name = L"Stop2";
			this->Stop2->Rotation = 0;
			this->Stop2->Size = System::Drawing::Size(70, 63);
			this->Stop2->TabIndex = 5;
			this->Stop2->Tag = L"1";
			this->Stop2->UseVisualStyleBackColor = true;
			this->Stop2->Visible = false;
			this->Stop2->Click += gcnew System::EventHandler(this, &AllSongs::Stop_Click);
			// 
			// Pause2
			// 
			this->Pause2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pause2->Dock = System::Windows::Forms::DockStyle::Right;
			this->Pause2->FlatAppearance->BorderSize = 0;
			this->Pause2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Pause2->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Pause2->IconChar = FontAwesome::Sharp::IconChar::Pause;
			this->Pause2->IconColor = System::Drawing::Color::White;
			this->Pause2->IconSize = 44;
			this->Pause2->Location = System::Drawing::Point(827, 0);
			this->Pause2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Pause2->Name = L"Pause2";
			this->Pause2->Rotation = 0;
			this->Pause2->Size = System::Drawing::Size(70, 63);
			this->Pause2->TabIndex = 4;
			this->Pause2->Tag = L"1";
			this->Pause2->UseVisualStyleBackColor = true;
			this->Pause2->Visible = false;
			this->Pause2->Click += gcnew System::EventHandler(this, &AllSongs::Pause_Click);
			// 
			// Likes1
			// 
			this->Likes1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Likes1->Dock = System::Windows::Forms::DockStyle::Right;
			this->Likes1->FlatAppearance->BorderSize = 0;
			this->Likes1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Likes1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Likes1->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->Likes1->IconColor = System::Drawing::Color::White;
			this->Likes1->IconSize = 44;
			this->Likes1->Location = System::Drawing::Point(897, 0);
			this->Likes1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Likes1->Name = L"Likes1";
			this->Likes1->Rotation = 0;
			this->Likes1->Size = System::Drawing::Size(70, 63);
			this->Likes1->TabIndex = 3;
			this->Likes1->Tag = L"1";
			this->Likes1->UseVisualStyleBackColor = true;
			this->Likes1->Click += gcnew System::EventHandler(this, &AllSongs::AddToLikes);
			// 
			// iconButton7
			// 
			this->iconButton7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton7->Dock = System::Windows::Forms::DockStyle::Left;
			this->iconButton7->FlatAppearance->BorderSize = 0;
			this->iconButton7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton7->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton7->ForeColor = System::Drawing::Color::White;
			this->iconButton7->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton7->IconColor = System::Drawing::Color::Black;
			this->iconButton7->IconSize = 16;
			this->iconButton7->Location = System::Drawing::Point(0, 0);
			this->iconButton7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton7->Name = L"iconButton7";
			this->iconButton7->Rotation = 0;
			this->iconButton7->Size = System::Drawing::Size(897, 63);
			this->iconButton7->TabIndex = 1;
			this->iconButton7->Tag = L"1";
			this->iconButton7->Text = L"2 - Man7os";
			this->iconButton7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton7->UseVisualStyleBackColor = false;
			this->iconButton7->Click += gcnew System::EventHandler(this, &AllSongs::Play_Click);
			// 
			// panel3
			// 
			this->panel3->Controls->Add(this->Play3);
			this->panel3->Controls->Add(this->Stop3);
			this->panel3->Controls->Add(this->Pause3);
			this->panel3->Controls->Add(this->Likes2);
			this->panel3->Controls->Add(this->iconButton5);
			this->panel3->Location = System::Drawing::Point(38, 298);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(967, 63);
			this->panel3->TabIndex = 7;
			// 
			// Play3
			// 
			this->Play3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Play3->Dock = System::Windows::Forms::DockStyle::Right;
			this->Play3->FlatAppearance->BorderSize = 0;
			this->Play3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Play3->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Play3->IconChar = FontAwesome::Sharp::IconChar::Play;
			this->Play3->IconColor = System::Drawing::Color::White;
			this->Play3->IconSize = 44;
			this->Play3->Location = System::Drawing::Point(687, 0);
			this->Play3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Play3->Name = L"Play3";
			this->Play3->Rotation = 0;
			this->Play3->Size = System::Drawing::Size(70, 63);
			this->Play3->TabIndex = 6;
			this->Play3->Tag = L"2";
			this->Play3->UseVisualStyleBackColor = true;
			this->Play3->Visible = false;
			this->Play3->Click += gcnew System::EventHandler(this, &AllSongs::Play_Click);
			// 
			// Stop3
			// 
			this->Stop3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Stop3->Dock = System::Windows::Forms::DockStyle::Right;
			this->Stop3->FlatAppearance->BorderSize = 0;
			this->Stop3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Stop3->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Stop3->IconChar = FontAwesome::Sharp::IconChar::Stop;
			this->Stop3->IconColor = System::Drawing::Color::White;
			this->Stop3->IconSize = 44;
			this->Stop3->Location = System::Drawing::Point(757, 0);
			this->Stop3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Stop3->Name = L"Stop3";
			this->Stop3->Rotation = 0;
			this->Stop3->Size = System::Drawing::Size(70, 63);
			this->Stop3->TabIndex = 5;
			this->Stop3->Tag = L"2";
			this->Stop3->UseVisualStyleBackColor = true;
			this->Stop3->Visible = false;
			this->Stop3->Click += gcnew System::EventHandler(this, &AllSongs::Stop_Click);
			// 
			// Pause3
			// 
			this->Pause3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pause3->Dock = System::Windows::Forms::DockStyle::Right;
			this->Pause3->FlatAppearance->BorderSize = 0;
			this->Pause3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Pause3->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Pause3->IconChar = FontAwesome::Sharp::IconChar::Pause;
			this->Pause3->IconColor = System::Drawing::Color::White;
			this->Pause3->IconSize = 44;
			this->Pause3->Location = System::Drawing::Point(827, 0);
			this->Pause3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Pause3->Name = L"Pause3";
			this->Pause3->Rotation = 0;
			this->Pause3->Size = System::Drawing::Size(70, 63);
			this->Pause3->TabIndex = 4;
			this->Pause3->Tag = L"2";
			this->Pause3->UseVisualStyleBackColor = true;
			this->Pause3->Visible = false;
			this->Pause3->Click += gcnew System::EventHandler(this, &AllSongs::Pause_Click);
			// 
			// Likes2
			// 
			this->Likes2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Likes2->Dock = System::Windows::Forms::DockStyle::Right;
			this->Likes2->FlatAppearance->BorderSize = 0;
			this->Likes2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Likes2->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Likes2->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->Likes2->IconColor = System::Drawing::Color::White;
			this->Likes2->IconSize = 44;
			this->Likes2->Location = System::Drawing::Point(897, 0);
			this->Likes2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Likes2->Name = L"Likes2";
			this->Likes2->Rotation = 0;
			this->Likes2->Size = System::Drawing::Size(70, 63);
			this->Likes2->TabIndex = 3;
			this->Likes2->Tag = L"2";
			this->Likes2->UseVisualStyleBackColor = true;
			this->Likes2->Click += gcnew System::EventHandler(this, &AllSongs::AddToLikes);
			// 
			// iconButton5
			// 
			this->iconButton5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton5->Dock = System::Windows::Forms::DockStyle::Left;
			this->iconButton5->FlatAppearance->BorderSize = 0;
			this->iconButton5->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton5->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton5->ForeColor = System::Drawing::Color::White;
			this->iconButton5->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton5->IconColor = System::Drawing::Color::Black;
			this->iconButton5->IconSize = 16;
			this->iconButton5->Location = System::Drawing::Point(0, 0);
			this->iconButton5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton5->Name = L"iconButton5";
			this->iconButton5->Rotation = 0;
			this->iconButton5->Size = System::Drawing::Size(897, 63);
			this->iconButton5->TabIndex = 1;
			this->iconButton5->Tag = L"2";
			this->iconButton5->Text = L"3 - Number One";
			this->iconButton5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton5->UseVisualStyleBackColor = false;
			this->iconButton5->Click += gcnew System::EventHandler(this, &AllSongs::Play_Click);
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->iconButton1);
			this->panel5->Controls->Add(this->iconButton2);
			this->panel5->Controls->Add(this->iconButton3);
			this->panel5->Controls->Add(this->Likes3);
			this->panel5->Controls->Add(this->iconButton6);
			this->panel5->Location = System::Drawing::Point(38, 379);
			this->panel5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(967, 63);
			this->panel5->TabIndex = 8;
			// 
			// iconButton1
			// 
			this->iconButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton1->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton1->FlatAppearance->BorderSize = 0;
			this->iconButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton1->IconChar = FontAwesome::Sharp::IconChar::Play;
			this->iconButton1->IconColor = System::Drawing::Color::White;
			this->iconButton1->IconSize = 44;
			this->iconButton1->Location = System::Drawing::Point(687, 0);
			this->iconButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton1->Name = L"iconButton1";
			this->iconButton1->Rotation = 0;
			this->iconButton1->Size = System::Drawing::Size(70, 63);
			this->iconButton1->TabIndex = 6;
			this->iconButton1->Tag = L"2";
			this->iconButton1->UseVisualStyleBackColor = true;
			this->iconButton1->Visible = false;
			// 
			// iconButton2
			// 
			this->iconButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton2->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton2->FlatAppearance->BorderSize = 0;
			this->iconButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton2->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton2->IconChar = FontAwesome::Sharp::IconChar::Stop;
			this->iconButton2->IconColor = System::Drawing::Color::White;
			this->iconButton2->IconSize = 44;
			this->iconButton2->Location = System::Drawing::Point(757, 0);
			this->iconButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton2->Name = L"iconButton2";
			this->iconButton2->Rotation = 0;
			this->iconButton2->Size = System::Drawing::Size(70, 63);
			this->iconButton2->TabIndex = 5;
			this->iconButton2->Tag = L"2";
			this->iconButton2->UseVisualStyleBackColor = true;
			this->iconButton2->Visible = false;
			// 
			// iconButton3
			// 
			this->iconButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton3->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton3->FlatAppearance->BorderSize = 0;
			this->iconButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton3->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton3->IconChar = FontAwesome::Sharp::IconChar::Pause;
			this->iconButton3->IconColor = System::Drawing::Color::White;
			this->iconButton3->IconSize = 44;
			this->iconButton3->Location = System::Drawing::Point(827, 0);
			this->iconButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton3->Name = L"iconButton3";
			this->iconButton3->Rotation = 0;
			this->iconButton3->Size = System::Drawing::Size(70, 63);
			this->iconButton3->TabIndex = 4;
			this->iconButton3->Tag = L"2";
			this->iconButton3->UseVisualStyleBackColor = true;
			this->iconButton3->Visible = false;
			// 
			// Likes3
			// 
			this->Likes3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Likes3->Dock = System::Windows::Forms::DockStyle::Right;
			this->Likes3->FlatAppearance->BorderSize = 0;
			this->Likes3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Likes3->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Likes3->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->Likes3->IconColor = System::Drawing::Color::White;
			this->Likes3->IconSize = 44;
			this->Likes3->Location = System::Drawing::Point(897, 0);
			this->Likes3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Likes3->Name = L"Likes3";
			this->Likes3->Rotation = 0;
			this->Likes3->Size = System::Drawing::Size(70, 63);
			this->Likes3->TabIndex = 3;
			this->Likes3->Tag = L"3";
			this->Likes3->UseVisualStyleBackColor = true;
			this->Likes3->Click += gcnew System::EventHandler(this, &AllSongs::AddToLikes);
			// 
			// iconButton6
			// 
			this->iconButton6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton6->Dock = System::Windows::Forms::DockStyle::Left;
			this->iconButton6->FlatAppearance->BorderSize = 0;
			this->iconButton6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton6->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton6->ForeColor = System::Drawing::Color::White;
			this->iconButton6->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton6->IconColor = System::Drawing::Color::Black;
			this->iconButton6->IconSize = 16;
			this->iconButton6->Location = System::Drawing::Point(0, 0);
			this->iconButton6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton6->Name = L"iconButton6";
			this->iconButton6->Rotation = 0;
			this->iconButton6->Size = System::Drawing::Size(897, 63);
			this->iconButton6->TabIndex = 1;
			this->iconButton6->Tag = L"3";
			this->iconButton6->Text = L"4 - El Malek";
			this->iconButton6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton6->UseVisualStyleBackColor = false;
			this->iconButton6->Click += gcnew System::EventHandler(this, &AllSongs::Play_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->iconButton4);
			this->panel6->Controls->Add(this->iconButton8);
			this->panel6->Controls->Add(this->iconButton9);
			this->panel6->Controls->Add(this->iconButton10);
			this->panel6->Controls->Add(this->iconButton11);
			this->panel6->Location = System::Drawing::Point(38, 456);
			this->panel6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(967, 63);
			this->panel6->TabIndex = 9;
			// 
			// iconButton4
			// 
			this->iconButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton4->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton4->FlatAppearance->BorderSize = 0;
			this->iconButton4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton4->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton4->IconChar = FontAwesome::Sharp::IconChar::Play;
			this->iconButton4->IconColor = System::Drawing::Color::White;
			this->iconButton4->IconSize = 44;
			this->iconButton4->Location = System::Drawing::Point(687, 0);
			this->iconButton4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton4->Name = L"iconButton4";
			this->iconButton4->Rotation = 0;
			this->iconButton4->Size = System::Drawing::Size(70, 63);
			this->iconButton4->TabIndex = 6;
			this->iconButton4->Tag = L"2";
			this->iconButton4->UseVisualStyleBackColor = true;
			this->iconButton4->Visible = false;
			// 
			// iconButton8
			// 
			this->iconButton8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton8->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton8->FlatAppearance->BorderSize = 0;
			this->iconButton8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton8->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton8->IconChar = FontAwesome::Sharp::IconChar::Stop;
			this->iconButton8->IconColor = System::Drawing::Color::White;
			this->iconButton8->IconSize = 44;
			this->iconButton8->Location = System::Drawing::Point(757, 0);
			this->iconButton8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton8->Name = L"iconButton8";
			this->iconButton8->Rotation = 0;
			this->iconButton8->Size = System::Drawing::Size(70, 63);
			this->iconButton8->TabIndex = 5;
			this->iconButton8->Tag = L"2";
			this->iconButton8->UseVisualStyleBackColor = true;
			this->iconButton8->Visible = false;
			// 
			// iconButton9
			// 
			this->iconButton9->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton9->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton9->FlatAppearance->BorderSize = 0;
			this->iconButton9->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton9->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton9->IconChar = FontAwesome::Sharp::IconChar::Pause;
			this->iconButton9->IconColor = System::Drawing::Color::White;
			this->iconButton9->IconSize = 44;
			this->iconButton9->Location = System::Drawing::Point(827, 0);
			this->iconButton9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton9->Name = L"iconButton9";
			this->iconButton9->Rotation = 0;
			this->iconButton9->Size = System::Drawing::Size(70, 63);
			this->iconButton9->TabIndex = 4;
			this->iconButton9->Tag = L"2";
			this->iconButton9->UseVisualStyleBackColor = true;
			this->iconButton9->Visible = false;
			// 
			// iconButton10
			// 
			this->iconButton10->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton10->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton10->FlatAppearance->BorderSize = 0;
			this->iconButton10->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton10->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton10->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->iconButton10->IconColor = System::Drawing::Color::White;
			this->iconButton10->IconSize = 44;
			this->iconButton10->Location = System::Drawing::Point(897, 0);
			this->iconButton10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton10->Name = L"iconButton10";
			this->iconButton10->Rotation = 0;
			this->iconButton10->Size = System::Drawing::Size(70, 63);
			this->iconButton10->TabIndex = 3;
			this->iconButton10->Tag = L"4";
			this->iconButton10->UseVisualStyleBackColor = true;
			this->iconButton10->Click += gcnew System::EventHandler(this, &AllSongs::AddToLikes);
			// 
			// iconButton11
			// 
			this->iconButton11->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton11->Dock = System::Windows::Forms::DockStyle::Left;
			this->iconButton11->FlatAppearance->BorderSize = 0;
			this->iconButton11->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton11->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton11->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton11->ForeColor = System::Drawing::Color::White;
			this->iconButton11->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton11->IconColor = System::Drawing::Color::Black;
			this->iconButton11->IconSize = 16;
			this->iconButton11->Location = System::Drawing::Point(0, 0);
			this->iconButton11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton11->Name = L"iconButton11";
			this->iconButton11->Rotation = 0;
			this->iconButton11->Size = System::Drawing::Size(897, 63);
			this->iconButton11->TabIndex = 1;
			this->iconButton11->Tag = L"4";
			this->iconButton11->Text = L"5 - METAMORPHOSIS";
			this->iconButton11->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton11->UseVisualStyleBackColor = false;
			this->iconButton11->Click += gcnew System::EventHandler(this, &AllSongs::Play_Click);
			// 
			// panel7
			// 
			this->panel7->Controls->Add(this->iconButton12);
			this->panel7->Controls->Add(this->iconButton13);
			this->panel7->Controls->Add(this->iconButton14);
			this->panel7->Controls->Add(this->iconButton15);
			this->panel7->Controls->Add(this->iconButton16);
			this->panel7->Location = System::Drawing::Point(38, 538);
			this->panel7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel7->Name = L"panel7";
			this->panel7->Size = System::Drawing::Size(967, 63);
			this->panel7->TabIndex = 10;
			// 
			// iconButton12
			// 
			this->iconButton12->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton12->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton12->FlatAppearance->BorderSize = 0;
			this->iconButton12->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton12->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton12->IconChar = FontAwesome::Sharp::IconChar::Play;
			this->iconButton12->IconColor = System::Drawing::Color::White;
			this->iconButton12->IconSize = 44;
			this->iconButton12->Location = System::Drawing::Point(687, 0);
			this->iconButton12->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton12->Name = L"iconButton12";
			this->iconButton12->Rotation = 0;
			this->iconButton12->Size = System::Drawing::Size(70, 63);
			this->iconButton12->TabIndex = 6;
			this->iconButton12->Tag = L"2";
			this->iconButton12->UseVisualStyleBackColor = true;
			this->iconButton12->Visible = false;
			// 
			// iconButton13
			// 
			this->iconButton13->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton13->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton13->FlatAppearance->BorderSize = 0;
			this->iconButton13->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton13->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton13->IconChar = FontAwesome::Sharp::IconChar::Stop;
			this->iconButton13->IconColor = System::Drawing::Color::White;
			this->iconButton13->IconSize = 44;
			this->iconButton13->Location = System::Drawing::Point(757, 0);
			this->iconButton13->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton13->Name = L"iconButton13";
			this->iconButton13->Rotation = 0;
			this->iconButton13->Size = System::Drawing::Size(70, 63);
			this->iconButton13->TabIndex = 5;
			this->iconButton13->Tag = L"2";
			this->iconButton13->UseVisualStyleBackColor = true;
			this->iconButton13->Visible = false;
			// 
			// iconButton14
			// 
			this->iconButton14->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton14->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton14->FlatAppearance->BorderSize = 0;
			this->iconButton14->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton14->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton14->IconChar = FontAwesome::Sharp::IconChar::Pause;
			this->iconButton14->IconColor = System::Drawing::Color::White;
			this->iconButton14->IconSize = 44;
			this->iconButton14->Location = System::Drawing::Point(827, 0);
			this->iconButton14->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton14->Name = L"iconButton14";
			this->iconButton14->Rotation = 0;
			this->iconButton14->Size = System::Drawing::Size(70, 63);
			this->iconButton14->TabIndex = 4;
			this->iconButton14->Tag = L"2";
			this->iconButton14->UseVisualStyleBackColor = true;
			this->iconButton14->Visible = false;
			// 
			// iconButton15
			// 
			this->iconButton15->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton15->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton15->FlatAppearance->BorderSize = 0;
			this->iconButton15->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton15->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton15->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->iconButton15->IconColor = System::Drawing::Color::White;
			this->iconButton15->IconSize = 44;
			this->iconButton15->Location = System::Drawing::Point(897, 0);
			this->iconButton15->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton15->Name = L"iconButton15";
			this->iconButton15->Rotation = 0;
			this->iconButton15->Size = System::Drawing::Size(70, 63);
			this->iconButton15->TabIndex = 3;
			this->iconButton15->Tag = L"5";
			this->iconButton15->UseVisualStyleBackColor = true;
			this->iconButton15->Click += gcnew System::EventHandler(this, &AllSongs::AddToLikes);
			// 
			// iconButton16
			// 
			this->iconButton16->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton16->Dock = System::Windows::Forms::DockStyle::Left;
			this->iconButton16->FlatAppearance->BorderSize = 0;
			this->iconButton16->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton16->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton16->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton16->ForeColor = System::Drawing::Color::White;
			this->iconButton16->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton16->IconColor = System::Drawing::Color::Black;
			this->iconButton16->IconSize = 16;
			this->iconButton16->Location = System::Drawing::Point(0, 0);
			this->iconButton16->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton16->Name = L"iconButton16";
			this->iconButton16->Rotation = 0;
			this->iconButton16->Size = System::Drawing::Size(897, 63);
			this->iconButton16->TabIndex = 1;
			this->iconButton16->Tag = L"5";
			this->iconButton16->Text = L"6 - Mesafer";
			this->iconButton16->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton16->UseVisualStyleBackColor = false;
			this->iconButton16->Click += gcnew System::EventHandler(this, &AllSongs::Play_Click);
			// 
			// panel8
			// 
			this->panel8->Controls->Add(this->iconButton17);
			this->panel8->Controls->Add(this->iconButton18);
			this->panel8->Controls->Add(this->iconButton19);
			this->panel8->Controls->Add(this->iconButton20);
			this->panel8->Controls->Add(this->iconButton21);
			this->panel8->Location = System::Drawing::Point(38, 615);
			this->panel8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel8->Name = L"panel8";
			this->panel8->Size = System::Drawing::Size(967, 63);
			this->panel8->TabIndex = 11;
			// 
			// iconButton17
			// 
			this->iconButton17->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton17->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton17->FlatAppearance->BorderSize = 0;
			this->iconButton17->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton17->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton17->IconChar = FontAwesome::Sharp::IconChar::Play;
			this->iconButton17->IconColor = System::Drawing::Color::White;
			this->iconButton17->IconSize = 44;
			this->iconButton17->Location = System::Drawing::Point(687, 0);
			this->iconButton17->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton17->Name = L"iconButton17";
			this->iconButton17->Rotation = 0;
			this->iconButton17->Size = System::Drawing::Size(70, 63);
			this->iconButton17->TabIndex = 6;
			this->iconButton17->Tag = L"2";
			this->iconButton17->UseVisualStyleBackColor = true;
			this->iconButton17->Visible = false;
			// 
			// iconButton18
			// 
			this->iconButton18->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton18->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton18->FlatAppearance->BorderSize = 0;
			this->iconButton18->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton18->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton18->IconChar = FontAwesome::Sharp::IconChar::Stop;
			this->iconButton18->IconColor = System::Drawing::Color::White;
			this->iconButton18->IconSize = 44;
			this->iconButton18->Location = System::Drawing::Point(757, 0);
			this->iconButton18->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton18->Name = L"iconButton18";
			this->iconButton18->Rotation = 0;
			this->iconButton18->Size = System::Drawing::Size(70, 63);
			this->iconButton18->TabIndex = 5;
			this->iconButton18->Tag = L"2";
			this->iconButton18->UseVisualStyleBackColor = true;
			this->iconButton18->Visible = false;
			// 
			// iconButton19
			// 
			this->iconButton19->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton19->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton19->FlatAppearance->BorderSize = 0;
			this->iconButton19->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton19->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton19->IconChar = FontAwesome::Sharp::IconChar::Pause;
			this->iconButton19->IconColor = System::Drawing::Color::White;
			this->iconButton19->IconSize = 44;
			this->iconButton19->Location = System::Drawing::Point(827, 0);
			this->iconButton19->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton19->Name = L"iconButton19";
			this->iconButton19->Rotation = 0;
			this->iconButton19->Size = System::Drawing::Size(70, 63);
			this->iconButton19->TabIndex = 4;
			this->iconButton19->Tag = L"2";
			this->iconButton19->UseVisualStyleBackColor = true;
			this->iconButton19->Visible = false;
			// 
			// iconButton20
			// 
			this->iconButton20->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton20->Dock = System::Windows::Forms::DockStyle::Right;
			this->iconButton20->FlatAppearance->BorderSize = 0;
			this->iconButton20->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton20->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton20->IconChar = FontAwesome::Sharp::IconChar::Heart;
			this->iconButton20->IconColor = System::Drawing::Color::White;
			this->iconButton20->IconSize = 44;
			this->iconButton20->Location = System::Drawing::Point(897, 0);
			this->iconButton20->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton20->Name = L"iconButton20";
			this->iconButton20->Rotation = 0;
			this->iconButton20->Size = System::Drawing::Size(70, 63);
			this->iconButton20->TabIndex = 3;
			this->iconButton20->Tag = L"6";
			this->iconButton20->UseVisualStyleBackColor = true;
			this->iconButton20->Click += gcnew System::EventHandler(this, &AllSongs::AddToLikes);
			// 
			// iconButton21
			// 
			this->iconButton21->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton21->Dock = System::Windows::Forms::DockStyle::Left;
			this->iconButton21->FlatAppearance->BorderSize = 0;
			this->iconButton21->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton21->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton21->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton21->ForeColor = System::Drawing::Color::White;
			this->iconButton21->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton21->IconColor = System::Drawing::Color::Black;
			this->iconButton21->IconSize = 16;
			this->iconButton21->Location = System::Drawing::Point(0, 0);
			this->iconButton21->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton21->Name = L"iconButton21";
			this->iconButton21->Rotation = 0;
			this->iconButton21->Size = System::Drawing::Size(897, 63);
			this->iconButton21->TabIndex = 1;
			this->iconButton21->Tag = L"6";
			this->iconButton21->Text = L"7- Midnight City";
			this->iconButton21->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton21->UseVisualStyleBackColor = false;
			this->iconButton21->Click += gcnew System::EventHandler(this, &AllSongs::Play_Click);
			// 
			// AllSongs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ClientSize = System::Drawing::Size(1049, 728);
			this->Controls->Add(this->panel8);
			this->Controls->Add(this->panel7);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"AllSongs";
			this->Text = L"Account";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconPictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->panel3->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel7->ResumeLayout(false);
			this->panel8->ResumeLayout(false);
			this->ResumeLayout(false);

		}

#pragma endregion
		private: System::Void Play_Click(System::Object^ sender, System::EventArgs^ e) {
			if (!usedForSongs::usedForSongs::flag) {
				Button^ button = safe_cast<Button^>(sender);
				int tagNumber = Convert::ToInt32(button->Tag);
				string name = usedForSongs::songsList.get(tagNumber);

				usedForSongs::songsList.playSong(name);

				usedForSongs::index = tagNumber;
				usedForSongs::flag = true;
				usedForSongs::state = "Playing";
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

		private: System::Void Pause_Click(System::Object^ sender, System::EventArgs^ e) {
			Button^ button = safe_cast<Button^>(sender);
			int tagNumber = Convert::ToInt32(button->Tag);
			String^ ss = gcnew String(button->Text);

			if (usedForSongs::index == tagNumber) {
				if (usedForSongs::state == "Playing") {
					string name = usedForSongs::songsList.get(tagNumber);
					usedForSongs::songsList.pauseSong(name);
					usedForSongs::state = "Paused";
				}
				else if (usedForSongs::state == "Paused") {
					string name = usedForSongs::songsList.get(tagNumber);
					usedForSongs::songsList.resumeSong(name);
					usedForSongs::state = "Playing";
				}

			}
		}

		private: System::Void Stop_Click(System::Object^ sender, System::EventArgs^ e) {		
			Button^ button = safe_cast<Button^>(sender);
			int tagNumber = Convert::ToInt32(button->Tag);

			if (usedForSongs::index == tagNumber) {
				string name = usedForSongs::songsList.get(tagNumber);
				usedForSongs::songsList.stopSong(name);
				usedForSongs::flag = false;
			}
		}

		private: System::Void AddToLikes(System::Object^ sender, System::EventArgs^ e) {
			IconButton^ button = safe_cast<IconButton^>(sender);
			int tagNumber = Convert::ToInt32(button->Tag);

			string name = usedForSongs::songsList.get(tagNumber);
			if (usedForSongs::LikesList.search(name) == -1) {
				usedForSongs::LikesList.push_back(name);
			}
			//else {
			//	usedForSongs::LikesList.eraseName(name);
			//}

		}

};
}