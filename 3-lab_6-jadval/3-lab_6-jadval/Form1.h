#pragma once
#include<fstream>
#include"Form2.h"

namespace My3lab_6jadval {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	protected: 
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::OpenFileDialog^  openFileDialog1;
	private: System::Windows::Forms::SaveFileDialog^  saveFileDialog1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  faylToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ochishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  saqlashToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  chiqishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  fanlardanTestToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  informatikaToolStripMenuItem;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->openFileDialog1 = (gcnew System::Windows::Forms::OpenFileDialog());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->faylToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ochishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saqlashToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->chiqishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->fanlardanTestToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->informatikaToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(17, 69);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(263, 278);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(297, 71);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(270, 275);
			this->textBox2->TabIndex = 1;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(354, 25);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(151, 35);
			this->textBox3->TabIndex = 2;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(296, 31);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"K:";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(58, 380);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(175, 34);
			this->button1->TabIndex = 4;
			this->button1->Text = L"1-masala";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(335, 380);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(188, 34);
			this->button2->TabIndex = 5;
			this->button2->Text = L"2-masala";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// openFileDialog1
			// 
			this->openFileDialog1->FileName = L"openFileDialog1";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->faylToolStripMenuItem, 
				this->fanlardanTestToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(593, 24);
			this->menuStrip1->TabIndex = 6;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// faylToolStripMenuItem
			// 
			this->faylToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {this->ochishToolStripMenuItem, 
				this->saqlashToolStripMenuItem, this->chiqishToolStripMenuItem});
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
			// saqlashToolStripMenuItem
			// 
			this->saqlashToolStripMenuItem->Name = L"saqlashToolStripMenuItem";
			this->saqlashToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->saqlashToolStripMenuItem->Text = L"Saqlash";
			this->saqlashToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::saqlashToolStripMenuItem_Click);
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
			// 
			// informatikaToolStripMenuItem
			// 
			this->informatikaToolStripMenuItem->Name = L"informatikaToolStripMenuItem";
			this->informatikaToolStripMenuItem->Size = System::Drawing::Size(152, 22);
			this->informatikaToolStripMenuItem->Text = L"Informatika";
			this->informatikaToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::informatikaToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(593, 449);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"3-laboratoriya ishi 6-jadval";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &Form1::Form1_FormClosing);
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
//Матннинг энг қисқа бўлган охирги сўзи чоп қилинсин.
				 textBox2->Text="";
char satr[200]=""; int a[100], k=1,l=0; a[l]=0;
for(int i=0; i<textBox1->Text->Length; i++)// i ni textBox1 ni uzunligigacha 1 tadan oshirish
{ satr[i]=textBox1->Text[i]; }// satr o'zgaruvchisiga textBox1 ni o'zlashtirish
strcat(satr," ");// star o'zgaruvchisisga bitta bo'sh star ulash
int m=0,min=0, max=0;
bool b=true;
for(int i=0; i<strlen(satr); i++) {
if(satr[i]==' '){ // satr o'zgaruvchisining har bir elementi(so'z)ni tekshirish(so'z uzunligini o'lchash)
a[l]=k-1; if(b){max=a[l]; b=false;} // har so'z uzunligini a massivga o'zlashtirish 
if(a[l]<=max){max=a[l]; m=i-k; min=k;} // so'zlarning eng qisqasini topish
l++; k=0;} k++; }
char natija[100]="";
strncpy(natija,satr+m,min);// natija satriga qisqa so'z ni nushalash
String^ s=gcnew String(natija);  //textBox2->Text ga s o'zgaruvchisini chiqarish uchun 
textBox2->Text=s;// natija satrini o'zlashtrish
			 }

private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
//К бутун сони ва матнли файл берилган. Янги сатрли файл ҳосил қилинсин ва унга 
//бошланғич файлдаги узунлиги К га тенг бўлган барча сўзлар ёзилсин.
  int K; 
K=Convert::ToInt64(textBox3->Text);
textBox2->Text="";
char satr[200]=""; int a[100], k=1,p=1,l=0; a[l]=0;
for(int i=0; i<textBox1->Text->Length; i++)
{ satr[i]=textBox1->Text[i]; }
char natija[100]="";
strcat(satr," "); int m=0,min=0, max=0;
for(int i=0; i<strlen(satr); i++) {
if(satr[i]==' '){ 
if(k-1==K ){ 
strncat(natija,satr+(i-k),k); strcat(natija," ");  }
k=0; } k++; }
String^ s=gcnew String(natija);  textBox2->Text=s;
		 }

