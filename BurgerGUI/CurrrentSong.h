#pragma once
#include "DoubleLinked.h"
#include "Testing.h"

namespace BugerGUI {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CurrentSong
	/// </summary>
	public ref class CurrentSong : public System::Windows::Forms::Form
	{
	public:
		
		CurrentSong(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}
		CurrentSong(string song)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			//Doublelinked songsList = songs;
			string s = usedForSongs::song;
			String^ ss = gcnew String(s.c_str());
			songName->Text = ss;
			//const char* ch = s.c_str();
			//String^ ss = s;
			//songName->Text = ch;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CurrentSong()
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

	private: System::Windows::Forms::Label^ songName;
	private: FontAwesome::Sharp::IconButton^ Stop;
	private: FontAwesome::Sharp::IconButton^ Pause;
	private: FontAwesome::Sharp::IconButton^ Play;
	private: FontAwesome::Sharp::IconButton^ Next;
	private: FontAwesome::Sharp::IconButton^ Previous;











	




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
			this->songName = (gcnew System::Windows::Forms::Label());
			this->Stop = (gcnew FontAwesome::Sharp::IconButton());
			this->Pause = (gcnew FontAwesome::Sharp::IconButton());
			this->Play = (gcnew FontAwesome::Sharp::IconButton());
			this->Next = (gcnew FontAwesome::Sharp::IconButton());
			this->Previous = (gcnew FontAwesome::Sharp::IconButton());
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
			this->label1->Size = System::Drawing::Size(213, 30);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Currently Playing";
			// 
			// iconPictureBox1
			// 
			this->iconPictureBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(26)), static_cast<System::Int32>(static_cast<System::Byte>(27)),
				static_cast<System::Int32>(static_cast<System::Byte>(63)));
			this->iconPictureBox1->ForeColor = System::Drawing::Color::MediumPurple;
			this->iconPictureBox1->IconChar = FontAwesome::Sharp::IconChar::Music;
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
			// songName
			// 
			this->songName->Font = (gcnew System::Drawing::Font(L"Century Gothic", 28.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->songName->ForeColor = System::Drawing::SystemColors::Control;
			this->songName->Location = System::Drawing::Point(290, 315);
			this->songName->Name = L"songName";
			this->songName->Size = System::Drawing::Size(469, 95);
			this->songName->TabIndex = 6;
			this->songName->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// Stop
			// 
			this->Stop->BackColor = System::Drawing::Color::White;
			this->Stop->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Stop->FlatAppearance->BorderSize = 0;
			this->Stop->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Stop->ForeColor = System::Drawing::Color::White;
			this->Stop->IconChar = FontAwesome::Sharp::IconChar::Stop;
			this->Stop->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Stop->IconSize = 40;
			this->Stop->Location = System::Drawing::Point(373, 619);
			this->Stop->Name = L"Stop";
			this->Stop->Padding = System::Windows::Forms::Padding(3, 8, 0, 0);
			this->Stop->Rotation = 0;
			this->Stop->Size = System::Drawing::Size(68, 60);
			this->Stop->TabIndex = 9;
			this->Stop->UseVisualStyleBackColor = false;
			this->Stop->Visible = false;
			this->Stop->Click += gcnew System::EventHandler(this, &CurrentSong::Stop_Click);
			// 
			// Pause
			// 
			this->Pause->BackColor = System::Drawing::Color::White;
			this->Pause->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Pause->FlatAppearance->BorderSize = 0;
			this->Pause->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Pause->ForeColor = System::Drawing::Color::White;
			this->Pause->IconChar = FontAwesome::Sharp::IconChar::Pause;
			this->Pause->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Pause->IconSize = 40;
			this->Pause->Location = System::Drawing::Point(604, 619);
			this->Pause->Name = L"Pause";
			this->Pause->Padding = System::Windows::Forms::Padding(3, 8, 0, 0);
			this->Pause->Rotation = 0;
			this->Pause->Size = System::Drawing::Size(68, 60);
			this->Pause->TabIndex = 8;
			this->Pause->UseVisualStyleBackColor = false;
			this->Pause->Visible = false;
			this->Pause->Click += gcnew System::EventHandler(this, &CurrentSong::Pause_Click);
			// 
			// Play
			// 
			this->Play->BackColor = System::Drawing::Color::White;
			this->Play->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Play->FlatAppearance->BorderSize = 0;
			this->Play->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Play->ForeColor = System::Drawing::Color::White;
			this->Play->IconChar = FontAwesome::Sharp::IconChar::Play;
			this->Play->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Play->IconSize = 40;
			this->Play->Location = System::Drawing::Point(491, 619);
			this->Play->Name = L"Play";
			this->Play->Padding = System::Windows::Forms::Padding(3, 8, 0, 0);
			this->Play->Rotation = 0;
			this->Play->Size = System::Drawing::Size(68, 60);
			this->Play->TabIndex = 7;
			this->Play->UseVisualStyleBackColor = false;
			this->Play->Visible = false;
			this->Play->Click += gcnew System::EventHandler(this, &CurrentSong::Play_Click);
			// 
			// Next
			// 
			this->Next->BackColor = System::Drawing::Color::White;
			this->Next->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Next->FlatAppearance->BorderSize = 0;
			this->Next->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Next->ForeColor = System::Drawing::Color::White;
			this->Next->IconChar = FontAwesome::Sharp::IconChar::StepForward;
			this->Next->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Next->IconSize = 40;
			this->Next->Location = System::Drawing::Point(725, 619);
			this->Next->Name = L"Next";
			this->Next->Padding = System::Windows::Forms::Padding(3, 8, 0, 0);
			this->Next->Rotation = 0;
			this->Next->Size = System::Drawing::Size(68, 60);
			this->Next->TabIndex = 10;
			this->Next->UseVisualStyleBackColor = false;
			this->Next->Visible = false;
			this->Next->Click += gcnew System::EventHandler(this, &CurrentSong::Next_Click);
			// 
			// Previous
			// 
			this->Previous->BackColor = System::Drawing::Color::White;
			this->Previous->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Previous->FlatAppearance->BorderSize = 0;
			this->Previous->Flip = FontAwesome::Sharp::FlipOrientation::Normal;
			this->Previous->ForeColor = System::Drawing::Color::White;
			this->Previous->IconChar = FontAwesome::Sharp::IconChar::StepBackward;
			this->Previous->IconColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->Previous->IconSize = 40;
			this->Previous->Location = System::Drawing::Point(255, 619);
			this->Previous->Name = L"Previous";
			this->Previous->Padding = System::Windows::Forms::Padding(3, 8, 0, 0);
			this->Previous->Rotation = 0;
			this->Previous->Size = System::Drawing::Size(68, 60);
			this->Previous->TabIndex = 11;
			this->Previous->UseVisualStyleBackColor = false;
			this->Previous->Visible = false;
			this->Previous->Click += gcnew System::EventHandler(this, &CurrentSong::Previous_Click);
			// 
			// CurrentSong
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(35)),
				static_cast<System::Int32>(static_cast<System::Byte>(79)));
			this->ClientSize = System::Drawing::Size(1068, 745);
			this->Controls->Add(this->Previous);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->Stop);
			this->Controls->Add(this->Pause);
			this->Controls->Add(this->Play);
			this->Controls->Add(this->songName);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Margin = System::Windows::Forms::Padding(3, 2, 3, 2);
			this->Name = L"CurrentSong";
			this->Load += gcnew System::EventHandler(this, &CurrentSong::CurrentSong_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->iconPictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		private: System::Void CurrentSong_Load(System::Object^ sender, System::EventArgs^ e) {
			if (usedForSongs::song != "") {
				int tag = usedForSongs::mp.at(usedForSongs::song);
				this->Play->Visible = true;
				this->Pause->Visible = true;
				this->Stop->Visible = true;
				this->Next->Visible = true;
				this->Previous->Visible = true;


				this->Play->Tag = tag;
				this->Pause->Tag = tag;
				this->Stop->Tag = tag;
			}
		}


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
			}

		}

		private: System::Void Pause_Click(System::Object^ sender, System::EventArgs^ e) {
			string s = usedForSongs::song;

			if (usedForSongs::state == "Playing") {
				usedForSongs::songsList.pauseSong(s);
				usedForSongs::state = "Paused";
			}
			else if (usedForSongs::state == "Paused") {
				usedForSongs::songsList.resumeSong(s);
				usedForSongs::state = "Playing";
			}

		}

		private: System::Void Stop_Click(System::Object^ sender, System::EventArgs^ e) {
			string s = usedForSongs::song;

			usedForSongs::songsList.stopSong(s);
			usedForSongs::flag = false;
		}

		private: System::Void AddToLikes(System::Object^ sender, System::EventArgs^ e) {
			Button^ button = safe_cast<Button^>(sender);
			int tagNumber = Convert::ToInt32(button->Tag);

			string name = usedForSongs::songsList.get(tagNumber);
			usedForSongs::LikesList.push_back(name);
		}

		private: System::Void Previous_Click(System::Object^ sender, System::EventArgs^ e) {
			usedForSongs::index = -1;
			usedForSongs::state = "NULL";
			usedForSongs::flag = false;

			int tagNumber = Convert::ToInt32(this->Play->Tag);

			string previousSong = usedForSongs::songsList.get(tagNumber);
			usedForSongs::songsList.stopSong(previousSong);

			if (tagNumber == 0) {
				tagNumber = 7;
			}

			int newTag = tagNumber - 1;

			this->Play->Tag = newTag;
			this->Pause->Tag = newTag;
			this->Stop->Tag = newTag;

			string nextSong = usedForSongs::songsList.get(newTag);
			usedForSongs::songsList.playSong(nextSong);

			usedForSongs::index = newTag;
			usedForSongs::flag = true;
			usedForSongs::state = "Playing";
			usedForSongs::song = usedForSongs::songsList.get(newTag).c_str();

			string s = usedForSongs::song;
			String^ ss = gcnew String(s.c_str());
			songName->Text = ss;

		}


		private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
			usedForSongs::index = -1;
			usedForSongs::state = "NULL";
			usedForSongs:: flag= false;

			int tagNumber = Convert::ToInt32(this->Play->Tag);

			string previousSong = usedForSongs::songsList.get(tagNumber);
			usedForSongs::songsList.stopSong(previousSong);

			if (tagNumber == 6) {
				tagNumber = -1;
			}

			int newTag = tagNumber + 1;

			this->Play->Tag = newTag;
			this->Pause->Tag = newTag;
			this->Stop->Tag = newTag;

			string nextSong = usedForSongs::songsList.get(newTag);
			usedForSongs::songsList.playSong(nextSong);

			usedForSongs::index = newTag;
			usedForSongs::flag = true;
			usedForSongs::state = "Playing";
			usedForSongs::song = usedForSongs::songsList.get(newTag).c_str();

			string s = usedForSongs::song;
			String^ ss = gcnew String(s.c_str());
			songName->Text = ss;

		}
};
}