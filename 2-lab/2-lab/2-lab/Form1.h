#pragma once
#include "Form2.h";
#include "Form3.h";
#include "Form31.h";

namespace My2lab {

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
	private: System::Windows::Forms::CheckBox^  checkBox1;
	protected: 
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;

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
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Location = System::Drawing::Point(281, 20);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(72, 17);
			this->checkBox1->TabIndex = 0;
			this->checkBox1->Text = L"Hisoblash";
			this->checkBox1->UseVisualStyleBackColor = true;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Location = System::Drawing::Point(397, 62);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(120, 94);
			this->checkedListBox1->TabIndex = 1;
			// 
			// comboBox1
			// 
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Location = System::Drawing::Point(389, 20);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 21);
			this->comboBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(28, 20);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(187, 53);
			this->button1->TabIndex = 3;
			this->button1->Text = L"ChecBox";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(31, 104);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(187, 55);
			this->button2->TabIndex = 4;
			this->button2->Text = L"CheckListBox";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(32, 188);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(183, 54);
			this->button3->TabIndex = 5;
			this->button3->Text = L"ComboBox";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &Form1::button3_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(234, 278);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->checkBox1);
			this->Name = L"Form1";
			this->Text = L"2-laboratoriya";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
				 checkedListBox1->Items->Add("Salom");
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		 Form2^ open=gcnew Form2();
		 this->Hide();
		 open->Show();
				 //if( checkedListBox1->Items->IndexOf(1) ){
				//		 MessageBox::Show("Salom"+checkedListBox1->Items->IndexOf(1).ToString());
				 //}

/*				 IEnumerator^ myEnum1 = checkedListBox1->CheckedIndices->GetEnumerator();
   while ( myEnum1->MoveNext() )
   {
      Int32 indexChecked =  *safe_cast<Int32^>(myEnum1->Current);

      // The indexChecked variable contains the index of the item.
      MessageBox::Show( String::Concat( "Index#: ", indexChecked, ", is checked. Checked state is: ", checkedListBox1->GetItemCheckState( indexChecked ), "." ) );
   }
   
   IEnumerator^ myEnum2 = checkedListBox1->CheckedItems->GetEnumerator();
   while ( myEnum2->MoveNext() )
   {
      Object^ itemChecked = safe_cast<Object^>(myEnum2->Current);

      // Use the IndexOf method to get the index of an item.
      MessageBox::Show( String::Concat( "Item with title: \"", itemChecked, "\", is checked. Checked state is: ", checkedListBox1->GetItemCheckState( checkedListBox1->Items->IndexOf( itemChecked ) ), "." ) );
   }

   if(checkBox1->Checked){MessageBox::Show("Tanlandi");}	 
   */
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			  Form3^ open=gcnew Form3();
		 this->Hide();
		 open->Show();

		 }
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
		 Form31^ open=gcnew Form31();
		 this->Hide();
		 open->Show();
		 }
};
}

