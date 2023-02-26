
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
	/// Summary for Explore
	/// </summary>
	public ref class Explore : public System::Windows::Forms::Form
	{
	public:
		Explore(void)
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
		~Explore()
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
	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::PictureBox^ pictureBox1;



	private: FontAwesome::Sharp::IconButton^ iconButton4;
	private: FontAwesome::Sharp::IconButton^ iconButton3;
	private: FontAwesome::Sharp::IconButton^ iconButton2;
	private: FontAwesome::Sharp::IconButton^ iconButton1;
	private: System::Windows::Forms::Panel^ panel3;

	private: FontAwesome::Sharp::IconButton^ iconButton6;
	private: FontAwesome::Sharp::IconButton^ iconButton7;
	private: FontAwesome::Sharp::IconButton^ iconButton8;
	private: System::Windows::Forms::PictureBox^ pictureBox5;

	private: System::Windows::Forms::PictureBox^ pictureBox7;
	private: System::Windows::Forms::PictureBox^ pictureBox8;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::PictureBox^ pictureBox11;
	private: System::Windows::Forms::PictureBox^ pictureBox10;
	private: System::Windows::Forms::PictureBox^ pictureBox9;



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Explore::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->iconPictureBox1 = (gcnew FontAwesome::Sharp::IconPictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->iconButton4 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton3 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton2 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox11 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox10 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->iconButton6 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton7 = (gcnew FontAwesome::Sharp::IconButton());
			this->iconButton8 = (gcnew FontAwesome::Sharp::IconButton());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconPictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			this->panel3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->panel1->Controls->Add(this->label1);
			this->panel1->Controls->Add(this->iconPictureBox1);
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1049, 74);
			this->panel1->TabIndex = 0;
			this->panel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &Explore::panel1_Paint);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::MediumPurple;
			this->label1->Location = System::Drawing::Point(79, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(99, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Explore";
			// 
			// iconPictureBox1
			// 
			this->iconPictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->iconPictureBox1->ForeColor = System::Drawing::Color::MediumPurple;
			this->iconPictureBox1->IconChar = FontAwesome::Sharp::IconChar::LocationArrow;
			this->iconPictureBox1->IconColor = System::Drawing::Color::MediumPurple;
			this->iconPictureBox1->IconSize = 36;
			this->iconPictureBox1->Location = System::Drawing::Point(39, 25);
			this->iconPictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconPictureBox1->Name = L"iconPictureBox1";
			this->iconPictureBox1->Size = System::Drawing::Size(44, 36);
			this->iconPictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->iconPictureBox1->TabIndex = 0;
			this->iconPictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel2->Controls->Add(this->iconButton4);
			this->panel2->Controls->Add(this->iconButton3);
			this->panel2->Controls->Add(this->iconButton2);
			this->panel2->Controls->Add(this->iconButton1);
			this->panel2->Controls->Add(this->pictureBox1);
			this->panel2->Controls->Add(this->pictureBox11);
			this->panel2->Controls->Add(this->pictureBox10);
			this->panel2->Controls->Add(this->pictureBox9);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Location = System::Drawing::Point(0, 74);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1049, 321);
			this->panel2->TabIndex = 1;
			// 
			// iconButton4
			// 
			this->iconButton4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton4->FlatAppearance->BorderSize = 0;
			this->iconButton4->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton4->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton4->ForeColor = System::Drawing::Color::White;
			this->iconButton4->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton4->IconColor = System::Drawing::Color::Black;
			this->iconButton4->IconSize = 16;
			this->iconButton4->Location = System::Drawing::Point(795, 246);
			this->iconButton4->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton4->Name = L"iconButton4";
			this->iconButton4->Rotation = 0;
			this->iconButton4->Size = System::Drawing::Size(220, 44);
			this->iconButton4->TabIndex = 9;
			this->iconButton4->Tag = L"3";
			this->iconButton4->Text = L"El Malek\r\n";
			this->iconButton4->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton4->UseVisualStyleBackColor = true;
			this->iconButton4->Click += gcnew System::EventHandler(this, &Explore::Play_Click);
			// 
			// iconButton3
			// 
			this->iconButton3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton3->FlatAppearance->BorderSize = 0;
			this->iconButton3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton3->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton3->ForeColor = System::Drawing::Color::White;
			this->iconButton3->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton3->IconColor = System::Drawing::Color::Black;
			this->iconButton3->IconSize = 16;
			this->iconButton3->Location = System::Drawing::Point(545, 246);
			this->iconButton3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton3->Name = L"iconButton3";
			this->iconButton3->Rotation = 0;
			this->iconButton3->Size = System::Drawing::Size(220, 44);
			this->iconButton3->TabIndex = 8;
			this->iconButton3->Tag = L"2";
			this->iconButton3->Text = L"Number One\r\n";
			this->iconButton3->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton3->UseVisualStyleBackColor = true;
			this->iconButton3->Click += gcnew System::EventHandler(this, &Explore::Play_Click);
			// 
			// iconButton2
			// 
			this->iconButton2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton2->FlatAppearance->BorderSize = 0;
			this->iconButton2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton2->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton2->ForeColor = System::Drawing::Color::White;
			this->iconButton2->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton2->IconColor = System::Drawing::Color::Black;
			this->iconButton2->IconSize = 16;
			this->iconButton2->Location = System::Drawing::Point(294, 246);
			this->iconButton2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton2->Name = L"iconButton2";
			this->iconButton2->Rotation = 0;
			this->iconButton2->Size = System::Drawing::Size(220, 44);
			this->iconButton2->TabIndex = 7;
			this->iconButton2->Tag = L"1";
			this->iconButton2->Text = L"Man7os";
			this->iconButton2->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton2->UseVisualStyleBackColor = true;
			this->iconButton2->Click += gcnew System::EventHandler(this, &Explore::Play_Click);
			// 
			// iconButton1
			// 
			this->iconButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton1->FlatAppearance->BorderSize = 0;
			this->iconButton1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton1->ForeColor = System::Drawing::Color::White;
			this->iconButton1->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton1->IconColor = System::Drawing::Color::Black;
			this->iconButton1->IconSize = 16;
			this->iconButton1->Location = System::Drawing::Point(39, 246);
			this->iconButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton1->Name = L"iconButton1";
			this->iconButton1->Rotation = 0;
			this->iconButton1->Size = System::Drawing::Size(220, 44);
			this->iconButton1->TabIndex = 2;
			this->iconButton1->Tag = L"0";
			this->iconButton1->Text = L"Drip too hard";
			this->iconButton1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton1->UseVisualStyleBackColor = true;
			this->iconButton1->Click += gcnew System::EventHandler(this, &Explore::Play_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(39, 70);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(220, 171);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// pictureBox11
			// 
			this->pictureBox11->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox11.Image")));
			this->pictureBox11->Location = System::Drawing::Point(795, 71);
			this->pictureBox11->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox11->Name = L"pictureBox11";
			this->pictureBox11->Size = System::Drawing::Size(220, 171);
			this->pictureBox11->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox11->TabIndex = 6;
			this->pictureBox11->TabStop = false;
			// 
			// pictureBox10
			// 
			this->pictureBox10->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox10.Image")));
			this->pictureBox10->Location = System::Drawing::Point(545, 71);
			this->pictureBox10->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox10->Name = L"pictureBox10";
			this->pictureBox10->Size = System::Drawing::Size(220, 171);
			this->pictureBox10->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox10->TabIndex = 5;
			this->pictureBox10->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.Image")));
			this->pictureBox9->Location = System::Drawing::Point(294, 71);
			this->pictureBox9->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(220, 171);
			this->pictureBox9->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox9->TabIndex = 4;
			this->pictureBox9->TabStop = false;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(33, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(191, 30);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Top Songs 2022";
			// 
			// panel3
			// 
			this->panel3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->panel3->Controls->Add(this->iconButton6);
			this->panel3->Controls->Add(this->iconButton7);
			this->panel3->Controls->Add(this->iconButton8);
			this->panel3->Controls->Add(this->pictureBox5);
			this->panel3->Controls->Add(this->pictureBox7);
			this->panel3->Controls->Add(this->pictureBox8);
			this->panel3->Controls->Add(this->label2);
			this->panel3->Location = System::Drawing::Point(0, 395);
			this->panel3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1049, 311);
			this->panel3->TabIndex = 2;
			// 
			// iconButton6
			// 
			this->iconButton6->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton6->FlatAppearance->BorderSize = 0;
			this->iconButton6->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton6->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton6->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton6->ForeColor = System::Drawing::Color::White;
			this->iconButton6->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton6->IconColor = System::Drawing::Color::Black;
			this->iconButton6->IconSize = 16;
			this->iconButton6->Location = System::Drawing::Point(535, 246);
			this->iconButton6->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton6->Name = L"iconButton6";
			this->iconButton6->Rotation = 0;
			this->iconButton6->Size = System::Drawing::Size(220, 44);
			this->iconButton6->TabIndex = 8;
			this->iconButton6->Tag = L"5";
			this->iconButton6->Text = L"Mesafer";
			this->iconButton6->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton6->UseVisualStyleBackColor = true;
			this->iconButton6->Click += gcnew System::EventHandler(this, &Explore::Play_Click);
			// 
			// iconButton7
			// 
			this->iconButton7->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton7->FlatAppearance->BorderSize = 0;
			this->iconButton7->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton7->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton7->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton7->ForeColor = System::Drawing::Color::White;
			this->iconButton7->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton7->IconColor = System::Drawing::Color::Black;
			this->iconButton7->IconSize = 16;
			this->iconButton7->Location = System::Drawing::Point(284, 246);
			this->iconButton7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton7->Name = L"iconButton7";
			this->iconButton7->Rotation = 0;
			this->iconButton7->Size = System::Drawing::Size(220, 44);
			this->iconButton7->TabIndex = 7;
			this->iconButton7->Tag = L"6";
			this->iconButton7->Text = L"Midnight City";
			this->iconButton7->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton7->UseVisualStyleBackColor = true;
			this->iconButton7->Click += gcnew System::EventHandler(this, &Explore::Play_Click);
			// 
			// iconButton8
			// 
			this->iconButton8->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton8->FlatAppearance->BorderSize = 0;
			this->iconButton8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->iconButton8->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton8->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton8->ForeColor = System::Drawing::Color::White;
			this->iconButton8->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton8->IconColor = System::Drawing::Color::Black;
			this->iconButton8->IconSize = 16;
			this->iconButton8->Location = System::Drawing::Point(39, 245);
			this->iconButton8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton8->Name = L"iconButton8";
			this->iconButton8->Rotation = 0;
			this->iconButton8->Size = System::Drawing::Size(220, 44);
			this->iconButton8->TabIndex = 2;
			this->iconButton8->Tag = L"4";
			this->iconButton8->Text = L"Metamorphosis";
			this->iconButton8->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->iconButton8->UseVisualStyleBackColor = true;
			this->iconButton8->Click += gcnew System::EventHandler(this, &Explore::Play_Click);
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(39, 70);
			this->pictureBox5->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(220, 171);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox5->TabIndex = 0;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.Image")));
			this->pictureBox7->Location = System::Drawing::Point(535, 70);
			this->pictureBox7->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(220, 171);
			this->pictureBox7->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox7->TabIndex = 5;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.Image")));
			this->pictureBox8->Location = System::Drawing::Point(284, 70);
			this->pictureBox8->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(220, 171);
			this->pictureBox8->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox8->TabIndex = 4;
			this->pictureBox8->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 14, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(33, 18);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(176, 30);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Trending Now";
			this->label2->Click += gcnew System::EventHandler(this, &Explore::label2_Click);
			// 
			// Explore
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ClientSize = System::Drawing::Size(1049, 704);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"Explore";
			this->Text = L"Account";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconPictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox11))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox10))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			this->panel3->ResumeLayout(false);
			this->panel3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
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

		}
	private: System::Void panel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}
