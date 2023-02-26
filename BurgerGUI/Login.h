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

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::Panel^ panel1;

	private: System::Windows::Forms::Panel^ goToSignUp;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::LinkLabel^ signUpPage;
	private: System::Windows::Forms::TextBox^ Username;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ Password;
	private: FontAwesome::Sharp::IconButton^ SignInBtn;

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Login::typeid));
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->goToSignUp = (gcnew System::Windows::Forms::Panel());
			this->SignInBtn = (gcnew FontAwesome::Sharp::IconButton());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->Password = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->Username = (gcnew System::Windows::Forms::TextBox());
			this->signUpPage = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->goToSignUp->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->panel1->Controls->Add(this->pictureBox2);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(775, 931);
			this->panel1->TabIndex = 0;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(0, 0);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(775, 931);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox2->TabIndex = 1;
			this->pictureBox2->TabStop = false;
			// 
			// goToSignUp
			// 
			this->goToSignUp->BackColor = System::Drawing::Color::White;
			this->goToSignUp->Controls->Add(this->SignInBtn);
			this->goToSignUp->Controls->Add(this->label5);
			this->goToSignUp->Controls->Add(this->Password);
			this->goToSignUp->Controls->Add(this->label3);
			this->goToSignUp->Controls->Add(this->Username);
			this->goToSignUp->Controls->Add(this->signUpPage);
			this->goToSignUp->Controls->Add(this->label4);
			this->goToSignUp->Controls->Add(this->label2);
			this->goToSignUp->Controls->Add(this->label1);
			this->goToSignUp->Dock = System::Windows::Forms::DockStyle::Fill;
			this->goToSignUp->Location = System::Drawing::Point(775, 0);
			this->goToSignUp->Name = L"goToSignUp";
			this->goToSignUp->Size = System::Drawing::Size(753, 931);
			this->goToSignUp->TabIndex = 1;
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
			this->SignInBtn->Location = System::Drawing::Point(139, 697);
			this->SignInBtn->Name = L"SignInBtn";
			this->SignInBtn->Rotation = 0;
			this->SignInBtn->Size = System::Drawing::Size(500, 69);
			this->SignInBtn->TabIndex = 32;
			this->SignInBtn->Text = L"Sign in";
			this->SignInBtn->UseVisualStyleBackColor = false;
			this->SignInBtn->Click += gcnew System::EventHandler(this, &Login::SignInBtn_Click);
			// 
			// label5
			// 
			this->label5->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label5->Location = System::Drawing::Point(142, 547);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(122, 30);
			this->label5->TabIndex = 31;
			this->label5->Text = L"Password";
			// 
			// Password
			// 
			this->Password->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Password->BackColor = System::Drawing::Color::White;
			this->Password->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Password->Location = System::Drawing::Point(139, 580);
			this->Password->MinimumSize = System::Drawing::Size(4, 69);
			this->Password->Name = L"Password";
			this->Password->PasswordChar = '*';
			this->Password->Size = System::Drawing::Size(500, 32);
			this->Password->TabIndex = 30;
			// 
			// label3
			// 
			this->label3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Century Gothic", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label3->Location = System::Drawing::Point(142, 408);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(133, 30);
			this->label3->TabIndex = 29;
			this->label3->Text = L"Username";
			// 
			// Username
			// 
			this->Username->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->Username->BackColor = System::Drawing::Color::White;
			this->Username->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Username->Location = System::Drawing::Point(139, 441);
			this->Username->MinimumSize = System::Drawing::Size(4, 69);
			this->Username->Name = L"Username";
			this->Username->Size = System::Drawing::Size(500, 32);
			this->Username->TabIndex = 27;
			// 
			// signUpPage
			// 
			this->signUpPage->AccessibleRole = System::Windows::Forms::AccessibleRole::Link;
			this->signUpPage->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->signUpPage->AutoSize = true;
			this->signUpPage->Cursor = System::Windows::Forms::Cursors::Hand;
			this->signUpPage->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->signUpPage->LinkColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->signUpPage->Location = System::Drawing::Point(472, 801);
			this->signUpPage->Name = L"signUpPage";
			this->signUpPage->Size = System::Drawing::Size(80, 23);
			this->signUpPage->TabIndex = 26;
			this->signUpPage->TabStop = true;
			this->signUpPage->Text = L"Sign up";
			this->signUpPage->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->signUpPage->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Login::signUpPage_LinkClicked);
			// 
			// label4
			// 
			this->label4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label4->Font = (gcnew System::Drawing::Font(L"Century Gothic", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(187, 777);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(320, 71);
			this->label4->TabIndex = 25;
			this->label4->Text = L"Don\'t have an account\?";
			this->label4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label2
			// 
			this->label2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label2->Font = (gcnew System::Drawing::Font(L"Century Gothic", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label2->Location = System::Drawing::Point(139, 301);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(500, 69);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Sign in";
			this->label2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->label1->Font = (gcnew System::Drawing::Font(L"Century Gothic", 20, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->label1->Location = System::Drawing::Point(139, 225);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(500, 69);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Hello, Again!";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 20);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(1528, 931);
			this->Controls->Add(this->goToSignUp);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Name = L"Login";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Burger";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->goToSignUp->ResumeLayout(false);
			this->goToSignUp->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void signUpPage_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		this->Hide();
		signUp^ signUpWindow = gcnew signUp();
		signUpWindow->ShowDialog();
		this->Close();
	}

	private: System::Void SignInBtn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
		Dashboard^ dashboardWindow = gcnew Dashboard();
		dashboardWindow->ShowDialog();
		this->Close();
	}
};
}
