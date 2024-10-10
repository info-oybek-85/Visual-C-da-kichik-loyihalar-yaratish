#pragma once

namespace Access_MB_dan_oqish {

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
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(12, 12);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(662, 141);
			this->dataGridView1->TabIndex = 0;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(678, 159);
			this->Controls->Add(this->dataGridView1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 this->Text="MB dan ma'lumotlarni o'qish";
 auto Подключение = gcnew OleDb::OleDbConnection( 
 "Data Source=\"Oybek.mdb\";User " + 
 "ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";"); 
 Подключение->Open();
 // Создаем объект Command, передавая ему SQL-команду 
 auto Команда = gcnew OleDb:: 
 OleDbCommand("Select * From [talaba]", Подключение); 
 // Выполняем SQL-команду
 auto Читатель = Команда-> ExecuteReader();
 // (CommandBehavior.CloseConnection)
 auto Таблица = gcnew DataTable();
 // Заполнение "шапки" таблицы 
for(int i=0;i<6;i++){
 Таблица->Columns->Add(Читатель->GetName(i));
}

 while (Читатель->Read() == true)
	 // Заполнение клеток (ячеек) таблицы 
	Таблица->Rows->Add(Читатель->GetValue(0), 
 Читатель->GetValue(1), Читатель->GetValue(2), Читатель->GetValue(3), Читатель->GetValue(4),
 Читатель->GetValue(5)); 
 // Здесь три поля: 0, 1 и 2 
 Читатель->Close(); Подключение->Close(); 
 dataGridView1->DataSource = Таблица;
 }
			 
	};

}

