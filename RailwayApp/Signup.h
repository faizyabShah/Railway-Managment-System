#pragma once
#include "Railway.h"


namespace RailwayApp {



	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	/// 
	/// 




	public ref class MyForm : public System::Windows::Forms::Form
	{
		Railway* RailwayData;

	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void setRailwayData(Railway* RailwayData) {
			this->RailwayData = RailwayData;


		}

		std::string SystemToStandardString(String^ sysstring) {
			std::string standardstring = "";
			for (int i = 0; i < sysstring->Length; i++) {
				standardstring += sysstring[i];
			}
			return standardstring;
		}



	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::TextBox^ UsernameBox;
	private: System::Windows::Forms::TextBox^ PassowordBox;
	private: System::Windows::Forms::Label^ UsernameLabel;
	private: System::Windows::Forms::Label^ PasswordLabel;
	private: System::Windows::Forms::Label^ NameLabel;
	private: System::Windows::Forms::TextBox^ NameBox;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::RadioButton^ MaleRadioButton;
	private: System::Windows::Forms::RadioButton^ FemaleRadioButton;


	private: System::Windows::Forms::Label^ label3;


	private: System::Windows::Forms::LinkLabel^ LoginLinkLabel;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ AgeBox;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;


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
			this->UsernameBox = (gcnew System::Windows::Forms::TextBox());
			this->PassowordBox = (gcnew System::Windows::Forms::TextBox());
			this->UsernameLabel = (gcnew System::Windows::Forms::Label());
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->NameLabel = (gcnew System::Windows::Forms::Label());
			this->NameBox = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->MaleRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->FemaleRadioButton = (gcnew System::Windows::Forms::RadioButton());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->LoginLinkLabel = (gcnew System::Windows::Forms::LinkLabel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AgeBox = (gcnew System::Windows::Forms::TextBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// UsernameBox
			// 
			this->UsernameBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->UsernameBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UsernameBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameBox->ForeColor = System::Drawing::SystemColors::Window;
			this->UsernameBox->Location = System::Drawing::Point(182, 193);
			this->UsernameBox->Margin = System::Windows::Forms::Padding(4);
			this->UsernameBox->Name = L"UsernameBox";
			this->UsernameBox->Size = System::Drawing::Size(116, 23);
			this->UsernameBox->TabIndex = 1;
			// 
			// PassowordBox
			// 
			this->PassowordBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->PassowordBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PassowordBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PassowordBox->ForeColor = System::Drawing::SystemColors::Window;
			this->PassowordBox->Location = System::Drawing::Point(181, 239);
			this->PassowordBox->Margin = System::Windows::Forms::Padding(4);
			this->PassowordBox->Name = L"PassowordBox";
			this->PassowordBox->Size = System::Drawing::Size(116, 23);
			this->PassowordBox->TabIndex = 2;
			this->PassowordBox->TextChanged += gcnew System::EventHandler(this, &MyForm::PassowordBox_TextChanged);
			// 
			// UsernameLabel
			// 
			this->UsernameLabel->AutoSize = true;
			this->UsernameLabel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->UsernameLabel->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameLabel->ForeColor = System::Drawing::SystemColors::Window;
			this->UsernameLabel->Location = System::Drawing::Point(72, 188);
			this->UsernameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->UsernameLabel->Name = L"UsernameLabel";
			this->UsernameLabel->Size = System::Drawing::Size(74, 18);
			this->UsernameLabel->TabIndex = 3;
			this->UsernameLabel->Text = L"Username:";
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordLabel->ForeColor = System::Drawing::SystemColors::Window;
			this->PasswordLabel->Location = System::Drawing::Point(79, 241);
			this->PasswordLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(69, 18);
			this->PasswordLabel->TabIndex = 4;
			this->PasswordLabel->Text = L"Password:";
			// 
			// NameLabel
			// 
			this->NameLabel->AutoSize = true;
			this->NameLabel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NameLabel->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameLabel->ForeColor = System::Drawing::SystemColors::Window;
			this->NameLabel->Location = System::Drawing::Point(99, 144);
			this->NameLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->NameLabel->Name = L"NameLabel";
			this->NameLabel->Size = System::Drawing::Size(47, 18);
			this->NameLabel->TabIndex = 6;
			this->NameLabel->Text = L"Name:";
			// 
			// NameBox
			// 
			this->NameBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->NameBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->NameBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->NameBox->ForeColor = System::Drawing::SystemColors::Window;
			this->NameBox->Location = System::Drawing::Point(181, 147);
			this->NameBox->Margin = System::Windows::Forms::Padding(4);
			this->NameBox->Name = L"NameBox";
			this->NameBox->Size = System::Drawing::Size(116, 23);
			this->NameBox->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(90, 284);
			this->label2->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(56, 18);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Gender:";
			// 
			// MaleRadioButton
			// 
			this->MaleRadioButton->AutoSize = true;
			this->MaleRadioButton->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->MaleRadioButton->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaleRadioButton->ForeColor = System::Drawing::SystemColors::Window;
			this->MaleRadioButton->Location = System::Drawing::Point(169, 282);
			this->MaleRadioButton->Margin = System::Windows::Forms::Padding(4);
			this->MaleRadioButton->Name = L"MaleRadioButton";
			this->MaleRadioButton->Size = System::Drawing::Size(56, 22);
			this->MaleRadioButton->TabIndex = 8;
			this->MaleRadioButton->TabStop = true;
			this->MaleRadioButton->Text = L"Male";
			this->MaleRadioButton->UseVisualStyleBackColor = false;
			this->MaleRadioButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::radioButton1_CheckedChanged);
			// 
			// FemaleRadioButton
			// 
			this->FemaleRadioButton->AutoSize = true;
			this->FemaleRadioButton->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->FemaleRadioButton->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FemaleRadioButton->ForeColor = System::Drawing::SystemColors::Window;
			this->FemaleRadioButton->Location = System::Drawing::Point(232, 282);
			this->FemaleRadioButton->Margin = System::Windows::Forms::Padding(4);
			this->FemaleRadioButton->Name = L"FemaleRadioButton";
			this->FemaleRadioButton->Size = System::Drawing::Size(73, 22);
			this->FemaleRadioButton->TabIndex = 9;
			this->FemaleRadioButton->TabStop = true;
			this->FemaleRadioButton->Text = L"Female";
			this->FemaleRadioButton->UseVisualStyleBackColor = false;
			this->FemaleRadioButton->CheckedChanged += gcnew System::EventHandler(this, &MyForm::FemaleRadioButton_CheckedChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Window;
			this->label3->Location = System::Drawing::Point(113, 318);
			this->label3->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(35, 18);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Age:";
			// 
			// LoginLinkLabel
			// 
			this->LoginLinkLabel->AutoSize = true;
			this->LoginLinkLabel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->LoginLinkLabel->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LoginLinkLabel->ForeColor = System::Drawing::SystemColors::Window;
			this->LoginLinkLabel->Location = System::Drawing::Point(326, 444);
			this->LoginLinkLabel->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->LoginLinkLabel->Name = L"LoginLinkLabel";
			this->LoginLinkLabel->Size = System::Drawing::Size(43, 18);
			this->LoginLinkLabel->TabIndex = 13;
			this->LoginLinkLabel->TabStop = true;
			this->LoginLinkLabel->Text = L"Login";
			this->LoginLinkLabel->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::LoginLinkLabel_LinkClicked);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(200, 444);
			this->label4->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(128, 18);
			this->label4->TabIndex = 14;
			this->label4->Text = L"Already a member\?";
			// 
			// AgeBox
			// 
			this->AgeBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->AgeBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->AgeBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AgeBox->ForeColor = System::Drawing::SystemColors::Window;
			this->AgeBox->Location = System::Drawing::Point(179, 322);
			this->AgeBox->Margin = System::Windows::Forms::Padding(4);
			this->AgeBox->Name = L"AgeBox";
			this->AgeBox->Size = System::Drawing::Size(116, 23);
			this->AgeBox->TabIndex = 15;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->linkLabel1->ForeColor = System::Drawing::SystemColors::Window;
			this->linkLabel1->Location = System::Drawing::Point(2, 444);
			this->linkLabel1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(86, 18);
			this->linkLabel1->TabIndex = 16;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Admin Mode";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &MyForm::linkLabel1_LinkClicked);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 20.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(86, 75);
			this->label1->Margin = System::Windows::Forms::Padding(4, 0, 4, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(242, 38);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Train Booking";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(195, 364);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 31);
			this->button1->TabIndex = 17;
			this->button1->Text = L"Sign up";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(407, 471);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->AgeBox);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->LoginLinkLabel);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->FemaleRadioButton);
			this->Controls->Add(this->MaleRadioButton);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->NameLabel);
			this->Controls->Add(this->NameBox);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->UsernameLabel);
			this->Controls->Add(this->PassowordBox);
			this->Controls->Add(this->UsernameBox);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->Font = (gcnew System::Drawing::Font(L"Raleway", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Margin = System::Windows::Forms::Padding(4);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void radioButton1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void SignupButton_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void LoginLinkLabel_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		RailwayData->settologin(true);
		this->Close();
	}
	private: System::Void DOBPicker_ValueChanged(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		RailwayData->settoadmlogin(true);
		this->Close();
	}
	private: System::Void FemaleRadioButton_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void PassowordBox_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (UsernameBox->Text == "" || NameBox->Text == "" || PassowordBox->Text == "" || AgeBox->Text == "" || (!(MaleRadioButton->Checked) && !(FemaleRadioButton->Checked))) {
			MessageBox::Show("Please fill all the required fields.");
		}
		else {
			std::string username = SystemToStandardString(UsernameBox->Text);
			std::string password = SystemToStandardString(PassowordBox->Text);
			std::string name = SystemToStandardString(NameBox->Text);
			std::string age = SystemToStandardString(AgeBox->Text);
			std::string gender;
			if (MaleRadioButton->Checked) {
				gender = SystemToStandardString(MaleRadioButton->Text);
			}
			else if (FemaleRadioButton->Checked) {
				gender = SystemToStandardString(FemaleRadioButton->Text);
			}
			RailwayData->signup(username, name, password, gender, std::stoi(age));
			this->Close();
		}
	}
	};
};