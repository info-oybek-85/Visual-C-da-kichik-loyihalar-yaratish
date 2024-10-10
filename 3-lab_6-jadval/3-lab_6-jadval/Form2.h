#pragma once

namespace My3lab_6jadval {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form2
	/// </summary>
	public ref class Form2 : public System::Windows::Forms::Form
	{
	public:
		Form2(void)
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
		~Form2()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	protected: 
	private: System::Windows::Forms::RadioButton^  radioButton1;
	private: System::Windows::Forms::RadioButton^  radioButton2;
	private: System::Windows::Forms::RadioButton^  radioButton3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;

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
			this->radioButton1 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton2 = (gcnew System::Windows::Forms::RadioButton());
			this->radioButton3 = (gcnew System::Windows::Forms::RadioButton());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(90, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(60, 24);
			this->label1->TabIndex = 0;
			this->label1->Text = L"label1";
			// 
			// radioButton1
			// 
			this->radioButton1->AutoSize = true;
			this->radioButton1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton1->Location = System::Drawing::Point(94, 107);
			this->radioButton1->Name = L"radioButton1";
			this->radioButton1->Size = System::Drawing::Size(133, 28);
			this->radioButton1->TabIndex = 1;
			this->radioButton1->TabStop = true;
			this->radioButton1->Text = L"radioButton1";
			this->radioButton1->UseVisualStyleBackColor = true;
			// 
			// radioButton2
			// 
			this->radioButton2->AutoSize = true;
			this->radioButton2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton2->Location = System::Drawing::Point(95, 183);
			this->radioButton2->Name = L"radioButton2";
			this->radioButton2->Size = System::Drawing::Size(133, 28);
			this->radioButton2->TabIndex = 2;
			this->radioButton2->TabStop = true;
			this->radioButton2->Text = L"radioButton2";
			this->radioButton2->UseVisualStyleBackColor = true;
			// 
			// radioButton3
			// 
			this->radioButton3->AutoSize = true;
			this->radioButton3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->radioButton3->Location = System::Drawing::Point(95, 265);
			this->radioButton3->Name = L"radioButton3";
			this->radioButton3->Size = System::Drawing::Size(133, 28);
			this->radioButton3->TabIndex = 3;
			this->radioButton3->TabStop = true;
			this->radioButton3->Text = L"radioButton3";
			this->radioButton3->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(112, 337);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(132, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form2::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(332, 337);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(123, 39);
			this->button2->TabIndex = 5;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form2::button2_Click);
			// 
			// Form2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 409);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->radioButton3);
			this->Controls->Add(this->radioButton2);
			this->Controls->Add(this->radioButton1);
			this->Controls->Add(this->label1);
			this->Name = L"Form2";
			this->Text = L"Informatika fanidan test topshiriqlari";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form2::Form2_FormClosed);
			this->Load += gcnew System::EventHandler(this, &Form2::Form2_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int SavollarSoni; 
int TogriJavob; int NoTogriJavob; array<String^>^ NoTogri_javoblar;
int TogriJavobNomeri; int Tanlangan_javob; 
IO::StreamReader^ oqish;

void Testni_boshalsh(){
System::Text::Encoding^ Кодировка =
System::Text::Encoding::GetEncoding(1251);
try{ 
oqish = gcnew IO::StreamReader(
IO::Directory::GetCurrentDirectory()+ "\\test.txt", Кодировка);
this->Text = oqish->ReadLine(); 
SavollarSoni = 0; TogriJavob = 0; NoTogriJavob = 0;
NoTogri_javoblar = gcnew array<String^>(100);
}
catch (Exception^ Ситуация)
{ MessageBox::Show(Ситуация->Message, "Hatolik", MessageBoxButtons::OK, MessageBoxIcon::Exclamation); }
Key_savol_oqish(); }

void Key_savol_oqish(){
label1->Text = oqish->ReadLine();
radioButton1->Text = oqish->ReadLine();
radioButton2->Text = oqish->ReadLine();
radioButton3->Text = oqish->ReadLine();
TogriJavobNomeri = int::Parse(oqish->ReadLine());
radioButton1->Checked = false; radioButton2->Checked = false;
radioButton3->Checked = false;
button1->Enabled = false;
SavollarSoni = SavollarSoni + 1;
if (oqish->EndOfStream == true) button1->Text = "Завершить";
}

private: Void Keyingi_savolga_otish(System::Object^ sender, System::EventArgs^ e)
{ 
button1->Enabled = true; button1->Focus();
RadioButton^ Переключатель = (RadioButton^)sender; String^ tmp = Переключатель->Name;
Tanlangan_javob = int::Parse(tmp->Substring(11)); }


private: System::Void Form2_Load(System::Object^  sender, System::EventArgs^  e) {

button1->Text = "Keyingi savol";
button2->Text = "Chiqish";
radioButton1->CheckedChanged +=gcnew EventHandler(this, &Form2::Keyingi_savolga_otish);
radioButton2->CheckedChanged +=gcnew EventHandler(this, &Form2::Keyingi_savolga_otish);
radioButton3->CheckedChanged +=gcnew EventHandler(this, &Form2::Keyingi_savolga_otish);
Testni_boshalsh();	

			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 if (Tanlangan_javob == TogriJavobNomeri) TogriJavob = TogriJavob + 1;
if (Tanlangan_javob != TogriJavobNomeri)
{ 
NoTogriJavob = NoTogriJavob + 1; NoTogri_javoblar[NoTogriJavob] = label1->Text;
}
if (button1->Text == "Testni boshidan boshlash")
{
button1->Text = "Keyingi savol";
radioButton1->Visible = true; radioButton2->Visible = true;
radioButton3->Visible = true; Testni_boshalsh(); return;
}
if (button1->Text == "Yakunlash")
	{ oqish->Close();
radioButton1->Visible = false; radioButton2->Visible =
false; radioButton3->Visible = false;
label1->Text = String::Format("Test yakunlandi.\n" + "Togri javoblar: {0} из {1}.\n" +
"5 balli tizimda baholash: {2:F2}.", TogriJavob, SavollarSoni, (TogriJavob * 5.0F) / SavollarSoni); button1->Text = "Testni boshidan boshlash";
String^ Str = "Siz javob bergan noto`g`ri savollar ro`yhati :\n\n";
for (int i = 1; i <= NoTogriJavob; i++)
Str = Str + NoTogri_javoblar[i] + "\n";
if (NoTogriJavob != 0)
MessageBox::Show(Str, "Test yakunlandi");
}
if (button1->Text == "Keyingi savol") Key_savol_oqish();
}
		 
		 
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 this->Close();

		 }
private: System::Void Form2_FormClosed(System::Object^  sender, 
			 System::Windows::Forms::FormClosedEventArgs^  e) {
				 Application::Restart();
		 }
};
}
