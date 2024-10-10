#pragma once

namespace My3_1lab {

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
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label3;
	private: System::ComponentModel::IContainer^  components;
	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>


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
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(41, 136);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(254, 39);
			this->button1->TabIndex = 4;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(41, 52);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(254, 31);
			this->textBox1->TabIndex = 5;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(106, 97);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 6;
			this->label1->Text = L"label1";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(106, 9);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(148, 25);
			this->label2->TabIndex = 6;
			this->label2->Text = L"Parolni kiriting";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(76, 196);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(163, 28);
			this->checkBox1->TabIndex = 7;
			this->checkBox1->Text = L"Yarim qilin shirift";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(76, 241);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(163, 28);
			this->checkBox2->TabIndex = 8;
			this->checkBox2->Text = L"Yarim qiya shirift";
			this->checkBox2->UseVisualStyleBackColor = true;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox2_CheckedChanged);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(361, 5);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(221, 36);
			this->button2->TabIndex = 9;
			this->button2->Text = L"Yangin tugmachalar yaratish";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(363, 171);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(229, 29);
			this->textBox2->TabIndex = 10;
			this->textBox2->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &Form1::textBox2_KeyPress);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(391, 136);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(190, 25);
			this->label3->TabIndex = 6;
			this->label3->Text = L"Faqat raqm kiriting";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(642, 285);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"1q";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	
#pragma endregion
	private: System::Void notifyIcon1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

			 
			 label1->Text = textBox1->Text;

		 }
private: System::Void listView1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {



		 }
private: System::Void listView1_MouseHover(System::Object^  sender, System::EventArgs^  e) {

			// MessageBox::Show("—обытие Hover!");
		 }
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

				 Form1::Text = "Parolni kiriting";
textBox1->Text = nullptr; textBox1->TabIndex = 0;
textBox1->PasswordChar = '*';
textBox1->Font = gcnew System::Drawing::Font("Courier New",16.0F);
// yoki textBox1->Font = gcnew System::Drawing::Font(FontFamily::
// GenericMonospace,9.0F);
label1->Text = String::Empty;
label1->Font = gcnew System::Drawing::Font("Courier New", 14.0F);
button1->Text = "Parolni ko'rsating";
			 }
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {

				 
if (checkBox1->Checked == true){ 
	label2->Font = gcnew System::Drawing::Font("Courier New", 16.0F, FontStyle::Bold); 
    label1->Font = gcnew System::Drawing::Font("Courier New", 16.0F, FontStyle::Bold); 
	button1->Font = gcnew System::Drawing::Font("Courier New", 16.0F, FontStyle::Bold);
   }
if (checkBox1->Checked == false){
	label2->Font = gcnew System::Drawing::Font("Courier New", 16.0F, FontStyle::Regular);
	label1->Font = gcnew System::Drawing::Font("Courier New", 16.0F, FontStyle::Regular);
	button1->Font = gcnew System::Drawing::Font("Courier New", 16.0F, FontStyle::Regular);
}
			 }
private: System::Void checkBox2_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
			 label2->Font = gcnew System::Drawing::Font("Courier New", 16.0F, FontStyle::Italic);
	label1->Font = gcnew System::Drawing::Font("Courier New", 16.0F, FontStyle::Italic);
	button1->Font = gcnew System::Drawing::Font("Courier New", 16.0F, FontStyle::Italic);

		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

Button^ button4 = gcnew Button();

button4->Visible = true;
button4->Size = Drawing::Size(100, 30);
// –асположение кнопки в системе координат формы:
button4->Location = Drawing::Point(400, 80);
button4->Text = "Yangi tugmacha 1";
this->Controls->Add(button4);
button4->Click += gcnew EventHandler(this, &Form1::ўелчокЌа нопке);
		 }
		 private: System::
Void ўелчокЌа нопке(System::Object^ sender, System::EventArgs^ e)
{
MessageBox::Show("Yangi tugmani bosdingiz");
}
private: System::Void textBox2_KeyPress(System::Object^  sender, System::Windows::Forms::KeyPressEventArgs^  e) {

			 if (Char::IsDigit(e->KeyChar) == true) return;
if (e->KeyChar == (char)Keys::Back) return;
e->Handled = true;
		 }
};
}

