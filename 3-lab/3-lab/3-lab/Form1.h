#pragma once
#include<string.h>
#include<iostream>
#include<stdio.h>
#include<fstream>
#include"talaba.h"
namespace My3lab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Diagnostics;
	using namespace System::ComponentModel;
	using namespace System::Runtime::InteropServices;
	using namespace std;
	/// <summary>
	/// Summary for Form1
	/// </summary>
	char ss[300]="";
	
	
	public ref class Form1 : public System::Windows::Forms::Form
	{  
	public:
		Form1(void)
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
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	public: System::Windows::Forms::ListBox^  listBox1;
	protected: 

	protected: 
	private: System::Windows::Forms::LinkLabel^  linkLabel1;
	private: System::Windows::Forms::Button^  button1;

	private: System::Windows::Forms::DateTimePicker^  dateTimePicker1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ComboBox^  comboBox2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox6;

	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::Label^  label9;


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
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->linkLabel1 = (gcnew System::Windows::Forms::LinkLabel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->dateTimePicker1 = (gcnew System::Windows::Forms::DateTimePicker());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// listBox1
			// 
			this->listBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Location = System::Drawing::Point(866, 42);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(157, 244);
			this->listBox1->TabIndex = 0;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// linkLabel1
			// 
			this->linkLabel1->AutoSize = true;
			this->linkLabel1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->linkLabel1->Location = System::Drawing::Point(300, 367);
			this->linkLabel1->Name = L"linkLabel1";
			this->linkLabel1->Size = System::Drawing::Size(358, 25);
			this->linkLabel1->TabIndex = 1;
			this->linkLabel1->TabStop = true;
			this->linkLabel1->Text = L"Hisobodni Word documentda ochish";
			this->linkLabel1->LinkClicked += gcnew System::Windows::Forms::LinkLabelLinkClickedEventHandler(this, &Form1::linkLabel1_LinkClicked);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(117, 304);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(136, 34);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Kiritish";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// dateTimePicker1
			// 
			this->dateTimePicker1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->dateTimePicker1->Location = System::Drawing::Point(95, 218);
			this->dateTimePicker1->Name = L"dateTimePicker1";
			this->dateTimePicker1->Size = System::Drawing::Size(200, 26);
			this->dateTimePicker1->TabIndex = 4;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(103, 17);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(167, 31);
			this->textBox1->TabIndex = 5;
			this->textBox1->Text = L"C:\\\\2.txt";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 118);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(42, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Ismi:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(95, 76);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(200, 28);
			this->textBox2->TabIndex = 5;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(12, 82);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 20);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Fam:";
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(705, 304);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(117, 34);
			this->button2->TabIndex = 7;
			this->button2->Text = L"Qidirish";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(320, 12);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->textBox3->Size = System::Drawing::Size(316, 281);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"Fam: Mallayev";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(15, 17);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(80, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Fayl nomi:";
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(320, 304);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(126, 34);
			this->button3->TabIndex = 9;
			this->button3->Text = L"Fayldan o\'qish";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(476, 304);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(125, 34);
			this->button4->TabIndex = 10;
			this->button4->Text = L"Faylga yozish";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// textBox4
			// 
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox4->Location = System::Drawing::Point(95, 110);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(200, 28);
			this->textBox4->TabIndex = 5;
			// 
			// textBox5
			// 
			this->textBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox5->Location = System::Drawing::Point(95, 144);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(200, 28);
			this->textBox5->TabIndex = 5;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(12, 152);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(55, 20);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Sharfi:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(12, 186);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(61, 20);
			this->label5->TabIndex = 6;
			this->label5->Text = L"Guruhi:";
			// 
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(7) {L"214-16", L"215-16", L"216-17", L"217-16", L"218-16", 
				L"219-16", L"220-16"});
			this->comboBox1->Location = System::Drawing::Point(95, 180);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(200, 28);
			this->comboBox1->TabIndex = 11;
			this->comboBox1->Text = L"Guruhni tanlang";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(12, 225);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(83, 20);
			this->label6->TabIndex = 6;
			this->label6->Text = L"Tug. sana:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 259);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(62, 20);
			this->label7->TabIndex = 6;
			this->label7->Text = L"Bahosi:";
			// 
			// comboBox2
			// 
			this->comboBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(163)));
			this->comboBox2->ForeColor = System::Drawing::SystemColors::Desktop;
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(3) {L"5", L"4", L"3"});
			this->comboBox2->Location = System::Drawing::Point(95, 253);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(200, 28);
			this->comboBox2->TabIndex = 11;
			this->comboBox2->Text = L"Bahosini tanlang";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(660, 45);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(111, 28);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"Familiyasi";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(656, 14);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(156, 20);
			this->label8->TabIndex = 6;
			this->label8->Text = L"Qidirish turini tanlang";
			// 
			// textBox6
			// 
			this->textBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox6->Location = System::Drawing::Point(660, 265);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(200, 28);
			this->textBox6->TabIndex = 5;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(660, 74);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(62, 28);
			this->checkBox2->TabIndex = 12;
			this->checkBox2->Text = L"Ismi";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(660, 108);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(76, 28);
			this->checkBox3->TabIndex = 12;
			this->checkBox3->Text = L"Sharfi";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(660, 142);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(82, 28);
			this->checkBox4->TabIndex = 12;
			this->checkBox4->Text = L"Guruh";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox5->Location = System::Drawing::Point(660, 176);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(113, 28);
			this->checkBox5->TabIndex = 12;
			this->checkBox5->Text = L"Tug. sana";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox6->Location = System::Drawing::Point(660, 210);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(73, 28);
			this->checkBox6->TabIndex = 12;
			this->checkBox6->Text = L"Baho";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label9->Location = System::Drawing::Point(862, 14);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(175, 20);
			this->label9->TabIndex = 6;
			this->label9->Text = L"Oynaning fonini tanlang";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1035, 416);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dateTimePicker1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->linkLabel1);
			this->Controls->Add(this->listBox1);
			this->Name = L"Form1";
			this->Text = L"3-laboratoriya ishi";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		void OpenWithStartInfo(String^ kamonda, String^ faylname)
{
	ProcessStartInfo^ startInfo = gcnew ProcessStartInfo(kamonda);
    startInfo->WindowStyle = ProcessWindowStyle::Minimized;
    Process::Start(startInfo);
	startInfo->Arguments = faylname;
    Process::Start(startInfo);
}
		
