#pragma once

namespace My3lab_7jadval {

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
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(29, -1);
			this->chart1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->Legend = L"Legend1";
			series1->LegendText = L"Maxsulot xajmi";
			series1->Name = L"Series1";
			series2->ChartArea = L"ChartArea1";
			series2->Legend = L"Legend1";
			series2->LegendText = L"Soft daromat";
			series2->Name = L"Series2";
			this->chart1->Series->Add(series1);
			this->chart1->Series->Add(series2);
			this->chart1->Size = System::Drawing::Size(694, 276);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(29, 274);
			this->dataGridView1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(530, 216);
			this->dataGridView1->TabIndex = 1;
			this->dataGridView1->CellEndEdit += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &Form1::dataGridView1_CellEndEdit);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(241, 496);
			this->button1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(238, 39);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Yangilash";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 18;
			this->listBox1->Location = System::Drawing::Point(567, 273);
			this->listBox1->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(156, 220);
			this->listBox1->TabIndex = 3;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::listBox1_SelectedIndexChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(9, 18);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(736, 537);
			this->Controls->Add(this->listBox1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->Margin = System::Windows::Forms::Padding(4, 4, 4, 4);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->chart1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion

	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {

				 dio();
		 }
void dio(){
this->Text = "Grafik ma'lumotlar";
 Jadval = gcnew DataTable();
Jadval->Columns->Add("Oy", String::typeid);
Jadval->Columns->Add("Sotib olingan max.soni", Int64::typeid); Jadval->Columns->Add("Xarajatlar", Int64::typeid); 
Jadval->Columns->Add("Daromat", Int64::typeid);  Jadval->Columns->Add("Sof daromat", Int64::typeid);

DataRow ^ Qator = Jadval->NewRow();
Qator["Oy"] = dataGridView1->Rows[0]->Cells[0]->Value; Qator["Sotib olingan max.soni"] =dataGridView1->Rows[0]->Cells[1]->Value;
Qator["Xarajatlar"] =dataGridView1->Rows[0]->Cells[2]->Value; Qator["Daromat"] =dataGridView1->Rows[0]->Cells[3]->Value; 
Qator["Sof daromat"] =Convert::ToInt64(dataGridView1->Rows[0]->Cells[3]->Value) -Convert::ToInt64(dataGridView1->Rows[0]->Cells[2]->Value);
Jadval->Rows->Add(Qator);
Qator = Jadval->NewRow();

Qator["Oy"] = dataGridView1->Rows[1]->Cells[0]->Value; Qator["Sotib olingan max.soni"] = dataGridView1->Rows[1]->Cells[1]->Value;
Qator["Xarajatlar"] =dataGridView1->Rows[1]->Cells[2]->Value; Qator["Daromat"] =dataGridView1->Rows[1]->Cells[3]->Value; 
Qator["Sof daromat"] =Convert::ToInt64(dataGridView1->Rows[1]->Cells[3]->Value) -Convert::ToInt64(dataGridView1->Rows[1]->Cells[2]->Value);
Jadval->Rows->Add(Qator);
Qator = Jadval->NewRow();
Qator["Oy"] = dataGridView1->Rows[2]->Cells[0]->Value; Qator["Sotib olingan max.soni"] = dataGridView1->Rows[2]->Cells[1]->Value;
Qator["Xarajatlar"] =dataGridView1->Rows[2]->Cells[2]->Value; Qator["Daromat"] =dataGridView1->Rows[2]->Cells[3]->Value; 
Qator["Sof daromat"] =Convert::ToInt64(dataGridView1->Rows[2]->Cells[3]->Value) -Convert::ToInt64(dataGridView1->Rows[2]->Cells[2]->Value);
Jadval->Rows->Add(Qator);
Qator = Jadval->NewRow();
Qator["Oy"] = dataGridView1->Rows[3]->Cells[0]->Value; Qator["Sotib olingan max.soni"] = dataGridView1->Rows[3]->Cells[1]->Value;
Qator["Xarajatlar"] =dataGridView1->Rows[3]->Cells[2]->Value; Qator["Daromat"] =dataGridView1->Rows[3]->Cells[3]->Value; 
Qator["Sof daromat"] =Convert::ToInt64(dataGridView1->Rows[3]->Cells[3]->Value) -Convert::ToInt64(dataGridView1->Rows[3]->Cells[2]->Value);
Jadval->Rows->Add(Qator);
Qator = Jadval->NewRow();
Qator["Oy"] = dataGridView1->Rows[4]->Cells[0]->Value; Qator["Sotib olingan max.soni"] = dataGridView1->Rows[4]->Cells[1]->Value;
Qator["Xarajatlar"] =dataGridView1->Rows[4]->Cells[2]->Value; Qator["Daromat"] =dataGridView1->Rows[4]->Cells[3]->Value; 
Qator["Sof daromat"] =Convert::ToInt64(dataGridView1->Rows[4]->Cells[3]->Value) -Convert::ToInt64(dataGridView1->Rows[4]->Cells[2]->Value);
Jadval->Rows->Add(Qator);
			chart1->DataSource = Jadval; // chart1 komponentasiga Jadvalni eksport qilish
chart1->Series["Series1"]->XValueMember = "Oy";// chart1 komponentasidagi Serie1 ning X kordinatasiga Oy so'zini yozish
chart1->Series["Series2"]->XValueMember = "Oy";// chart1 komponentasidagi Serie1 ning X kordinatasiga Oy so'zini yozish

// chart1 komponentasidagi Serie1 ning Y kordinatasiga Sotib olingan max.soni so'zini yozish
chart1->Series["Series1"]->YValueMembers = "Sotib olingan max.soni"; 
// chart1 komponentasidagi Serie2 ning Y kordinatasiga Sof daromat so'zini yozish
chart1->Series["Series2"]->YValueMembers = "Sof daromat";

chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
chart1->Series["Series2"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
chart1->Series["Series1"]->Color = Color::Aqua;
chart1->Series["Series2"]->Color = Color::Green;
//chart1->Series["Series1"]->IsVisibleInLegend = false;
chart1->DataBind();
dataGridView1->DataSource = Jadval; // DadaGridView1 komponentasiga Jadvalni eksport qilish
}


			 DataTable ^ Jadval;
private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {

			 chart1->Titles->Add("Oylar bo'yicha sotib olingan maxsulotlar soni va sof daromat");
listBox1->Items->Add("Pie"); // listBox1 ning Tetems hossasiga Pie so'zini yozish
listBox1->Items->Add("Line"); // listBox1 ning Tetems hossasiga Line so'zini yozish
this->Text = "Grafik ma'lumotlar";

Jadval = gcnew DataTable();
//Ushbu jadvalda 2 ta ustun "Oy"va "Sotib olingan //max.soni":
Jadval->Columns->Add("Oy", String::typeid);
// Â C#: Jadval.Columns.Add("Ìוסÿצ", //typeof(String));
//2-ustun bo'yicha ma'lumotlar long tipida bo'lasi:
Jadval->Columns->Add("Sotib olingan max.soni", Int64::typeid); 
Jadval->Columns->Add("Xarajatlar", Int64::typeid); 
Jadval->Columns->Add("Daromat", Int64::typeid); 
Jadval->Columns->Add("Sof daromat", Int64::typeid);
// Â C#: Jadval.Columns.Add("Îבתול ןנמהאז", typeof(long));
//Jadvalning 1- qatorini to'ldiramiz:
DataRow ^ Qator = Jadval->NewRow();
Qator["Oy"] = "May"; Qator["Sotib olingan max.soni"] =10; Qator["Xarajatlar"] =3; Qator["Daromat"] =15;  
Qator["Sof daromat"] =Convert::ToInt64(Qator["Daromat"])-Convert::ToInt64(Qator["Xarajatlar"]);
//Convert::ToInt64( dataGridView1->Rows[0]->Cells[0]->Value); 
Jadval->Rows->Add(Qator);
//Jadvalning 2- qatorini to'ldiramiz:
Qator = Jadval->NewRow();
Qator["Oy"] = "Iyun"; Qator["Sotib olingan max.soni"] = 20; Qator["Xarajatlar"] =5; Qator["Daromat"] =25;  
Qator["Sof daromat"] =Convert::ToInt64(Qator["Daromat"])-Convert::ToInt64(Qator["Xarajatlar"]);
Jadval->Rows->Add(Qator);
//3- qatorni qo'shamiz:
Qator = Jadval->NewRow();
Qator["Oy"] = "Iyul"; Qator["Sotib olingan max.soni"] = 30; Qator["Xarajatlar"] =10; Qator["Daromat"] =35;  
Qator["Sof daromat"] =Convert::ToInt64(Qator["Daromat"])-Convert::ToInt64(Qator["Xarajatlar"]);
Jadval->Rows->Add(Qator);
//4- qatorni qo'shamiz:
Qator = Jadval->NewRow();
Qator["Oy"] = "Avgust"; Qator["Sotib olingan max.soni"] = 40; Qator["Xarajatlar"] =15; Qator["Daromat"] =45;  
Qator["Sof daromat"] =Convert::ToInt64(Qator["Daromat"])-Convert::ToInt64(Qator["Xarajatlar"]);
Jadval->Rows->Add(Qator);
//5- qatorni qo'shamiz:
Qator = Jadval->NewRow();
Qator["Oy"] = "Sentyabr"; Qator["Sotib olingan max.soni"] = 50; Qator["Xarajatlar"] =20; Qator["Daromat"] =55;  
Qator["Sof daromat"] =Convert::ToInt64(Qator["Daromat"])-Convert::ToInt64(Qator["Xarajatlar"]);
Jadval->Rows->Add(Qator);
dataGridView1->DataSource = Jadval;
			chart1->DataSource = Jadval;			
chart1->Series["Series1"]->XValueMember = "Oy";
chart1->Series["Series2"]->XValueMember = "Oy";
chart1->Series["Series1"]->YValueMembers = "Sotib olingan max.soni";
chart1->Series["Series2"]->YValueMembers = "Sof daromat";
chart1->Series["Series1"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
chart1->Series["Series2"]->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Column;
// Diogrammaning turi quyidagicha bo'lishi ham //mumkin. masalan: Pie, Line va bohqa.
chart1->Series["Series1"]->Color = Color::Aqua; chart1->Series["Series2"]->Color = Color::Yellow;
chart1->DataBind();
		 
		 }

 private: System::Void listBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			  if (listBox1->Text == "Transparent") return;
this->chart1->Series["Series1"]->ChartTypeName =(listBox1->Text) ;
this->chart1->Series["Series2"]->ChartTypeName =(listBox1->Text) ; 

				  }
private: System::Void dataGridView1_CellEndEdit(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {

			 dio();
		 

}
};
}

