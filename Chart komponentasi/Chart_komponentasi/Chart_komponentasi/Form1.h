#pragma once

namespace Chart_komponentasi {

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
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	protected: 
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Button^  button1;





	private: System::Windows::Forms::ListBox^  listBox1;
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
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^  series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series2 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			System::Windows::Forms::DataVisualization::Charting::Series^  series3 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			this->chart1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->chart1->BackImageTransparentColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->chart1->BorderlineColor = System::Drawing::Color::NavajoWhite;
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->BackImageAlignment = System::Windows::Forms::DataVisualization::Charting::ChartImageAlignmentStyle::Bottom;
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(12, 12);
			this->chart1->Name = L"chart1";
			this->chart1->Palette = System::Windows::Forms::DataVisualization::Charting::ChartColorPalette::SeaGreen;
			this->chart1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->LegendText = L"Maxsulot xajmi";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->LegendText = L"Soft Daromad";
			series2->Name = L"Series2";
			series3->ChartArea = L"ChartArea1";
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Spline;
			series3->Legend = L"Legend1";
			series3->LegendText = L"Avangard";
			series3->Name = L"Series3";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Series->Add(series3);
			this->chart1->Size = System::Drawing::Size(661, 229);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &Form1::chart1_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(27, 247);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(530, 207);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellEndEdit);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(227, 469);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Yangilash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(563, 247);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(110, 212);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(476, 459);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(686, 514);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->Name = L"Form1";
			this->Text = L"Jadvalli ma\'lumotlar bilan ishlash";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
		
		DataTable ^ Таблица;	
		
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				
//			chart1->Titles->Add("Oylar bo'yicha sotib olingan maxsulotlar soni va sof daromad");
//			
//			listBox1->Items->Add("Pie");
//			listBox1->Items->Add("Line");
//
//Таблица = gcnew DataTable();
////Ushbu jadvalda 2 ta ustun "Oy"va "Sotib olingan max.soni":
//Таблица->Columns->Add("Oy", String::typeid);
//// В C#: Таблица.Columns.Add("Месяц", typeof(String));
////2-ustun bo'yicha ma'lumotlar long tipida bo'lasi:
//Таблица->Columns->Add("Sotib olingan max.soni", Int64::typeid); 
//Таблица->Columns->Add("Xarajatlar", Int64::typeid); 
//Таблица->Columns->Add("Daromad", Int64::typeid);
//Таблица->Columns->Add("Sof Daromad", Int64::typeid);
//// В C#: Таблица.Columns.Add("Объем продаж", typeof(long));
////Jadvalning 1- qatorini to'ldiramiz:
//DataRow ^ Ряд = Таблица->NewRow();
//Ряд["Oy"] = "May"; 
//Ряд["Sotib olingan max.soni"] =10; 
//Ряд["Xarajatlar"] =3;
//Ряд["Daromad"] =15;  
//Ряд["Sof Daromad"] =Convert::ToInt64(Ряд["Daromad"]) -Convert::ToInt64(Ряд["Xarajatlar"]);
////Convert::ToInt64( dataGridView1->Rows[0]->Cells[0]->Value); 
//Таблица->Rows->Add(Ряд);
////Jadvalning 2- qatorini to'ldiramiz:
//Ряд = Таблица->NewRow();
//Ряд["Oy"] = "Iyun"; Ряд["Sotib olingan max.soni"] = 20; Ряд["Xarajatlar"] =5; Ряд["Daromad"] =25;  
//Ряд["Sof Daromad"] =Convert::ToInt64(Ряд["Daromad"]) -Convert::ToInt64(Ряд["Xarajatlar"]);
//Таблица->Rows->Add(Ряд);
////3- qatorni qo'shamiz:
//Ряд = Таблица->NewRow();
//Ряд["Oy"] = "Iyul"; Ряд["Sotib olingan max.soni"] = 30; Ряд["Xarajatlar"] =10; Ряд["Daromad"] =35;  
//Ряд["Sof Daromad"] =Convert::ToInt64(Ряд["Daromad"]) -Convert::ToInt64(Ряд["Xarajatlar"]);
//Таблица->Rows->Add(Ряд);
////4- qatorni qo'shamiz:
//Ряд = Таблица->NewRow();
//Ряд["Oy"] = "Avgust"; Ряд["Sotib olingan max.soni"] = 40; Ряд["Xarajatlar"] =15; Ряд["Daromad"] =45;  
//Ряд["Sof Daromad"] =Convert::ToInt64(Ряд["Daromad"]) -Convert::ToInt64(Ряд["Xarajatlar"]);
//Таблица->Rows->Add(Ряд);
////5- qatorni qo'shamiz:
//Ряд = Таблица->NewRow();
//Ряд["Oy"] = "Sentyabr"; Ряд["Sotib olingan max.soni"] = 50; Ряд["Xarajatlar"] =20; Ряд["Daromad"] =55;  
//Ряд["Sof Daromad"] =Convert::ToInt64(Ряд["Daromad"]) -Convert::ToInt64(Ряд["Xarajatlar"]);
//Таблица->Rows->Add(Ряд);
//
//dataGridView1->DataSource = Таблица;
//			chart1->DataSource = Таблица;
//			
//chart1->Series["Series1"]->XValueMember = "Oy";
//chart1->Series["Series2"]->XValueMember = "Oy";
//chart1->Series["Series3"]->XValueMember = "Oy";
//
//chart1->Series["Series1"]->YValueMembers = "Sotib olingan max.soni";
//chart1->Series["Series2"]->YValueMembers = "Sof Daromad";
//chart1->Series["Series3"]->YValueMembers = "Sof Daromad";
//
//chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
//chart1->Series["Series2"]->ChartType = 
//	System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
//chart1->Series["Series3"]->ChartType = 
//	System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
//// Diogrammaning turi quyidagicha bo'lishi ham mumkin. masalan: Pie, Line va bohqa.
//chart1->Series["Series1"]->Color = Color::Aqua; 
//chart1->Series["Series2"]->Color = Color::Yellow;
//chart1->Series["Series2"]->Color = Color::Red;
//// Series legendasi ko'rinmaydi
////chart1->Series["Series1"]->IsVisibleInLegend = false; chart1->Series["Series2"]->IsVisibleInLegend = false;
//// Привязка графика к источнику данных:
//chart1->DataBind();
//// Для сетки данных указываем источник данных

			 }

 void dio(){

 Таблица = gcnew DataTable();
Таблица->Columns->Add("Oy", String::typeid);
Таблица->Columns->Add("Sotib olingan max.soni", Int64::typeid); 
Таблица->Columns->Add("Xarajatlar", Int64::typeid); 
Таблица->Columns->Add("Daromad", Int64::typeid);  
Таблица->Columns->Add("Sof Daromad", Int64::typeid);
DataRow ^ Ряд = Таблица->NewRow();
Ряд["Oy"] = dataGridView1->Rows[0]->Cells[0]->Value;
Ряд["Sotib olingan max.soni"] =dataGridView1->Rows[0]->Cells[1]->Value;
Ряд["Xarajatlar"] =dataGridView1->Rows[0]->Cells[2]->Value;
Ряд["Daromad"] =dataGridView1->Rows[0]->Cells[3]->Value; 
Ряд["Sof Daromad"] =Convert::ToInt64(dataGridView1->Rows[0]->Cells[3]->Value) 
	-Convert::ToInt64(dataGridView1->Rows[0]->Cells[2]->Value);
Таблица->Rows->Add(Ряд);

Ряд = Таблица->NewRow();
Ряд["Oy"] = dataGridView1->Rows[1]->Cells[0]->Value; Ряд["Sotib olingan max.soni"] = dataGridView1->Rows[1]->Cells[1]->Value;
Ряд["Xarajatlar"] =dataGridView1->Rows[1]->Cells[2]->Value; Ряд["Daromad"] =dataGridView1->Rows[1]->Cells[3]->Value; 
Ряд["Sof Daromad"] =Convert::ToInt64(dataGridView1->Rows[1]->Cells[3]->Value) -Convert::ToInt64(dataGridView1->Rows[1]->Cells[2]->Value);
Таблица->Rows->Add(Ряд);
Ряд = Таблица->NewRow();
Ряд["Oy"] = dataGridView1->Rows[2]->Cells[0]->Value; Ряд["Sotib olingan max.soni"] = dataGridView1->Rows[2]->Cells[1]->Value;
Ряд["Xarajatlar"] =dataGridView1->Rows[2]->Cells[2]->Value; Ряд["Daromad"] =dataGridView1->Rows[2]->Cells[3]->Value; 
Ряд["Sof Daromad"] =Convert::ToInt64(dataGridView1->Rows[2]->Cells[3]->Value) -Convert::ToInt64(dataGridView1->Rows[2]->Cells[2]->Value);
Таблица->Rows->Add(Ряд);
Ряд = Таблица->NewRow();
Ряд["Oy"] = dataGridView1->Rows[3]->Cells[0]->Value; Ряд["Sotib olingan max.soni"] = dataGridView1->Rows[3]->Cells[1]->Value;
Ряд["Xarajatlar"] =dataGridView1->Rows[3]->Cells[2]->Value; Ряд["Daromad"] =dataGridView1->Rows[3]->Cells[3]->Value; 
Ряд["Sof Daromad"] =Convert::ToInt64(dataGridView1->Rows[3]->Cells[3]->Value) -Convert::ToInt64(dataGridView1->Rows[3]->Cells[2]->Value);
Таблица->Rows->Add(Ряд);
Ряд = Таблица->NewRow();
Ряд["Oy"] = dataGridView1->Rows[4]->Cells[0]->Value; Ряд["Sotib olingan max.soni"] = dataGridView1->Rows[4]->Cells[1]->Value;
Ряд["Xarajatlar"] =dataGridView1->Rows[4]->Cells[2]->Value; Ряд["Daromad"] =dataGridView1->Rows[4]->Cells[3]->Value; 
Ряд["Sof Daromad"] =Convert::ToInt64(dataGridView1->Rows[4]->Cells[3]->Value) -Convert::ToInt64(dataGridView1->Rows[4]->Cells[2]->Value);
Таблица->Rows->Add(Ряд);
			
chart1->DataSource = Таблица;
chart1->Series["Series1"]->XValueMember = "Oy";
chart1->Series["Series2"]->XValueMember = "Oy";
chart1->Series["Series3"]->XValueMember = "Oy";

chart1->Series["Series1"]->YValueMembers = "Sotib olingan max.soni";
chart1->Series["Series2"]->YValueMembers = "Sof Daromad";
chart1->Series["Series2"]->YValueMembers = "Sof Daromad";

chart1->Series["Series1"]->ChartType =
	System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
chart1->Series["Series2"]->ChartType = 
	System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
chart1->Series["Series3"]->ChartType = 
	System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
chart1->Series["Series1"]->Color = Color::Aqua;
chart1->Series["Series2"]->Color = Color::Green;
chart1->Series["Series2"]->Color = Color::Red;

//chart1->Series["Series1"]->IsVisibleInLegend = false;
chart1->DataBind();
dataGridView1->DataSource = Таблица;
		}
	private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			
			 }
private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {

		 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
			dio();
		 }
private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {

			 
			/* if (listBox1->Text == "Transparent") return;
			 this->chart1->Series["Series1"]->ChartTypeName =(listBox1->Text) ;
			 this->chart1->Series["Series2"]->ChartTypeName =(listBox1->Text) ;
			 this->chart1->Series["Series3"]->ChartTypeName =(listBox1->Text) ;*/
		 }



private: System::Void dataGridView1_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
			 //dio();
		 }
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
			 chart1->Series["Series3"]->Points->AddXY(10, 50);
			 chart1->Series["Series3"]->Points->AddXY(15, 65);
			 chart1->Series["Series3"]->Points->AddXY(35, 75);
           // chart1.Series["Series2"].Points.AddXY(0, 0);

		 }
};
}