#pragma endregion
	private: System::Void linkLabel1_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
     String^ myFavoritesPath = Environment::GetFolderPath(Environment::SpecialFolder::Favorites);
              
	 OpenWithStartInfo("winword.exe",textBox1->Text);
				
			 }
	char * and_SysStringToChar(System::String^ string) 
{
return (char*)(void*)Marshal::StringToHGlobalAnsi(string);
	}
	// Faylga yozishning antiqa yangi usuli
	void loadFtomFile(char *FileName, ListBox ^lb){
	char s[300]; String^ AA;
	FILE *fp;
	int i;
	i=0;
	lb->Items->Clear();
	if(!(fp=fopen(FileName,"r"))){ return;}
	while(!feof(fp)){
		fgets(s,20,fp); strncat(ss,s,strlen(s));  
	String^ dd=gcnew String(s);
	int j=dd->Length-1;
	dd=dd->Substring(0,j);
	lb->Items->Add(dd);
	i++;}
    	}
	
	static int j=1; int y,qq; bool e;
	void qidirish(char *FileName){ e=true;
		Form1::textBox3->Clear();
		if(textBox6->Text!=""){
		FILE *oqi; oqi=fopen(FileName,"r"); 
		if(!oqi){ MessageBox::Show("Xato"); return;}
		            char temp[40];
		            char ism[40];
	                char fam[40];
	                char sharfi[40];
	                char guruh[40];
	                char Tu_sana[40];
					int baho;
					String^ Tt,^Ti,^Tf,^Ts,^Tg,^Tu,^Tb;
		while(!feof(oqi)){
			int n;
			fgets(temp,25,oqi); 
			fgets(fam,25,oqi); //String^ dd=gcnew String(fam); MessageBox::Show(dd);
			fgets(ism,25,oqi); 
			fgets(sharfi ,25,oqi);
			fgets(guruh ,25,oqi);
			fgets(Tu_sana,25,oqi);
			fscanf(oqi,"%d",&baho);
			
			if(Form1::checkBox1->Checked==true){y=1;
			 char *satr=and_SysStringToChar(textBox6->Text);
			if(strstr(fam,satr)!=NULL){qq=1;}
			else {qq=0;}
			}
			else if(Form1::checkBox2->Checked==true){y=2;
			 char *satr=and_SysStringToChar(textBox6->Text);
			if(strstr(ism,satr)!=NULL){qq=1;}
			else {qq=0;}
			}
			else if(Form1::checkBox3->Checked==true){y=3;
			 char *satr=and_SysStringToChar(textBox6->Text);
			 if(strstr(sharfi,satr)!=NULL){qq=1;}
			else {qq=0;}
			}
			else if(Form1::checkBox4->Checked==true){y=4;
			 char *satr=and_SysStringToChar(textBox6->Text);
			 if(strstr(guruh,satr)!=NULL){qq=1;}
			else {qq=0;}
			}
			else if(Form1::checkBox5->Checked==true){y=5;
			 char *satr=and_SysStringToChar(textBox6->Text);
			 if(strstr(Tu_sana,satr)!=NULL){qq=1;}
			else {qq=0;}
			}
			else if(Form1::checkBox6->Checked==true){y=6;
				try{//baho=Convert::ToInt64(textBox6->Text);
			 if(baho==Convert::ToInt64(textBox6->Text)){qq=1;}
			 else {qq=0;}
			}
			catch (Exception^ vaziyat){qq=0; MessageBox::Show(vaziyat->Message, "Bahoni kiritishda xatolik",
				MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }			
			} else {goto bir;}
					
				if(qq==1)
			{
					Tf=gcnew String(fam); int j=Tf->Length-1; Tf=Tf->Substring(0,j);
					Form1::textBox3->AppendText(Tf+System::Environment::NewLine); 
					Ti=gcnew String(ism);
					Form1::textBox3->AppendText(Ti+System::Environment::NewLine);
					Ts=gcnew String(sharfi);
					Form1::textBox3->AppendText(Ts+System::Environment::NewLine);
					Tg=gcnew String(guruh);
					Form1::textBox3->AppendText(Tg+System::Environment::NewLine);
					Tu=gcnew String(Tu_sana);
					Form1::textBox3->AppendText(Tu+System::Environment::NewLine);
					Tb=gcnew String(baho.ToString());
					Form1::textBox3->AppendText(Tb+System::Environment::NewLine);							
					e=false;}
            if(!fgets(temp,2,oqi))break;
			
		}
		if(e){MessageBox::Show("Afsuski siz izlayotgan talaba topilmadi","Qidirish natijasi");}
		}
		else { bir:MessageBox::Show("Qidiriladigan talaba kiriting","Qidirish natijasi");}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
 			//this->loadFtomFile("C:\\1.txt",this->textBox3,0); 
				
				 textBox3->AppendText(j.ToString()+" - talaba"+Environment::NewLine);
				 textBox3->AppendText(textBox2->Text+Environment::NewLine);
				 textBox3->AppendText(textBox4->Text+Environment::NewLine);
				 textBox3->AppendText(textBox5->Text+Environment::NewLine);
				 textBox3->AppendText(comboBox1->Text+Environment::NewLine);
				 textBox3->AppendText(String::Format("{0}",dateTimePicker1->Text)+Environment::NewLine);
				 try{
				 textBox3->AppendText(comboBox2->Text+Environment::NewLine);
				 }
				 catch(Exception^ vaziyat){ MessageBox::Show("Bahosini notogri kiritdingiz"); }
				 j++;
      }

	private: System::Void linkLabel2_LinkClicked(System::Object^  sender, System::Windows::Forms::LinkLabelLinkClickedEventArgs^  e) {
			 } 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			char *satr=and_SysStringToChar(textBox1->Text);
			qidirish(satr); 
		 }

		 String ^ filename;
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
textBox3->Clear();
			 filename = textBox1->Text;
			  dateTimePicker1->Format = DateTimePickerFormat::Custom; dateTimePicker1->CustomFormat = "dd.dd.yyyy";

			  // Получаем массив строк имен цветов из перечисления KnownColor
