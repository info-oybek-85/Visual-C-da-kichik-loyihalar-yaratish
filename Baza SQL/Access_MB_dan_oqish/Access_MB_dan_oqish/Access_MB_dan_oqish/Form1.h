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
 auto ����������� = gcnew OleDb::OleDbConnection( 
 "Data Source=\"Oybek.mdb\";User " + 
 "ID=Admin;Provider=\"Microsoft.Jet.OLEDB.4.0\";"); 
 �����������->Open();
 // ������� ������ Command, ��������� ��� SQL-������� 
 auto ������� = gcnew OleDb:: 
 OleDbCommand("Select * From [talaba]", �����������); 
 // ��������� SQL-�������
 auto �������� = �������-> ExecuteReader();
 // (CommandBehavior.CloseConnection)
 auto ������� = gcnew DataTable();
 // ���������� "�����" ������� 
for(int i=0;i<6;i++){
 �������->Columns->Add(��������->GetName(i));
}

 while (��������->Read() == true)
	 // ���������� ������ (�����) ������� 
	�������->Rows->Add(��������->GetValue(0), 
 ��������->GetValue(1), ��������->GetValue(2), ��������->GetValue(3), ��������->GetValue(4),
 ��������->GetValue(5)); 
 // ����� ��� ����: 0, 1 � 2 
 ��������->Close(); �����������->Close(); 
 dataGridView1->DataSource = �������;
 }
			 
	};

}

