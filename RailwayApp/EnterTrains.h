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
	/// Summary for EnterTrains
	/// </summary>
	public ref class EnterTrains : public System::Windows::Forms::Form
	{
		Railway* RailwayData;
	public:
		EnterTrains(void)
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
		~EnterTrains()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::MaskedTextBox^ TrackNameBox;

	private: System::Windows::Forms::MaskedTextBox^ TrainNameBox;
	private: System::Windows::Forms::MaskedTextBox^ MaxSeatsBox;
	private: System::Windows::Forms::MaskedTextBox^ LeavingHours;
	private: System::Windows::Forms::MaskedTextBox^ ArrivingHours;









	private: System::Windows::Forms::Label^ label2;

	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;

	private: System::Windows::Forms::Label^ label9;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Button^ AddTrainButton;
	private: System::Windows::Forms::ComboBox^ Originstationname;
	private: System::Windows::Forms::ComboBox^ destinationStationname;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ FareBox;
	private: System::Windows::Forms::MaskedTextBox^ ArrivingMinutes;

	private: System::Windows::Forms::MaskedTextBox^ LeavingMinutes;











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
			this->TrackNameBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->TrainNameBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->MaxSeatsBox = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LeavingHours = (gcnew System::Windows::Forms::MaskedTextBox());
			this->ArrivingHours = (gcnew System::Windows::Forms::MaskedTextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->AddTrainButton = (gcnew System::Windows::Forms::Button());
			this->Originstationname = (gcnew System::Windows::Forms::ComboBox());
			this->destinationStationname = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->FareBox = (gcnew System::Windows::Forms::TextBox());
			this->ArrivingMinutes = (gcnew System::Windows::Forms::MaskedTextBox());
			this->LeavingMinutes = (gcnew System::Windows::Forms::MaskedTextBox());
			this->SuspendLayout();
			// 
			// TrackNameBox
			// 
			this->TrackNameBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->TrackNameBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TrackNameBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TrackNameBox->ForeColor = System::Drawing::SystemColors::Window;
			this->TrackNameBox->Location = System::Drawing::Point(194, 77);
			this->TrackNameBox->Name = L"TrackNameBox";
			this->TrackNameBox->Size = System::Drawing::Size(100, 23);
			this->TrackNameBox->TabIndex = 1;
			// 
			// TrainNameBox
			// 
			this->TrainNameBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->TrainNameBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->TrainNameBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->TrainNameBox->ForeColor = System::Drawing::SystemColors::Window;
			this->TrainNameBox->Location = System::Drawing::Point(194, 103);
			this->TrainNameBox->Name = L"TrainNameBox";
			this->TrainNameBox->Size = System::Drawing::Size(100, 23);
			this->TrainNameBox->TabIndex = 3;
			// 
			// MaxSeatsBox
			// 
			this->MaxSeatsBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->MaxSeatsBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->MaxSeatsBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->MaxSeatsBox->ForeColor = System::Drawing::SystemColors::Window;
			this->MaxSeatsBox->Location = System::Drawing::Point(194, 129);
			this->MaxSeatsBox->Name = L"MaxSeatsBox";
			this->MaxSeatsBox->Size = System::Drawing::Size(100, 23);
			this->MaxSeatsBox->TabIndex = 4;
			// 
			// LeavingHours
			// 
			this->LeavingHours->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->LeavingHours->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LeavingHours->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeavingHours->ForeColor = System::Drawing::SystemColors::Window;
			this->LeavingHours->Location = System::Drawing::Point(194, 155);
			this->LeavingHours->Name = L"LeavingHours";
			this->LeavingHours->Size = System::Drawing::Size(46, 23);
			this->LeavingHours->TabIndex = 5;
			this->LeavingHours->Text = L"hh";
			// 
			// ArrivingHours
			// 
			this->ArrivingHours->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ArrivingHours->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ArrivingHours->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArrivingHours->ForeColor = System::Drawing::SystemColors::Window;
			this->ArrivingHours->Location = System::Drawing::Point(194, 181);
			this->ArrivingHours->Name = L"ArrivingHours";
			this->ArrivingHours->Size = System::Drawing::Size(46, 23);
			this->ArrivingHours->TabIndex = 6;
			this->ArrivingHours->Text = L"hh";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label2->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::Window;
			this->label2->Location = System::Drawing::Point(28, 84);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(80, 18);
			this->label2->TabIndex = 12;
			this->label2->Text = L"TrackName:";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label4->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::SystemColors::Window;
			this->label4->Location = System::Drawing::Point(28, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(77, 18);
			this->label4->TabIndex = 14;
			this->label4->Text = L"TrainName:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label5->ForeColor = System::Drawing::SystemColors::Window;
			this->label5->Location = System::Drawing::Point(28, 136);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(71, 18);
			this->label5->TabIndex = 15;
			this->label5->Text = L"Max Seats:";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label6->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::SystemColors::Window;
			this->label6->Location = System::Drawing::Point(28, 162);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(93, 18);
			this->label6->TabIndex = 16;
			this->label6->Text = L"Leaving Time:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label7->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::SystemColors::Window;
			this->label7->Location = System::Drawing::Point(28, 188);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(92, 18);
			this->label7->TabIndex = 17;
			this->label7->Text = L"Arriving Time:";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label9->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label9->ForeColor = System::Drawing::SystemColors::Window;
			this->label9->Location = System::Drawing::Point(28, 214);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(132, 18);
			this->label9->TabIndex = 19;
			this->label9->Text = L"Origin Station Name:";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label11->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label11->ForeColor = System::Drawing::SystemColors::Window;
			this->label11->Location = System::Drawing::Point(28, 241);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(163, 18);
			this->label11->TabIndex = 21;
			this->label11->Text = L"Destination Station Name:";
			this->label11->Click += gcnew System::EventHandler(this, &EnterTrains::label11_Click);
			// 
			// AddTrainButton
			// 
			this->AddTrainButton->BackColor = System::Drawing::SystemColors::Desktop;
			this->AddTrainButton->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->AddTrainButton->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->AddTrainButton->ForeColor = System::Drawing::SystemColors::Window;
			this->AddTrainButton->Location = System::Drawing::Point(129, 315);
			this->AddTrainButton->Name = L"AddTrainButton";
			this->AddTrainButton->Size = System::Drawing::Size(75, 29);
			this->AddTrainButton->TabIndex = 22;
			this->AddTrainButton->Text = L"Add Track";
			this->AddTrainButton->UseVisualStyleBackColor = false;
			this->AddTrainButton->Click += gcnew System::EventHandler(this, &EnterTrains::AddTrainButton_Click);
			// 
			// Originstationname
			// 
			this->Originstationname->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->Originstationname->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->Originstationname->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Originstationname->ForeColor = System::Drawing::SystemColors::Window;
			this->Originstationname->FormattingEnabled = true;
			this->Originstationname->Location = System::Drawing::Point(194, 207);
			this->Originstationname->Name = L"Originstationname";
			this->Originstationname->Size = System::Drawing::Size(100, 26);
			this->Originstationname->TabIndex = 25;
			// 
			// destinationStationname
			// 
			this->destinationStationname->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->destinationStationname->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->destinationStationname->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->destinationStationname->ForeColor = System::Drawing::SystemColors::Window;
			this->destinationStationname->FormattingEnabled = true;
			this->destinationStationname->Location = System::Drawing::Point(194, 238);
			this->destinationStationname->Name = L"destinationStationname";
			this->destinationStationname->Size = System::Drawing::Size(100, 26);
			this->destinationStationname->TabIndex = 26;
			this->destinationStationname->SelectedIndexChanged += gcnew System::EventHandler(this, &EnterTrains::comboBox1_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label1->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::Window;
			this->label1->Location = System::Drawing::Point(28, 270);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(37, 18);
			this->label1->TabIndex = 27;
			this->label1->Text = L"Fare:";
			// 
			// FareBox
			// 
			this->FareBox->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->FareBox->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->FareBox->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->FareBox->ForeColor = System::Drawing::SystemColors::Window;
			this->FareBox->Location = System::Drawing::Point(194, 270);
			this->FareBox->Name = L"FareBox";
			this->FareBox->Size = System::Drawing::Size(100, 23);
			this->FareBox->TabIndex = 28;
			// 
			// ArrivingMinutes
			// 
			this->ArrivingMinutes->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->ArrivingMinutes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->ArrivingMinutes->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ArrivingMinutes->ForeColor = System::Drawing::SystemColors::Window;
			this->ArrivingMinutes->Location = System::Drawing::Point(248, 181);
			this->ArrivingMinutes->Name = L"ArrivingMinutes";
			this->ArrivingMinutes->Size = System::Drawing::Size(46, 23);
			this->ArrivingMinutes->TabIndex = 30;
			this->ArrivingMinutes->Text = L"mm";
			// 
			// LeavingMinutes
			// 
			this->LeavingMinutes->BackColor = System::Drawing::SystemColors::InactiveCaptionText;
			this->LeavingMinutes->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->LeavingMinutes->Font = (gcnew System::Drawing::Font(L"Raleway", 9.749999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->LeavingMinutes->ForeColor = System::Drawing::SystemColors::Window;
			this->LeavingMinutes->Location = System::Drawing::Point(248, 155);
			this->LeavingMinutes->Name = L"LeavingMinutes";
			this->LeavingMinutes->Size = System::Drawing::Size(46, 23);
			this->LeavingMinutes->TabIndex = 29;
			this->LeavingMinutes->Text = L"mm";
			// 
			// EnterTrains
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->ClientSize = System::Drawing::Size(363, 412);
			this->Controls->Add(this->ArrivingMinutes);
			this->Controls->Add(this->LeavingMinutes);
			this->Controls->Add(this->FareBox);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->destinationStationname);
			this->Controls->Add(this->Originstationname);
			this->Controls->Add(this->AddTrainButton);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->ArrivingHours);
			this->Controls->Add(this->LeavingHours);
			this->Controls->Add(this->MaxSeatsBox);
			this->Controls->Add(this->TrainNameBox);
			this->Controls->Add(this->TrackNameBox);
			this->ForeColor = System::Drawing::SystemColors::Window;
			this->Name = L"EnterTrains";
			this->Text = L"EnterTrains";
			this->Load += gcnew System::EventHandler(this, &EnterTrains::EnterTrains_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EnterTrains_Load(System::Object^ sender, System::EventArgs^ e) {
		for (int i = 0; i < RailwayData->getallStationssize(); i++) {
			Originstationname->Items->Add((gcnew String(((RailwayData->getstationchild(i))).c_str())));
			destinationStationname->Items->Add((gcnew String(((RailwayData->getstationchild(i).c_str())))));
		}
	}
	private: System::Void AddTrainButton_Click(System::Object^ sender, System::EventArgs^ e) {
		std::string trackName = SystemToStandardString(TrackNameBox->Text);
		std::string trainName = SystemToStandardString(TrainNameBox->Text);
		std::string maxSeats = SystemToStandardString(MaxSeatsBox->Text);
		std::string leaving = SystemToStandardString(LeavingHours->Text) + ":" + SystemToStandardString(LeavingMinutes->Text);
		std::string arriving = SystemToStandardString(ArrivingHours->Text) + ":" + SystemToStandardString(ArrivingMinutes->Text);
		std::string O_stationName = SystemToStandardString(Originstationname->Text);
		std::string D_stationName = SystemToStandardString(destinationStationname->Text);
		std::string O_stationID = std::to_string(RailwayData->getstationidbyname(O_stationName));
		std::string D_stationID = std::to_string(RailwayData->getstationidbyname(D_stationName));
		std::string fare = SystemToStandardString(FareBox->Text);
		std::string trackID = O_stationID + D_stationID;
		std::string trainID = trackID;
		if (O_stationName == D_stationName) {
			MessageBox::Show("Origin and destination stations cannot be the same!");
		}
		else {
			RailwayData->setTrack(trackID, trackName, trainID, trainName, maxSeats, leaving, arriving, O_stationID, O_stationName, D_stationID, D_stationName, fare);
			MessageBox::Show("Track Added!");
		}

	}
	private: System::Void Originstationname_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label11_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void maskedTextBox2_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
	private: System::Void maskedTextBox1_MaskInputRejected(System::Object^ sender, System::Windows::Forms::MaskInputRejectedEventArgs^ e) {
	}
};
}

