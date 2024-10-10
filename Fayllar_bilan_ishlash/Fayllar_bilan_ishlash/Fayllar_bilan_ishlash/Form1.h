#pragma once
#include"Form2.h"
#include<string.h>
namespace Fayllar_bilan_ishlash {

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
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	protected: 
	private: System::Windows::Forms::ToolStripMenuItem^  faylToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ochishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  yopishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  chiqishToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^  fanlardanTestToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  informatikaToolStripMenuItem;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;



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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->faylToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ochishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yopishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chiqishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fanlardanTestToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informatikaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->faylToolStripMenuItem, 
				this->fanlardanTestToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(474, 24);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// faylToolStripMenuItem
			// 
			this->faylToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ochishToolStripMenuItem, 
				this->yopishToolStripMenuItem, this->chiqishToolStripMenuItem});
			this->faylToolStripMenuItem->Name = L"faylToolStripMenuItem";
			this->faylToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->faylToolStripMenuItem->Text = L"Fayl";
			// 
			// ochishToolStripMenuItem
			// 
			this->ochishToolStripMenuItem->Name = L"ochishToolStripMenuItem";
			this->ochishToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->ochishToolStripMenuItem->Text = L"Ochish";
			this->ochishToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ochishToolStripMenuItem_Click);
			// 
			// yopishToolStripMenuItem
			// 
			this->yopishToolStripMenuItem->Name = L"yopishToolStripMenuItem";
			this->yopishToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->yopishToolStripMenuItem->Text = L"Saqlash";
			this->yopishToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::yopishToolStripMenuItem_Click);
			// 
			// chiqishToolStripMenuItem
			// 
			this->chiqishToolStripMenuItem->Name = L"chiqishToolStripMenuItem";
			this->chiqishToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->chiqishToolStripMenuItem->Text = L"Chiqish";
			this->chiqishToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::chiqishToolStripMenuItem_Click);
			// 
			// fanlardanTestToolStripMenuItem
			// 
			this->fanlardanTestToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) {this->informatikaToolStripMenuItem});
			this->fanlardanTestToolStripMenuItem->Name = L"fanlardanTestToolStripMenuItem";
			this->fanlardanTestToolStripMenuItem->Size = System::Drawing::Size(93, 20);
			this->fanlardanTestToolStripMenuItem->Text = L"Fanlardan test";
			this->fanlardanTestToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::fanlardanTestToolStripMenuItem_Click);
			// 
			// informatikaToolStripMenuItem
			// 
			this->informatikaToolStripMenuItem->Name = L"informatikaToolStripMenuItem";
			this->informatikaToolStripMenuItem->Size = System::Drawing::Size(135, 22);
			this->informatikaToolStripMenuItem->Text = L"Informatika";
			this->informatikaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::informatikaToolStripMenuItem_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(0, 66);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(230, 299);
			this->textBox1->TabIndex = 1;
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(236, 66);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(230, 299);
			this->textBox2->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(73, 371);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 33);
			this->button1->TabIndex = 3;
			this->button1->Text = L"1-masala";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(265, 371);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(105, 33);
			this->button2->TabIndex = 4;
			this->button2->Text = L"2-masala";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(236, 27);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(79, 33);
			this->textBox3->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(203, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 24);
			this->label1->TabIndex = 6;
			this->label1->Text = L"K:";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(474, 421);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Fayllar bilan ishlash";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 textBox1->Multiline = true; textBox1->Clear();
textBox1->Size = Drawing::Size(230, 299);
this->Text = "Oddiy matn muharriri";
openFileDialog1->FileName = "C:\\Text2.txt";
openFileDialog1->Filter =
"Текстовые файлы (*.txt)|*.txt|All files (*.*)|*.*";
saveFileDialog1->Filter =
"Текстовые файлы (*.txt)|*.txt|All files (*.*)|*.*";
			 }
