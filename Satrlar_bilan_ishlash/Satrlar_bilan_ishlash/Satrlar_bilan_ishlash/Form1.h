#pragma once
#include<string.h>
#include"Form2.h"
namespace Satrlar_bilan_ishlash {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label2;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(177, 284);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(104, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Hisoblash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(12, 36);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(208, 242);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(25, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 24);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Kirivchi ma\'lumotlar";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(236, 36);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(213, 242);
			this->textBox2->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(245, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(195, 24);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Chiquvchi ma\'lumotlar";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 331);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Satrlar bilan ishlash";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 char satr[200]="";
				// label1->Text=String::Empty;
				 for(int i=0; i<textBox1->Text->Length; i++)
				 {
					 satr[i]=textBox1->Text[i];
				 }
				 for(int i=0; i<strlen(satr); i++)
				 { if(satr[i]==' '){satr[i]='_';}}

				 String^ s=gcnew String(satr);
				 textBox2->Text=s;
			 }
String^ parol, ^newparol;	
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				
				 
				 label2->Visible=false;
				 label1->Text="Parolni kiriting";
				 textBox2->Visible=false;
				 button1->Visible=false;
				 Button^ button4 = gcnew Button();
				
button4->Font = gcnew System::Drawing::Font("Courier New", 16.0F, FontStyle::Italic);
textBox1->PasswordChar = '*';
textBox1->Font = gcnew System::Drawing::Font("Courier New",16.0F);
textBox1->Size = Drawing::Size(208, 35);

Form1::Height=200;
Form1::Width=230;

button4->Visible = true;
button4->Size = Drawing::Size(100, 30);

button4->Location = Drawing::Point(50, 90);
button4->Text = "Ok";
this->Controls->Add(button4);


 parol="Salom";
 
 button4->Click += gcnew EventHandler(this, &Form1::ўелчокЌа нопке );
		 
			 }
private: System::Void ўелчокЌа нопке(System::Object^ sender, System::EventArgs^ e)
{                 
				  newparol=textBox1->Text;
				 if(parol==newparol){		
		textBox1->Size = Drawing::Size(208, 242);
		Form1::Size=Drawing::Size(503,369);
		textBox1->Location = Drawing::Point(20, 35);
        textBox1->Text = "";
		textBox1->PasswordChar = NULL;
		label1->Text="Kiruvchi ma'lumotlar";		 
				 label1->Visible=true;
				 label2->Visible=true;
				 textBox1->Visible=true;
				 textBox2->Visible=true;
				 button1->Visible=true;
	}
				 else {
				 System::Windows::Forms::FormClosingEventArgs^ r;
	auto MBox = MessageBox::Show("Yana urunib ko'rasmi?", "Xato", MessageBoxButtons::YesNoCancel,
MessageBoxIcon::Exclamation);
// YES Ч диалог; NO Ч выход; CANCEL - редактировать
if (MBox == Windows::Forms::DialogResult::No) return;
if (MBox == Windows::Forms::DialogResult::Cancel){this->Close();}
if (MBox == Windows::Forms::DialogResult::Yes)
{    
	textBox1->Text="";
}     }
		 }

};
}

