#pragma once
#pragma managed(push, off)
#pragma managed(pop)


#include "User.h"
#include "Dashboard.h"

#pragma once
#pragma managed(push, off)
#pragma managed(pop)

#include "signUp.h"
#include "Dashboard.h"

namespace BugerGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SqlClient;

	/// <summary>
	/// Summary for signUp
	/// </summary>
	public ref class signUp : public System::Windows::Forms::Form
	{
	public:
		signUp(void)
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
		~signUp()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel2;
    



	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: FontAwesome::Sharp::IconButton^ SignInBtn;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ tbPassword;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ tbUsername;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: FontAwesome::Sharp::IconButton^ iconButton1;
	private: System::Windows::Forms::TextBox^ tbConfirmPassword;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(signUp::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->tbConfirmPassword = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->iconButton1 = (gcnew FontAwesome::Sharp::IconButton());
			this->SignInBtn = (gcnew FontAwesome::Sharp::IconButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->tbPassword = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->tbUsername = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->panel1->Controls->Add(this->pictureBox3);
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Controls->Add(this->pictureBox1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(689, 800);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox3
			// 
			this->pictureBox3->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox3->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.Image")));
			this->pictureBox3->Location = System::Drawing::Point(-7, 2);
			this->pictureBox3->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(689, 798);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox3->TabIndex = 42;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(689, 800);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(689, 800);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// panel2
			// 
			this->panel2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Controls->Add(this->tbConfirmPassword);
			this->panel2->Controls->Add(this->label4);
			this->panel2->Controls->Add(this->iconButton1);
			this->panel2->Controls->Add(this->SignInBtn);
			this->panel2->Controls->Add(this->label5);
			this->panel2->Controls->Add(this->tbPassword);
			this->panel2->Controls->Add(this->label3);
			this->panel2->Controls->Add(this->tbUsername);
			this->panel2->Controls->Add(this->label2);
			this->panel2->Controls->Add(this->label1);
			this->panel2->Location = System::Drawing::Point(688, 0);
			this->panel2->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(837, 945);
			this->panel2->TabIndex = 1;
			// 
			// tbConfirmPassword
			// 
			this->tbConfirmPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbConfirmPassword->BackColor = System::Drawing::Color::White;
			this->tbConfirmPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbConfirmPassword->Location = System::Drawing::Point(151, 578);
			this->tbConfirmPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbConfirmPassword->MinimumSize = System::Drawing::Size(4, 69);
			this->tbConfirmPassword->Name = L"tbConfirmPassword";
			this->tbConfirmPassword->PasswordChar = '*';
			this->tbConfirmPassword->Size = System::Drawing::Size(445, 28);
			this->tbConfirmPassword->TabIndex = 44;
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label4->Location = System::Drawing::Point(145, 550);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(184, 23);
			this->label4->TabIndex = 43;
			this->label4->Text = L"Confirm Password";
			// 
			// iconButton1
			// 
			this->iconButton1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->iconButton1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->iconButton1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->iconButton1->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->iconButton1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->iconButton1->ForeColor = System::Drawing::Color::White;
			this->iconButton1->IconChar = FontAwesome::Sharp::IconChar::None;
			this->iconButton1->IconColor = System::Drawing::Color::Black;
			this->iconButton1->IconSize = 16;
			this->iconButton1->Location = System::Drawing::Point(153, 730);
			this->iconButton1->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->iconButton1->Name = L"iconButton1";
			this->iconButton1->Rotation = 0;
			this->iconButton1->Size = System::Drawing::Size(444, 55);
			this->iconButton1->TabIndex = 42;
			this->iconButton1->Text = L"Back";
			this->iconButton1->UseVisualStyleBackColor = false;
			this->iconButton1->Click += gcnew System::EventHandler(this, &signUp::iconButton1_Click);
			// 
			// SignInBtn
			// 
			this->SignInBtn->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->SignInBtn->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->SignInBtn->Cursor = System::Windows::Forms::Cursors::Hand;
			this->SignInBtn->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->SignInBtn->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->SignInBtn->ForeColor = System::Drawing::Color::White;
			this->SignInBtn->IconChar = FontAwesome::Sharp::IconChar::None;
			this->SignInBtn->IconColor = System::Drawing::Color::Black;
			this->SignInBtn->IconSize = 16;
			this->SignInBtn->Location = System::Drawing::Point(153, 671);
			this->SignInBtn->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->SignInBtn->Name = L"SignInBtn";
			this->SignInBtn->Rotation = 0;
			this->SignInBtn->Size = System::Drawing::Size(444, 55);
			this->SignInBtn->TabIndex = 41;
			this->SignInBtn->Text = L"Sign up";
			this->SignInBtn->UseVisualStyleBackColor = false;
			this->SignInBtn->Click += gcnew System::EventHandler(this, &signUp::SignInBtn_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label5->Location = System::Drawing::Point(144, 434);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(103, 23);
			this->label5->TabIndex = 40;
			this->label5->Text = L"Password";
			this->label5->Click += gcnew System::EventHandler(this, &signUp::label5_Click);
			// 
			// tbPassword
			// 
			this->tbPassword->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbPassword->BackColor = System::Drawing::Color::White;
			this->tbPassword->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbPassword->Location = System::Drawing::Point(151, 463);
			this->tbPassword->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbPassword->MinimumSize = System::Drawing::Size(4, 69);
			this->tbPassword->Name = L"tbPassword";
			this->tbPassword->PasswordChar = '*';
			this->tbPassword->Size = System::Drawing::Size(445, 28);
			this->tbPassword->TabIndex = 39;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label3->Location = System::Drawing::Point(144, 305);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(108, 23);
			this->label3->TabIndex = 38;
			this->label3->Text = L"Username";
			this->label3->Click += gcnew System::EventHandler(this, &signUp::label3_Click);
			// 
			// tbUsername
			// 
			this->tbUsername->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->tbUsername->BackColor = System::Drawing::Color::White;
			this->tbUsername->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->tbUsername->Location = System::Drawing::Point(149, 334);
			this->tbUsername->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->tbUsername->MinimumSize = System::Drawing::Size(4, 69);
			this->tbUsername->Name = L"tbUsername";
			this->tbUsername->Size = System::Drawing::Size(445, 28);
			this->tbUsername->TabIndex = 37;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label2->Location = System::Drawing::Point(143, 250);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(444, 55);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Sign up";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label1->Location = System::Drawing::Point(143, 165);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(444, 55);
			this->label1->TabIndex = 33;
			this->label1->Text = L"Hello, Again!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// signUp
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1384, 800);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"signUp";
			this->Text = L"Burger";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void signUpPage_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
	}
	public: bool switchToLogin = false;
	private: System::Void iconButton1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToLogin = true;
		this->Close();
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	public: User^ user = nullptr;

	private: System::Void SignInBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ name = tbUsername->Text;
		String^ password = tbPassword->Text;
		String^ confirmPassword = tbConfirmPassword->Text;


		if (password->Length < 8) {
			MessageBox::Show("Password must be atleast 8 characters",
				"Weak Password", MessageBoxButtons::OK);
			return;
		}

		if (name->Length < 5) {
			MessageBox::Show("Username must be atleast 5 characters",
				"Weak Password", MessageBoxButtons::OK);
			return;
		}
		if (name->Length == 0
			|| password->Length == 0) {

			MessageBox::Show("Please enter all the fields",
				"On or more empty fields", MessageBoxButtons::OK);
			return;
		}

		if (String::Compare(password, confirmPassword) != 0) {
			MessageBox::Show("Password and Confirm Password do not match",
				"Password Error", MessageBoxButtons::OK);
			return;
		}

		try {
			String^ connString = "Data Source=localhost\\SQLSERVER;Initial Catalog=BURGER;Integrated Security=True";
			SqlConnection sqlConn(connString);
			sqlConn.Open();

			String^ sqlQuery = "INSERT INTO users " +
				"(Username,Password) VALUES " +
				"(@name, @password);";

			SqlCommand command(sqlQuery, % sqlConn);
			command.Parameters->AddWithValue("@name", name);
			command.Parameters->AddWithValue("@password", password);

			command.ExecuteNonQuery();
			user = gcnew User;
			user->Username = name;
			user->Password = password;
			MessageBox::Show(name + " Succesfully Registered",
				"Register Succedeed", MessageBoxButtons::OK);
			this->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("User already exists",
				"Register Failure", MessageBoxButtons::OK);
		}
	}
};
}
