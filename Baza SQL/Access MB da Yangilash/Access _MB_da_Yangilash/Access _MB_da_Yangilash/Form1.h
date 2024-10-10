#pragma once

namespace Access_MB_da_Yangilash {

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
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(666, 218);
			this->dataGridView1->TabIndex = 0;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(115, 246);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(140, 33);
			this->button1->TabIndex = 1;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(372, 246);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(162, 34);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(690, 290);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	
 DataSet ^ НаборДанных;
 OleDb::OleDbDataAdapter ^ Адаптер;
 OleDb::OleDbConnection ^ Подключение;
 OleDb::OleDbCommand ^ Команда;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
НаборДанных = gcnew DataSet();
 Подключение = gcnew OleDb:: 
 OleDbConnection( // Строка подключения: 
 "Data Source=\"Oybek.mdb\";User " + 
 "ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";"); 
 Команда = gcnew OleDb::OleDbCommand(); 
 button1->Text = "MBdan o`qish"; button1->TabIndex = 0; 
 button2->Text = "MBni yangilash";
 this->Text="MB ni ma'lumotlarini yangilash";

			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				 // Читать из БД:
				
 if (Подключение->State ==  ConnectionState::Closed) Подключение->Open(); 
 Адаптер = gcnew OleDb::OleDbDataAdapter("Select * From [talaba]", Подключение); 
 // Заполняем DataSet результатом SQL-запроса 
 Адаптер->Fill(НаборДанных, "talaba");
 // Содержимое DataSet в виде строки XML для отладки: 
 String ^ СтрокаXML = НаборДанных->GetXml();
 // Указываем источник данных для сетки данных: 
 dataGridView1->DataSource = НаборДанных;
 // Указываем имя таблицы в наборе данных: 
 dataGridView1->DataMember = "talaba"; 
 Подключение->Close();
			 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {

			 // Сохранить в базе данных
 Команда->CommandText = "UPDATE [talaba] SET [Fam] = ?, Ism = ?, Sharf = ?, "+
	 "Tug_sana = ?, Step = ? WHERE ([id] = ?)"; 
 // Имя, тип и длина параметра 
 Команда->Parameters->Add("Fam", OleDb::OleDbType::VarWChar, 50, "Fam"); 
 Команда->Parameters->Add( "Ism", OleDb::OleDbType::VarWChar, 50, "Ism");
 Команда->Parameters->Add( "Sharf", OleDb::OleDbType::VarWChar, 50, "Sharf");
 Команда->Parameters->Add( "Tug_sana", OleDb::OleDbType::Date , 50, "Tug_sana");
 Команда->Parameters->Add( "Step", OleDb::OleDbType::VarChar , 50, "Step");
 Команда->Parameters->Add(gcnew OleDb::OleDbParameter("Original_id", 
 OleDb::OleDbType::Integer,
 0, System::Data::ParameterDirection:: 
 Input, false, (Byte)0, (Byte)0, "id", 
 System::Data::DataRowVersion::Original, nullptr)); 
 Адаптер->UpdateCommand = Команда; 
 Команда->Connection = Подключение;
 try
 { // Update возвращает количество измененных строк 
 int kol = Адаптер->Update(НаборДанных, "talaba"); 
 MessageBox::Show("Обновлено " + kol + " записей");
 }
 catch (Exception ^ Ситуация)
 { MessageBox::Show(Ситуация->Message, "Недоразумение"); }
		 }
};
}

