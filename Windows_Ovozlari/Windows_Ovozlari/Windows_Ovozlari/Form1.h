#pragma once

namespace Windows_Ovozlari {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
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
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;

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
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 12);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(425, 38);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 56);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(425, 36);
			this->button2->TabIndex = 1;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(12, 98);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(425, 35);
			this->button3->TabIndex = 2;
			this->button3->Text = L"button3";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(12, 139);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(425, 35);
			this->button4->TabIndex = 3;
			this->button4->Text = L"button4";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Form1::button4_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(12, 180);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(425, 33);
			this->button5->TabIndex = 4;
			this->button5->Text = L"button5";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &Form1::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(12, 219);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(425, 33);
			this->button6->TabIndex = 5;
			this->button6->Text = L"button6";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &Form1::button6_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(449, 273);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		System::Media::SoundPlayer ^ �����;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

	 this->Text = "�������� ������� ��";
 ����� = gcnew System::Media::SoundPlayer();
 // ������ �������� ��������� ������: 
 button1->Text = "���� ��������� \"��-��\""; 
 button2->Text = "���� ���������� ��������"; 
 button3->Text = "���� ������";
 button4->Text = "������� ����� = 1000 ��"; 
 button5->Text = "���� � Windows XP"; 
 button6->Text = "����� �� Windows XP";
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 //��������������� ��������� WAV-����� 
 �����->SoundLocation = "c:\\windows\\media\\tada.wav"; 
 �����->Play();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 // ����� SystemSounds �������� �����, ��������� � ������� 
 // ����� �������� ������� ������������ ������� Windows: 
 System::Media::SystemSounds::Asterisk->Play();
		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
			 System::Media::SystemSounds::Beep->Play();
		 }
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
			 // �������� ������ �������� 1000 �� � ������������� 0::5 ������: 
 Console::Beep(1000, 500);
		 }
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
			 �����->SoundLocation = "C:\\windows\\media\\Windows Startup.wav"; 
 �����->Play();
		 }
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
			 �����->SoundLocation = "C:\\windows\\media\\Windows User Account Control.wav"; 
 �����->Play();
		 }
};
}

