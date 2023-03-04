#pragma once
#include "Railway.h"
#include <vector>



namespace RailwayApp {


	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	/// <summary>
	/// Summary for Search
	/// </summary>
	public ref class Search : public System::Windows::Forms::Form
	{
		Railway* RailwayData;


	public:

		Search(void)
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
		/// 

		~Search()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ AvailableSeatBox;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ AvailableTrainsBox;
	private: System::Windows::Forms::Label^ from_to;
	private: System::Windows::Forms::LinkLabel^ linkLabel1;
	private: System::Windows::Forms::LinkLabel^ linkLabel2;





	protected:

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->AvailableSeatBox = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->AvailableTrainsBox = (gcnew System::Windows::Forms::ComboBox());
			this->from_to = (gcnew System::Windows::Forms::Label());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->linkLabel2 = (gcnew System::Windows::Forms::LinkLabel());
			this->SuspendLayout();
			// 
			// comboBox1
			// 
			this->comboBox1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->comboBox1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox1->ForeColor = System::Drawing::SystemColors::Window;
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Peshawar", L"Karachi", L"Lahore", L"Islamabad",
					L"Quetta"
			});
			this->comboBox1->Location = System::Drawing::Point(111, 133);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 26);
			this->comboBox1->TabIndex = 0;
			// 
			// comboBox2
			// 
			this->comboBox2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->comboBox2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::Window;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"Peshawar", L"Karachi", L"Lahore", L"Islamabad",
					L"Quetta"
			});
			this->comboBox2->Location = System::Drawing::Point(111, 176);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(121, 26);
			this->comboBox2->TabIndex = 1;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::SystemColors::Window;
			this->button1->Location = System::Drawing::Point(140, 254);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 33);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Search";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Search::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"LEMON MILK", 15, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(112, 81);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(139, 29);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Find Trains";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(64, 141);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(42, 18);
			this->label2->TabIndex = 4;
			this->label2->Text = L"From:";
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label3->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::SystemColors::Window;
			this->label3->Location = System::Drawing::Point(69, 184);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(32, 29);
			this->label3->TabIndex = 0;
			this->label3->Text = L"To:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(26, 173);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(99, 18);
			this->label4->TabIndex = 9;
			this->label4->Text = L"Availabe Seats:";
			this->label4->Visible = false;
			// 
			// AvailableSeatBox
			// 
			this->AvailableSeatBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->AvailableSeatBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AvailableSeatBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AvailableSeatBox->ForeColor = System::Drawing::SystemColors::Window;
			this->AvailableSeatBox->FormattingEnabled = true;
			this->AvailableSeatBox->Location = System::Drawing::Point(135, 168);
			this->AvailableSeatBox->Name = L"AvailableSeatBox";
			this->AvailableSeatBox->Size = System::Drawing::Size(166, 26);
			this->AvailableSeatBox->TabIndex = 8;
			this->AvailableSeatBox->Visible = false;
			this->AvailableSeatBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Search::AvailableSeatBox_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::SystemColors::Window;
			this->button2->Location = System::Drawing::Point(140, 215);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 29);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Book Seat";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Search::button2_Click);
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Window;
			this->label5->Location = System::Drawing::Point(22, 145);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(106, 18);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Available Trains:";
			this->label5->Visible = false;
			// 
			// AvailableTrainsBox
			// 
			this->AvailableTrainsBox->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->AvailableTrainsBox->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AvailableTrainsBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AvailableTrainsBox->ForeColor = System::Drawing::SystemColors::Window;
			this->AvailableTrainsBox->FormattingEnabled = true;
			this->AvailableTrainsBox->Location = System::Drawing::Point(135, 141);
			this->AvailableTrainsBox->Name = L"AvailableTrainsBox";
			this->AvailableTrainsBox->Size = System::Drawing::Size(166, 26);
			this->AvailableTrainsBox->TabIndex = 5;
			this->AvailableTrainsBox->Visible = false;
			this->AvailableTrainsBox->SelectedIndexChanged += gcnew System::EventHandler(this, &Search::AvailableTrainsBox_SelectedIndexChanged);
			// 
			// from_to
			// 
			this->from_to->AutoSize = true;
			this->from_to->Location = System::Drawing::Point(137, 112);
			this->from_to->Name = L"from_to";
			this->from_to->Size = System::Drawing::Size(0, 13);
			this->from_to->TabIndex = 10;
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->linkLabel1->ForeColor = System::Drawing::SystemColors::Window;
			this->linkLabel1->Location = System::Drawing::Point(298, 18);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(36, 13);
			this->linkLabel1->TabIndex = 11;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Profile";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Search::linkLabel1_LinkClicked);
			// 
			// linkLabel2
			// 
			this->linkLabel2->AutoSize = true;
			this->linkLabel2->Location = System::Drawing::Point(12, 18);
			this->linkLabel2->Name = L"linkLabel2";
			this->linkLabel2->Size = System::Drawing::Size(32, 13);
			this->linkLabel2->TabIndex = 12;
			this->linkLabel2->TabStop = true;
			this->linkLabel2->Text = L"Back";
			this->linkLabel2->Visible = false;
			this->linkLabel2->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Search::linkLabel2_LinkClicked);
			// 
			// Search
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ClientSize = System::Drawing::Size(346, 340);
			this->Controls->Add(this->linkLabel2);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->from_to);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->AvailableSeatBox);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->AvailableTrainsBox);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->Name = L"Search";
			this->Text = L"Search";
			this->Load += gcnew System::EventHandler(this, &Search::Search_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void Search_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {


		std::string origin;
		std::string destination;

		origin = SystemToStandardString(comboBox1->Text);
		destination = SystemToStandardString(comboBox2->Text);

		if (origin == destination) {
			MessageBox::Show("Same stations selected for origin and destination!");
		}
		else {
			bool found = false;
			String^ from_to;




			for (int i = 0; i < RailwayData->gettrackcount(); i++) {
				if (origin == RailwayData->gettrackchild(i)->gettrain()->gettrainschedule()->getoriginstation()->getstationname() && destination == RailwayData->gettrackchild(i)->gettrain()->gettrainschedule()->getdestinationstation()->getstationname()) {
					std::string leaving_time = RailwayData->gettrackchild(i)->gettrain()->gettrainschedule()->getleavingtime();
					std::string arrival_time = RailwayData->gettrackchild(i)->gettrain()->gettrainschedule()->getarrivaltime();
					RailwayData->availabletrackIDs.push_back(RailwayData->gettrackchild(i)->getid());
					String^ available_trains = gcnew String(("Leaving: " + leaving_time + " | Arrival: " + arrival_time).c_str());
					found = true;
					from_to = gcnew String(("From " + origin + " to " + destination).c_str());
					AvailableTrainsBox->Items->Add(available_trains);
				}
			}



			if (found) {
				comboBox1->Hide();
				comboBox2->Hide();
				label1->Hide();
				label2->Hide();
				label3->Hide();
				button1->Hide();

				label4->Show();
				label5->Show();
				AvailableTrainsBox->Show();
				AvailableSeatBox->Show();
				button2->Show();

			}
			else {
				MessageBox::Show("Not found :(");
			}
			linkLabel2->Show();
		}

		
	}
	private: System::Void AvailableTrainsBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		int selected = AvailableTrainsBox->SelectedIndex;
		int correspondingID = (RailwayData->availabletrackIDs[selected]);
		for (int j = 0; j < RailwayData->gettrackbyID(correspondingID)->gettrain()->getseatsize(); j++) {
			if (RailwayData->gettrackbyID(correspondingID)->gettrain()->getseatschild(j) == "1") {
				String^ available_seat = gcnew String(std::to_string(j + 1).c_str());
				AvailableSeatBox->Items->Add(available_seat);
			}
		}
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		int selected = AvailableTrainsBox->SelectedIndex;
		int correspondingID = (RailwayData->availabletrackIDs[selected]);
		String^ str = AvailableSeatBox->SelectedItem->ToString();
		std::string selectedItem = SystemToStandardString(str);
		bool available = true;
		for (int i = 0; i < RailwayData->getcurrentuser()->getbookedsize(); i++) {
			if (std::stoi(selectedItem)-1 == RailwayData->getcurrentuser()->getbookedchild(i)[1]) {
				available = false;
			}
		}
		if (available) {
			RailwayData->BuyTicket(correspondingID, std::stoi(selectedItem));
			RailwayData->addticketToUser(correspondingID, std::stoi(selectedItem)-1);
			MessageBox::Show("Seat Booked!");
		}
		else {
			MessageBox::Show("Seat already Booked!");
		}

	}
	private: System::Void AvailableSeatBox_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
	private: System::Void linkLabel1_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {
		RailwayData->settoprofile(true);
		this->Close();
	}
private: System::Void linkLabel2_LinkClicked(System::Object^ sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^ e) {

	comboBox1->Show();
	comboBox2->Show();
	label1->Show();
	label2->Show();
	label3->Show();
	button1->Show();

	label4->Hide();
	label5->Hide();
	AvailableTrainsBox->Hide();
	AvailableSeatBox->Hide();
	button2->Hide();

	linkLabel2->Hide();

	RailwayData->availabletrackIDs.clear();
	AvailableTrainsBox->Items->Clear();
	AvailableSeatBox->Items->Clear();
}
};
};