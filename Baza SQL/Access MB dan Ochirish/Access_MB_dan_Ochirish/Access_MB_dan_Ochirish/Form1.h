#pragma once

namespace Access_MB_dan_Ochirish {

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
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	protected: 
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(683, 208);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(224, 264);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(220, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"O\'chirish";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(224, 226);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(220, 32);
			this->textBox1->TabIndex = 2;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(716, 299);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	DataSet ^ НаборДанных;
 OleDb::OleDbDataAdapter ^ Адаптер;
 OleDb::OleDbConnection ^ Подключение;
	OleDb::OleDbCommand ^ Команда;
 
		void MBdan_uchirish(){
			
 Подключение = gcnew OleDb:: 
 OleDbConnection( "Data Source=\"Oybek.mdb\";User " +  "ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";");  
 if (Подключение->State ==  ConnectionState::Closed) Подключение->Open();
 
 Команда = gcnew Data::OleDb::OleDbCommand( 
 "Delete Fam,Ism,Sharf,Tug_sana,Telefoni From [talaba] Where " +  "Fam = '"+textBox1->Text+"'", Подключение);	
 // агар Fam устунидан textBox1->Text га китилган ихтиёрий харф бўйича ўчирмоқчи бўлсангиз қуйидаги кодни теринг:
 //Команда = gcnew Data::OleDb::OleDbCommand( "Delete Fam,Ism,Sharf,Tug_sana,Telefoni From [talaba] Where " + 
// "Fam Like '"+textBox1->Text+"%'", Подключение);
 // Выполнение команды SQL
 //Команда = gcnew OleDb::OleDbCommand();
 int i = Команда->ExecuteNonQuery();
 // i - количество удаленных записей
 if (i > 0){ MessageBox::Show(
	 "Familiya ustunidagi bo`yicha topilgan yozuvlar '"+textBox1->Text+"*', o`chirildi"); 
 MBdan_uqish();
 }
 if (i == 0) MessageBox::Show(
 "Familiya ustunidagi bo`yicha topilgan yozuvlar '"+textBox1->Text+"*', topilmadi"); 
 		}

		void MBdan_uqish(){
			
НаборДанных = gcnew DataSet();
		Подключение = gcnew OleDb:: 
 OleDbConnection( "Data Source=\"Oybek.mdb\";User " +  "ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";"); 
 Команда = gcnew OleDb::OleDbCommand(); 
		 // МБ дан ўқиш:				
 if (Подключение->State ==  ConnectionState::Closed) Подключение->Open(); 
 Адаптер = gcnew OleDb::OleDbDataAdapter("Select * From [talaba]", Подключение); 
 // DataSet ни SQL сўровлари натижаси билан тўлдириш 
 Адаптер->Fill(НаборДанных, "talaba"); 
 String ^ СтрокаXML = НаборДанных->GetXml();
 dataGridView1->DataSource = НаборДанных;
dataGridView1->DataMember = "talaba"; 
 //Подключение->Close();
		}

	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 
 this->Text="MB jadvalidanni ma'lumotlarini o`chirish";
        MBdan_uqish();
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		
		MBdan_uchirish();
			 }
};
}

