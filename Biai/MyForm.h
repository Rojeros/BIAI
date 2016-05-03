#pragma once
#include "Gra.h"
#include "Wiezien.h"
#include <msclr\marshal_cppstd.h>
extern Gra *wsk;
namespace Biai {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton1;

	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::NumericUpDown^  boxMutationChance;


	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::NumericUpDown^  boxMutationsPlace;

	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::NumericUpDown^  boxCrossing;

	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::NumericUpDown^  boxGenerations;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::NumericUpDown^  boxRepetitions;

	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  boxPlayer;

	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::NumericUpDown^  numericUpDown1;


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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->numericUpDown1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->boxMutationsPlace = (gcnew System::Windows::Forms::NumericUpDown());
			this->boxMutationChance = (gcnew System::Windows::Forms::NumericUpDown());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->boxCrossing = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->boxGenerations = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->boxRepetitions = (gcnew System::Windows::Forms::NumericUpDown());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->boxPlayer = (gcnew System::Windows::Forms::NumericUpDown());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxMutationsPlace))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxMutationChance))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxCrossing))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxGenerations))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxRepetitions))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxPlayer))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(16, 18);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(100, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Generate && Save";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(16, 47);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(100, 23);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Load";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->radioButton3);
			this->groupBox1->Controls->Add(this->radioButton2);
			this->groupBox1->Controls->Add(this->radioButton1);
			this->groupBox1->Location = System::Drawing::Point(18, 186);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(142, 90);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Crossing methods";
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Location = System::Drawing::Point(24, 69);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(60, 17);
			this->radioButton3->TabIndex = 2;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"random";
			this->radioButton3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Checked = true;
			this->radioButton2->Location = System::Drawing::Point(24, 23);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->radioButton2->Size = System::Drawing::Size(60, 17);
			this->radioButton2->TabIndex = 0;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"50 / 50";
			this->radioButton2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Location = System::Drawing::Point(24, 46);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(92, 17);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->Text = L"1:3 / 1:3 / 1:3";
			this->radioButton1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			this->openFileDialog1->FileOk += gcnew System::ComponentModel::CancelEventHandler(this, &MyForm::openFileDialog1_FileOk);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->label6);
			this->groupBox2->Controls->Add(this->numericUpDown1);
			this->groupBox2->Controls->Add(this->label7);
			this->groupBox2->Controls->Add(this->label5);
			this->groupBox2->Controls->Add(this->boxMutationsPlace);
			this->groupBox2->Controls->Add(this->boxMutationChance);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Controls->Add(this->boxCrossing);
			this->groupBox2->Controls->Add(this->label2);
			this->groupBox2->Controls->Add(this->boxGenerations);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->boxRepetitions);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->boxPlayer);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Location = System::Drawing::Point(18, 13);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->groupBox2->Size = System::Drawing::Size(460, 151);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Population";
			this->groupBox2->Enter += gcnew System::EventHandler(this, &MyForm::groupBox2_Enter);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(221, 47);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 13);
			this->label6->TabIndex = 18;
			this->label6->Text = L"Crossing Chance";
			this->label6->Click += gcnew System::EventHandler(this, &MyForm::label6_Click);
			// 
			// numericUpDown1
			// 
			this->numericUpDown1->DecimalPlaces = 3;
			this->numericUpDown1->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->numericUpDown1->Location = System::Drawing::Point(221, 63);
			this->numericUpDown1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->numericUpDown1->Name = L"numericUpDown1";
			this->numericUpDown1->Size = System::Drawing::Size(58, 20);
			this->numericUpDown1->TabIndex = 17;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(220, 95);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(88, 13);
			this->label7->TabIndex = 16;
			this->label7->Text = L"Mutation Chance";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(122, 95);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(95, 26);
			this->label5->TabIndex = 12;
			this->label5->Text = L"Place Of Mutation \r\n(0 is a random)";
			// 
			// boxMutationsPlace
			// 
			this->boxMutationsPlace->Location = System::Drawing::Point(125, 123);
			this->boxMutationsPlace->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 85, 0, 0, 0 });
			this->boxMutationsPlace->Name = L"boxMutationsPlace";
			this->boxMutationsPlace->Size = System::Drawing::Size(58, 20);
			this->boxMutationsPlace->TabIndex = 11;
			// 
			// boxMutationChance
			// 
			this->boxMutationChance->DecimalPlaces = 3;
			this->boxMutationChance->Increment = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 196608 });
			this->boxMutationChance->Location = System::Drawing::Point(226, 123);
			this->boxMutationChance->Name = L"boxMutationChance";
			this->boxMutationChance->Size = System::Drawing::Size(53, 20);
			this->boxMutationChance->TabIndex = 13;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(122, 47);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 13);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Place Of Crossing";
			// 
			// boxCrossing
			// 
			this->boxCrossing->Location = System::Drawing::Point(125, 63);
			this->boxCrossing->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 84, 0, 0, 0 });
			this->boxCrossing->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 2, 0, 0, 0 });
			this->boxCrossing->Name = L"boxCrossing";
			this->boxCrossing->Size = System::Drawing::Size(58, 20);
			this->boxCrossing->TabIndex = 9;
			this->boxCrossing->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 40, 0, 0, 0 });
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(223, 2);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(116, 13);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Number of Generations";
			// 
			// boxGenerations
			// 
			this->boxGenerations->Location = System::Drawing::Point(226, 18);
			this->boxGenerations->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 300, 0, 0, 0 });
			this->boxGenerations->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->boxGenerations->Name = L"boxGenerations";
			this->boxGenerations->Size = System::Drawing::Size(53, 20);
			this->boxGenerations->TabIndex = 7;
			this->boxGenerations->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 100, 0, 0, 0 });
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(345, 2);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(114, 13);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Number Of Repetitions";
			// 
			// boxRepetitions
			// 
			this->boxRepetitions->Location = System::Drawing::Point(348, 18);
			this->boxRepetitions->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->boxRepetitions->Name = L"boxRepetitions";
			this->boxRepetitions->Size = System::Drawing::Size(56, 20);
			this->boxRepetitions->TabIndex = 5;
			this->boxRepetitions->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 5, 0, 0, 0 });
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(122, 2);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(95, 13);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Number Of Players";
			// 
			// boxPlayer
			// 
			this->boxPlayer->AccessibleName = L"";
			this->boxPlayer->Location = System::Drawing::Point(125, 18);
			this->boxPlayer->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->boxPlayer->Name = L"boxPlayer";
			this->boxPlayer->Size = System::Drawing::Size(58, 20);
			this->boxPlayer->TabIndex = 2;
			this->boxPlayer->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(258, 203);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(125, 46);
			this->button3->TabIndex = 5;
			this->button3->Text = L"START";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(490, 292);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->numericUpDown1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxMutationsPlace))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxMutationChance))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxCrossing))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxGenerations))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxRepetitions))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->boxPlayer))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		liczbaGraczy = Decimal::ToInt32(boxPlayer->Value);
		if(wsk!=NULL)wsk->~Gra();
		wsk->losowaPopulacja();
		wsk->zapiszChromosomy();
	}
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		//FolderBrowserDialog cos = new FolderBrowserDialog();
		openFileDialog1->ShowDialog();
		wsk->wczytajPopulacje(msclr::interop::marshal_as<std::string>(openFileDialog1->FileName));
		boxPlayer->Value = liczbaGraczy;
	}
private: System::Void openFileDialog1_FileOk(System::Object^  sender, System::ComponentModel::CancelEventArgs^  e) {
}
private: System::Void numericUpDown1_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox2_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {

		liczbaPokolen= Decimal::ToInt32(boxGenerations->Value);
		pozycjaKrzyz=Decimal::ToInt32(boxCrossing->Value);
		pozycjaMut=Decimal::ToInt32(boxMutationsPlace->Value);
		liczbaPowtorzen=Decimal::ToInt32(boxRepetitions->Value);
		szansaMut= (int)(1/Decimal::ToDouble(boxMutationChance->Value));
		szansaKrzyz= (int)(1 / Decimal::ToDouble(numericUpDown1->Value));
		cross50 = radioButton2->Checked;
		cross33 = radioButton1->Checked;
		crossR = radioButton3->Checked;
		for (int i = 0; i < liczbaPowtorzen; i++) {
			Gra nowy;
			nowy.losowaPopulacja();
			nowy.start(wsk);
		}
}
private: System::Void label6_Click(System::Object^  sender, System::EventArgs^  e) {
}
};
}
