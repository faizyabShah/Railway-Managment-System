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
	/// Summary for MyForm1
	/// </summary>


	public ref class MyForm1 : public System::Windows::Forms::Form
	{
		Railway* RailwayData;
	public:
		MyForm1(void)
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
		~MyForm1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ PasswordLabel;
	protected:
	private: System::Windows::Forms::Label^ UsernameLabel;
	private: System::Windows::Forms::TextBox^ PasswordBox;

	private: System::Windows::Forms::TextBox^ UsernameBox;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;

	protected:

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
			this->PasswordLabel = (gcnew System::Windows::Forms::Label());
			this->UsernameLabel = (gcnew System::Windows::Forms::Label());
			this->PasswordBox = (gcnew System::Windows::Forms::TextBox());
			this->UsernameBox = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// PasswordLabel
			// 
			this->PasswordLabel->AutoSize = true;
			this->PasswordLabel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->PasswordLabel->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordLabel->ForeColor = System::Drawing::SystemColors::Window;
			this->PasswordLabel->Location = System::Drawing::Point(44, 126);
			this->PasswordLabel->Name = L"PasswordLabel";
			this->PasswordLabel->Size = System::Drawing::Size(69, 18);
			this->PasswordLabel->TabIndex = 8;
			this->PasswordLabel->Text = L"Password:";
			// 
			// UsernameLabel
			// 
			this->UsernameLabel->AutoSize = true;
			this->UsernameLabel->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->UsernameLabel->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameLabel->ForeColor = System::Drawing::SystemColors::Window;
			this->UsernameLabel->Location = System::Drawing::Point(40, 90);
			this->UsernameLabel->Name = L"UsernameLabel";
			this->UsernameLabel->Size = System::Drawing::Size(74, 18);
			this->UsernameLabel->TabIndex = 7;
			this->UsernameLabel->Text = L"Username:";
			// 
			// PasswordBox
			// 
			this->PasswordBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->PasswordBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->PasswordBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PasswordBox->ForeColor = System::Drawing::SystemColors::Window;
			this->PasswordBox->Location = System::Drawing::Point(121, 127);
			this->PasswordBox->Name = L"PasswordBox";
			this->PasswordBox->Size = System::Drawing::Size(100, 23);
			this->PasswordBox->TabIndex = 6;
			// 
			// UsernameBox
			// 
			this->UsernameBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->UsernameBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->UsernameBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->UsernameBox->ForeColor = System::Drawing::SystemColors::Window;
			this->UsernameBox->Location = System::Drawing::Point(121, 87);
			this->UsernameBox->Name = L"UsernameBox";
			this->UsernameBox->Size = System::Drawing::Size(100, 23);
			this->UsernameBox->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(106, 183);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 29);
			this->button1->TabIndex = 9;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm1::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(118, 36);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(75, 27);
			this->label1->TabIndex = 10;
			this->label1->Text = L"Login";
			// 
			// MyForm1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->PasswordLabel);
			this->Controls->Add(this->UsernameLabel);
			this->Controls->Add(this->PasswordBox);
			this->Controls->Add(this->UsernameBox);
			this->Name = L"MyForm1";
			this->Text = L"MyForm1";
			this->Load += gcnew System::EventHandler(this, &MyForm1::MyForm1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string username;
		std::string password;
		std::string strresponse;
		username = SystemToStandardString(UsernameBox->Text);
		password = SystemToStandardString(PasswordBox->Text);
		strresponse = RailwayData->login(username, password);
		String^ response = gcnew String(strresponse.c_str());
		MessageBox::Show(response);
		this->Close();
	}
private: System::Void MyForm1_Load(System::Object^ sender, System::EventArgs^ e) {
}
};
}
