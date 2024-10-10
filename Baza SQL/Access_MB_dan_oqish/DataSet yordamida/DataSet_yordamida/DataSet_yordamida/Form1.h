#pragma once

namespace DataSet_yordamida {

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

	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::CheckBox^  checkBox2;
	private: System::Windows::Forms::CheckBox^  checkBox3;
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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(674, 212);
			this->dataGridView1->TabIndex = 0;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->textBox1->ForeColor = System::Drawing::SystemColors::InactiveCaption;
			this->textBox1->Location = System::Drawing::Point(215, 309);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(247, 39);
			this->textBox1->TabIndex = 2;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(63, 227);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 24);
			this->label1->TabIndex = 3;
			this->label1->Text = L"Qidirish usullari";
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox1->Location = System::Drawing::Point(25, 274);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(173, 28);
			this->checkBox1->TabIndex = 4;
			this->checkBox1->Text = L"Familiya bo\'yicha";
			this->checkBox1->UseVisualStyleBackColor = true;
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox2->Location = System::Drawing::Point(25, 318);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(137, 28);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"Ismi bo\'yicha";
			this->checkBox2->UseVisualStyleBackColor = true;
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->checkBox3->Location = System::Drawing::Point(25, 367);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(172, 28);
			this->checkBox3->TabIndex = 6;
			this->checkBox3->Text = L"Telefoni bo\'yicha";
			this->checkBox3->UseVisualStyleBackColor = true;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 424);
			this->Controls->Add(this->checkBox3);
			this->Controls->Add(this->checkBox2);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion 
		void DBSet(String ^s){
		this->Text = "MB dan jadvallani o'qish va so'rovlarni amalaga oshirish:";
 auto Подключение = gcnew OleDb::OleDbConnection( 
 "Data Source=\"Oybek.mdb\";User " +
 "ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";"); 
 Подключение->Open();
 //auto Команда = gcnew OleDb::OleDbCommand(  "Select * From [talaba]", Подключение); 
 // Выбираем из таблицы только те записи, поле ФИО которых 
 // начинается на букву "М":
  auto Команда =
  gcnew OleDb::OleDbCommand(s, Подключение); 
 // Создаем объект класса Adapter и выполняем SQL-запрос 
 auto Адаптер = gcnew OleDb::OleDbDataAdapter(Команда); 
 // Создаем объект класса DataSet
 auto НаборДанных = gcnew DataSet();
 // Заполняем DataSet результатом SQL-запроса 
 Адаптер->Fill(НаборДанных, "talaba");
 // Содержимое DataSet в виде строки XML для отладки: 
 auto СтрокаXML = НаборДанных->GetXml();
 // Указываем источник данных для сетки данных: 
 dataGridView1->DataSource = НаборДанных;
 // Указываем имя таблицы в наборе данных: 
 dataGridView1->DataMember = "talaba"; 
 Подключение->Close();
		
		}
		// Программа читает из БД таблицу в сетку данных DataGridView
 // с использованием объектов класса Command, Adapter и DataSet 
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		// * jadvalning hamma ustunini jiqaradi 
     String ^satr="SELECT Fam as Фамилия, Ism as Ismi FROM [talaba] "; //WHERE (Fam LIKE '%M%')
	 DBSet(satr);
		  }
	private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
				 
				 if(checkBox1->Checked){
			DBSet("SELECT * FROM [talaba] WHERE (Fam LIKE '"+textBox1->Text+"%')");}
				 else if(checkBox2->Checked){
			DBSet("SELECT * FROM [talaba] WHERE (Ism LIKE '"+textBox1->Text+"%')");}
				 else  if(checkBox3->Checked){
			DBSet("SELECT * FROM [talaba] WHERE (Telefoni LIKE '"+textBox1->Text+"%')");}
				 else
				 {
					 MessageBox::Show("Qidirish turlaridan bittasini tanlang");
				 }

			 }

};
}

