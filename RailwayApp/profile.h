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
	/// Summary for profile
	/// </summary>
	public ref class profile : public System::Windows::Forms::Form
	{
		Railway* RailwayData;
	public:
		profile(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

		void setRailwayData(Railway* RailwayData) {
			this->RailwayData = RailwayData;
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~profile()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ Namelabel;
	private: System::Windows::Forms::Label^ UsernameLabel;
	protected:


	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ AgeLabel;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ GenderLabel;

	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::GroupBox^ groupBox1;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::ListBox^ BookedSeats;


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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Namelabel = (gcnew System::Windows::Forms::Label());
			this->UsernameLabel = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AgeLabel = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->GenderLabel = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->BookedSeats = (gcnew System::Windows::Forms::ListBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 25);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(47, 18);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Name:";
			// 
			// Namelabel
			// 
			this->Namelabel->AutoSize = true;
			this->Namelabel->Location = System::Drawing::Point(197, 25);
			this->Namelabel->Name = L"Namelabel";
			this->Namelabel->Size = System::Drawing::Size(46, 18);
			this->Namelabel->TabIndex = 1;
			this->Namelabel->Text = L"label2";
			// 
			// UsernameLabel
			// 
			this->UsernameLabel->AutoSize = true;
			this->UsernameLabel->Location = System::Drawing::Point(197, 51);
			this->UsernameLabel->Name = L"UsernameLabel";
			this->UsernameLabel->Size = System::Drawing::Size(46, 18);
			this->UsernameLabel->TabIndex = 3;
			this->UsernameLabel->Text = L"label3";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(12, 51);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(74, 18);
			this->label4->TabIndex = 2;
			this->label4->Text = L"Username:";
			// 
			// AgeLabel
			// 
			this->AgeLabel->AutoSize = true;
			this->AgeLabel->Location = System::Drawing::Point(197, 79);
			this->AgeLabel->Name = L"AgeLabel";
			this->AgeLabel->Size = System::Drawing::Size(46, 18);
			this->AgeLabel->TabIndex = 5;
			this->AgeLabel->Text = L"label5";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(12, 79);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(35, 18);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Age:";
			// 
			// GenderLabel
			// 
			this->GenderLabel->AutoSize = true;
			this->GenderLabel->Location = System::Drawing::Point(197, 108);
			this->GenderLabel->Name = L"GenderLabel";
			this->GenderLabel->Size = System::Drawing::Size(46, 18);
			this->GenderLabel->TabIndex = 7;
			this->GenderLabel->Text = L"label7";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(12, 108);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(56, 18);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Gender:";
			// 
			// groupBox1
			// 
			this->groupBox1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->groupBox1->Controls->Add(this->BookedSeats);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->AgeLabel);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->GenderLabel);
			this->groupBox1->Controls->Add(this->Namelabel);
			this->groupBox1->Controls->Add(this->label8);
			this->groupBox1->Controls->Add(this->label4);
			this->groupBox1->Controls->Add(this->UsernameLabel);
			this->groupBox1->Controls->Add(this->label6);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->groupBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->groupBox1->Location = System::Drawing::Point(32, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(447, 345);
			this->groupBox1->TabIndex = 9;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"User Profile:";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &profile::groupBox1_Enter);
			// 
			// BookedSeats
			// 
			this->BookedSeats->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->BookedSeats->ForeColor = System::Drawing::SystemColors::Window;
			this->BookedSeats->FormattingEnabled = true;
			this->BookedSeats->ItemHeight = 18;
			this->BookedSeats->Location = System::Drawing::Point(111, 140);
			this->BookedSeats->Name = L"BookedSeats";
			this->BookedSeats->Size = System::Drawing::Size(320, 94);
			this->BookedSeats->TabIndex = 10;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 140);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(94, 18);
			this->label9->TabIndex = 9;
			this->label9->Text = L"Booked Seats:";
			// 
			// profile
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(545, 401);
			this->Controls->Add(this->groupBox1);
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->Name = L"profile";
			this->Text = L"profile";
			this->Load += gcnew System::EventHandler(this, &profile::profile_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void profile_Load(System::Object^ sender, System::EventArgs^ e) {
		Namelabel->Text = gcnew String((RailwayData->getcurrentuser()->getname()).c_str());
		UsernameLabel->Text = gcnew String((RailwayData->getcurrentuser()->getusername()).c_str());
		AgeLabel->Text = gcnew String(std::to_string((RailwayData->getcurrentuser()->getage())).c_str());
		GenderLabel->Text = gcnew String((RailwayData->getcurrentuser()->getgender()).c_str());
		for (int i = 0; i < RailwayData->getcurrentuser()->getbookedsize(); i++) {
			int trackid = RailwayData->getcurrentuser()->getbookedchild(i)[0];
			int seatno = RailwayData->getcurrentuser()->getbookedchild(i)[1] + 1;
			std::string origin = RailwayData->gettrackbyID(trackid)->gettrain()->gettrainschedule()->getoriginstation()->getstationname();
			std::string destination = RailwayData->gettrackbyID(trackid)->gettrain()->gettrainschedule()->getdestinationstation()->getstationname();
			std::string leaving = RailwayData->gettrackbyID(trackid)->gettrain()->gettrainschedule()->getleavingtime();
			std::string arrival = RailwayData->gettrackbyID(trackid)->gettrain()->gettrainschedule()->getarrivaltime();
			std::string fare = std::to_string(RailwayData->gettrackbyID(trackid)->getfare());
			String^ item = gcnew String((origin + " to " + destination + "  " + leaving + " -> " + arrival + " Seat: " + std::to_string(seatno) + "   Fare: " + fare).c_str());
			BookedSeats->Items->Add(item);

		}
	}
	private: System::Void groupBox1_Enter(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