private: System::Void ochishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 openFileDialog1->ShowDialog();// fayllar bilan ishlash komponentini ishga tushirish
if (openFileDialog1->FileName == nullptr) return;// fayl topilmasa
try  //fayldagi ma'lumotlarni Читатель nomli o'zgaruvchiga o'zlashtirishga harakat
{ auto Читатель = gcnew
IO::StreamReader(openFileDialog1->FileName,System::Text::Encoding::GetEncoding(1251));
textBox1->Text = Читатель->ReadToEnd();// textBox1->Text ga faylni hamma ma'lumotlarini o'zlashtirish 
Читатель->Close(); // obyektni yopish
}
catch (IO::FileNotFoundException^ Ситуация) // IO classidagi sodir bo'lgan hodisa
{// hodisani ma'lumotlar oynachasida chiqarish
MessageBox::Show(Ситуация->Message + "\n bundey fayl yo`q", "Hatolik", MessageBoxButtons::OK, 
				 MessageBoxIcon::Exclamation);
}
catch (Exception^ Ситуация)
{ // hatolik haqida xabar chqarish
MessageBox::Show(Ситуация->Message, "Hatolik", MessageBoxButtons::OK,
MessageBoxIcon::Exclamation);
}
		 }

		 void Запись(){
try{ // Писатель o'zgaruvchisini faylga yozish uchun yaratish
auto Писатель = gcnew IO::StreamWriter(saveFileDialog1->FileName, false,
System::Text::Encoding::GetEncoding(1251));// rus alifbosida saqlash imkonini yaratish
Писатель->Write(textBox1->Text);// Писатель 
Писатель->Close(); textBox1->Modified = false;
}
catch (Exception^ Ситуация)
{ // xatolik haqida xabar oynachasini chiqarish
MessageBox::Show(Ситуация->Message, "Hatolik", MessageBoxButtons::OK,
MessageBoxIcon::Exclamation);}
		 }


private: System::Void saqlashToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
 saveFileDialog1->FileName = openFileDialog1->FileName;// Saqlash oynasida fayl nomi o'zlashtirish
 // Agar saqlash oynasida saqlash tugmasi bosilsa 
 if (saveFileDialog1->ShowDialog() ==Windows::Forms:: DialogResult::OK)
	//Запись funsiyasini chaqirish
	Запись();
		 }

private: System::Void chiqishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			  this->Close();	
		 }
// Dastur (Forma1)ishga tushganda
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
//textBox1 ni o'zgartirish uchun ruhsat olish
	textBox1->Multiline = true; textBox1->Clear();// textBox1 ni tozalash
textBox1->Size = Drawing::Size(230, 299);// textBox1 ni o'lchamini o'zgartirish
textBox2->Size = Drawing::Size(230, 299);// textBox2 ni o'lchamini o'zgartirish
this->Text = "Oddiy matn muharriri"; 
// openFileDialog1 ning FileName hossasiga fayl manzili va nomini yozish
openFileDialog1->FileName = "C:\\Text2.txt";
// faylni saqlashda uning turini filtirlash
openFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|All files (*.*)|*.*";
saveFileDialog1->Filter = "Текстовые файлы (*.txt)|*.txt|All files (*.*)|*.*";

		 }
private: System::Void Form1_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {

	if (textBox1->Modified == false) return;
auto MBox = MessageBox::Show("Текст был изменен. \nСохранить изменения?","Простой редактор", MessageBoxButtons::YesNoCancel, MessageBoxIcon:: Exclamation);
if (MBox == Windows::Forms::DialogResult::No) return;
if (MBox == Windows::Forms::DialogResult::Cancel) e->Cancel =true;
if (MBox == Windows::Forms::DialogResult::Yes)
{
if (saveFileDialog1->ShowDialog() ==Windows::Forms::DialogResult::OK)
{ Запись(); return;
}else e->Cancel = true; 

}
		 }
private: System::Void informatikaToolStripMenuItem_Click(System::Object^  sender, 
			 System::EventArgs^  e) {
//  Yangi formani ochish
				 Form2^ op=gcnew Form2();
			   this->Hide();
			    op->Show();

		 }
};
}