array<String^>^ Rang = Enum::GetNames(KnownColor::typeid);
// В C#: string[] ВсеЦвета = Enum.GetNames(typeof(KnownColor));
listBox1->Items->Clear();
// Добавляем имена всех цветов в список listBox1:
listBox1->Items->AddRange(Rang);
// Сортировать записи в алфавитном порядке
listBox1->Sorted = true;

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
filename = textBox1->Text;
			 try
{
// Faylga yozish uchun obyekt yaratish
	System::Text::Encoding^ shirift =
System::Text::Encoding::GetEncoding(1251);
IO::StreamReader^ oquvchi = gcnew
IO::StreamReader(filename, shirift);
textBox3->Text = oquvchi->ReadToEnd();
oquvchi->Close(); 
	}
catch (IO::FileNotFoundException^ vaziyat)
{ 
MessageBox::Show(vaziyat->Message + "\nBundey fayl yo'q",
"Xatolik", MessageBoxButtons::OK,
MessageBoxIcon::Exclamation);
}
catch (Exception^ vaziyat)
{

MessageBox::Show(vaziyat->Message, "Xatolik",
MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
}	 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
filename = textBox1->Text;
try
{
	auto shirift =System::Text::Encoding::GetEncoding(1251);
auto yozuvch = gcnew
IO::StreamWriter(filename, false,shirift);
yozuvch->Write(textBox3->Text);
yozuvch->Close();
}
catch (Exception^ vaziyat)
{
MessageBox::Show(vaziyat->Message, "Xatolik",
MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
}
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 // Цвет Transparent является "прозрачным", он не поддерживается
// для формы:
if (listBox1->Text == "Transparent") return;
this->BackColor = Color::FromName(listBox1->Text);
this->Text = "Rang: " + listBox1->Text;
		 }
};
}

