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
	/// Summary for Form31
	/// </summary>
	public ref class Form31 : public System::Windows::Forms::Form
	{
	public:
		Form31(void)
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
		~Form31()
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
	private: System::Windows::Forms::ComboBox^  comboBox1;
	private: System::Windows::Forms::CheckBox^  checkBox6;
	private: System::Windows::Forms::CheckBox^  checkBox5;
	private: System::Windows::Forms::CheckBox^  checkBox4;
	private: System::Windows::Forms::CheckBox^  checkBox1;

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
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->checkBox6 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox5 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(541, 298);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(261, 43);
			this->button1->TabIndex = 24;
			this->button1->Text = L"OK";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form31::button1_Click);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(607, 19);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(31, 24);
			this->label3->TabIndex = 22;
			this->label3->Text = L"M:";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(404, 17);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(29, 24);
			this->label2->TabIndex = 23;
			this->label2->Text = L"N:";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(656, 16);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(109, 29);
			this->textBox2->TabIndex = 21;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(457, 16);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(113, 29);
			this->textBox1->TabIndex = 20;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(6) {this->Column1, 
				this->Column2, this->Column3, this->Column4, this->Column5, this->Column6});
			this->dataGridView1->Location = System::Drawing::Point(315, 51);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(644, 241);
			this->dataGridView1->TabIndex = 19;
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
			// comboBox1
			// 
			this->comboBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->comboBox1->FormattingEnabled = true;
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(2) {L"Tasodifiy sonlar bilan to\'ldirish", L"DataGridWiew dan kiritish"});
			this->comboBox1->Location = System::Drawing::Point(-1, 51);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(310, 32);
			this->comboBox1->TabIndex = 25;
			// 
			// checkBox6
			// 
			this->checkBox6->AutoSize = true;
			this->checkBox6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox6->Location = System::Drawing::Point(27, 197);
			this->checkBox6->Name = L"checkBox6";
			this->checkBox6->Size = System::Drawing::Size(122, 28);
			this->checkBox6->TabIndex = 29;
			this->checkBox6->Text = L"Yashil rang";
			this->checkBox6->UseVisualStyleBackColor = true;
			// 
			// checkBox5
			// 
			this->checkBox5->AutoSize = true;
			this->checkBox5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox5->Location = System::Drawing::Point(27, 150);
			this->checkBox5->Name = L"checkBox5";
			this->checkBox5->Size = System::Drawing::Size(108, 28);
			this->checkBox5->TabIndex = 28;
			this->checkBox5->Text = L"Qizil rang";
			this->checkBox5->UseVisualStyleBackColor = true;
			// 
			// checkBox4
			// 
			this->checkBox4->AutoSize = true;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox4->Location = System::Drawing::Point(27, 101);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(115, 28);
			this->checkBox4->TabIndex = 27;
			this->checkBox4->Text = L"Sariq rang";
			this->checkBox4->UseVisualStyleBackColor = true;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(27, 10);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(112, 28);
			this->checkBox1->TabIndex = 26;
			this->checkBox1->Text = L"Hisoblash";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// Form31
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(960, 337);
			this->Controls->Add(this->checkBox6);
			this->Controls->Add(this->checkBox5);
			this->Controls->Add(this->checkBox4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form31";
			this->Text = L"ComboBox";
			this->FormClosed += gcnew System::Windows::Forms::FormClosedEventHandler(this, &Form31::Form31_FormClosed);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
		int g,s; 
#pragma endregion
	private: System::Void Form31_FormClosed(System::Object^  sender, System::Windows::Forms::FormClosedEventArgs^  e) {

				   Application::Restart();
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			
			 	 int a[10][10];  
              int indexChecked[10];
			 s=0; int n,m;
			 if(textBox1->Text!="" && textBox2->Text!=""){	
			  n=Convert::ToInt32(textBox1->Text);
			  m=Convert::ToInt32(textBox2->Text);}

			 if(comboBox1->Text=="Tasodifiy sonlar bilan to'ldirish"){
				 if(checkBox1->Checked){
				 if(checkBox4->Checked){Form31::BackColor=System::Drawing::Color::Yellow; }
				 if(checkBox5->Checked){Form31::BackColor=System::Drawing::Color::Red; }
				 if(checkBox6->Checked){Form31::BackColor=System::Drawing::Color::Green; }
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
			 }
	 if(comboBox1->Text=="DataGridWiew dan kiritish"){
				 if(checkBox1->Checked){
				 if(checkBox4->Checked){Form31::BackColor=System::Drawing::Color::Yellow; }
				 if(checkBox5->Checked){Form31::BackColor=System::Drawing::Color::Red; }
				 if(checkBox6->Checked){Form31::BackColor=System::Drawing::Color::Green; }
		 s=0;
			 for(int i=0;i<n;i++){
		 if(g==0){dataGridView1->Rows->Add();}
		 
		 for(int j=0;j<m;j++){
			 a[i][j]=Convert::ToInt32( dataGridView1->Rows[i]->Cells[j]->Value ); 
		    if(a[i][j]%2==0){s+=a[i][j];} }
			 }
			  MessageBox::Show("Juftlari yig'indisi= " + s.ToString());		 
				 }
	 }

		 }
};
}