private: System::Void ochishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Вывести диалог открытия файла
openFileDialog1->ShowDialog();
if (openFileDialog1->FileName == nullptr) return;
// Чтение текстового файла:
try
{ // Создание экземпляра StreamReader для чтения из файла
auto Читатель = gcnew
IO::StreamReader(openFileDialog1->FileName,System::Text::Encoding::GetEncoding(1251));
// - здесь заказ кодовой страницы Win1251 для русских букв
textBox1->Text = Читатель->ReadToEnd();
Читатель->Close();
}
catch (IO::FileNotFoundException^ Ситуация)
{
MessageBox::Show(Ситуация->Message + "\n bundey fayl yo`q",
"Hatolik", MessageBoxButtons::OK,
MessageBoxIcon::Exclamation);
}
catch (Exception^ Ситуация)
{
// Отчет о других ошибках
MessageBox::Show(Ситуация->Message, "Hatolik",
MessageBoxButtons::OK,
MessageBoxIcon::Exclamation);
}
		 }
private: System::Void yopishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Пункт меню Сохранить как
saveFileDialog1->FileName = openFileDialog1->FileName;
if (saveFileDialog1->ShowDialog() ==
Windows::Forms::DialogResult::OK) Запись();
}
void Запись()
{
try
{
// Создание экземпляра StreamWriter для записи в файл:
auto Писатель = gcnew
IO::StreamWriter(saveFileDialog1->FileName, false,
System::Text::Encoding::GetEncoding(1251));
// - здесь заказ кодовой страницы Win1251 для русских букв
Писатель->Write(textBox1->Text);
Писатель->Close(); textBox1->Modified = false;
}
catch (Exception^ Ситуация)
{
// Отчет обо всех возможных ошибках
MessageBox::Show(Ситуация->Message, "Hatolik",
MessageBoxButtons::OK,
MessageBoxIcon::Exclamation);
}
		 }
private: System::Void chiqishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 this->Close();
		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

			 // Обработка момента закрытия формы:
if (textBox1->Modified == false) return;
// Если текст модифицирован, то спросить, записывать ли файл?
auto MBox = MessageBox::Show(
"Текст был изменен. \nСохранить изменения?",
"Простой редактор", MessageBoxButtons::YesNoCancel,
MessageBoxIcon::Exclamation);
// YES — диалог; NO — выход; CANCEL - редактировать
if (MBox == Windows::Forms::DialogResult::No) return;
if (MBox == Windows::Forms::DialogResult::Cancel) e->Cancel =
true;
if (MBox == Windows::Forms::DialogResult::Yes)
{
if (saveFileDialog1->ShowDialog() ==
Windows::Forms::DialogResult::OK)
{
Запись(); return;
}
else e->Cancel = true; // Передумал выходить из ПГМ
} // DialogResult::Yes

		 }
private: System::Void fanlardanTestToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void informatikaToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 Form2^ op=gcnew Form2();
			 this->Hide();
			 op->Show();
		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			 textBox2->Text="";
			 char satr[200]=""; int a[100], k=1,l=0; a[l]=0;
				 for(int i=0; i<textBox1->Text->Length; i++)
				 { satr[i]=textBox1->Text[i]; }
     
				 strcat(satr," "); int m=0,min=0, max=0;
				 bool b=true;
				 for(int i=0; i<strlen(satr); i++) {
					 if(satr[i]==' '){ 
					 a[l]=k-1; if(b){max=a[l]; b=false;} 
				 if(a[l]<=max){max=a[l]; m=i-k; min=k;} l++; k=0;
					 }
				 k++;
				 }
				 char natija[100]="";
				 strncpy(natija,satr+m,min);
				 String^ s=gcnew String(natija); 
				 textBox2->Text=s;

		 }
		 bool i;
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			int K; 
			K=Convert::ToInt64(textBox3->Text);
			 textBox2->Text="";
			 char satr[200]=""; int a[100], k=1,p=1,l=0; a[l]=0;
				 for(int i=0; i<textBox1->Text->Length; i++)
				 { satr[i]=textBox1->Text[i]; }
                 char natija[100]="";
				 strcat(satr," "); int m=0,min=0, max=0;
				 
				 for(int i=0; i<strlen(satr); i++) {
					 if(satr[i]==' '){ //MessageBox::Show(k.ToString());
						 if(k-1==K ){ 
						 strncat(natija,satr+(i-k),k); strcat(natija," ");  }
						 k=0;
					 }
				 k++;
				 }
			 String^ s=gcnew String(natija); 
				 textBox2->Text=s;
			
		 }
};
}

