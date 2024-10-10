#pragma once
#include "iostream"
#include "conio.h"
#include "stdlib.h"
namespace My2lab {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form3
	/// </summary>
	public ref class Form3 : public System::Windows::Forms::Form
	{
	public:
		Form3(void)
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
		~Form3()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  button1;
	protected: 
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column2;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column3;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column4;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column5;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column6;
	private: System::Windows::Forms::CheckedListBox^  checkedListBox1;


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
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column2 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column3 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column4 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column5 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column6 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->checkedListBox1 = (gcnew System::Windows::Forms::CheckedListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(520, 294);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(261, 43);
			this->button1->TabIndex = 18;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form3::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(586, 15);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 24);
			this->label3->TabIndex = 16;
			this->label3->Text = L"M:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(383, 13);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 24);
			this->label2->TabIndex = 17;
			this->label2->Text = L"N:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(635, 12);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(109, 29);
			this->textBox2->TabIndex = 15;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(436, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 29);
			this->textBox1->TabIndex = 14;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5, this->Column6});
			this->dataGridView1->Location = System::Drawing::Point(294, 47);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(644, 241);
			this->dataGridView1->TabIndex = 13;
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"Column1";
			this->Column1->Name = L"Column1";
			// 
			// Column2
			// 
			this->Column2->HeaderText = L"Column2";
			this->Column2->Name = L"Column2";
			// 
			// Column3
			// 
			this->Column3->HeaderText = L"Column3";
			this->Column3->Name = L"Column3";
			// 
			// Column4
			// 
			this->Column4->HeaderText = L"Column4";
			this->Column4->Name = L"Column4";
			// 
			// Column5
			// 
			this->Column5->HeaderText = L"Column5";
			this->Column5->Name = L"Column5";
			// 
			// Column6
			// 
			this->Column6->HeaderText = L"Column6";
			this->Column6->Name = L"Column6";
			// 
			// checkedListBox1
			// 
			this->checkedListBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, 
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			this->checkedListBox1->FormattingEnabled = true;
			this->checkedListBox1->Items->AddRange(gcnew cli::array< System::Object^  >(6) {L"Hisoblash", L"Tasodifiy sonlar bilan to\'ldirish", 
				L"DataGridWiew dan kiritish", L"Sariq rang", L"Qizil rang", L"Yashil rang"});
			this->checkedListBox1->Location = System::Drawing::Point(12, 47);
			this->checkedListBox1->Name = L"checkedListBox1";
			this->checkedListBox1->Size = System::Drawing::Size(276, 148);
			this->checkedListBox1->TabIndex = 19;
			// 
			// Form3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(967, 340);
			this->Controls->Add(this->checkedListBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form3";
			this->Text = L"CheckedListBox";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form3::Form3_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int g,s; 
#pragma endregion
		void index(int indexChecked[]){ int i=0;
		IEnumerator^ myEnum1 = checkedListBox1->CheckedIndices->GetEnumerator();
    while( myEnum1->MoveNext() )
   {
      indexChecked[i] =  *safe_cast<Int32^>(myEnum1->Current);	   i++;
   }  
		}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 int a[10][10];  
              int indexChecked[10];
			 s=0; int n,m;
			 if(textBox1->Text!="" && textBox2->Text!=""){	
			  n=Convert::ToInt32(textBox1->Text);
			  m=Convert::ToInt32(textBox2->Text);}

			 index(indexChecked); 
  if ( indexChecked[0]==0 && indexChecked[1]==1)
  {  if ( indexChecked[2]==3 ){Form3::BackColor=System::Drawing::Color::Yellow; }
     if ( indexChecked[2]==4 ){Form3::BackColor=System::Drawing::Color::Red; }
	 if ( indexChecked[2]==5 ){Form3::BackColor=System::Drawing::Color::Green; }
      	 for(int i=0;i<n;i++){
		 if(g==0){dataGridView1->Rows->Add();}
		 
		 for(int j=0;j<m;j++){
			 a[i][j]=rand()%50+1;
		 dataGridView1->Columns[j]->HeaderText=(j+1).ToString()+" - ustun";
		dataGridView1->Rows[i]->Cells[j]->Value =a[i][j].ToString();
		if(a[i][j]%2==0){s+=a[i][j];}
		 }}
			 g+=1;
			 MessageBox::Show("Juftlari yig'indisi= " + s.ToString()); 
	} 
   if ( indexChecked[0]==0 && indexChecked[1]==2)
  {  if ( indexChecked[2]==3 ){Form3::BackColor=System::Drawing::Color::Yellow; }
     if ( indexChecked[2]==4 ){Form3::BackColor=System::Drawing::Color::Red; }
	 if ( indexChecked[2]==5 ){Form3::BackColor=System::Drawing::Color::Green; }
	   s=0;
			 for(int i=0;i<n;i++){
		 if(g==0){dataGridView1->Rows->Add();}
		 
		 for(int j=0;j<m;j++){
			 a[i][j]=Convert::ToInt32( dataGridView1->Rows[i]->Cells[j]->Value ); 
		    if(a[i][j]%2==0){s+=a[i][j];} }
			 }
			  MessageBox::Show("Juftlari yig'indisi= " + s.ToString());
   }}             
			 
private: System::Void Form3_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

			  Application::Restart();
		 }
};
}
