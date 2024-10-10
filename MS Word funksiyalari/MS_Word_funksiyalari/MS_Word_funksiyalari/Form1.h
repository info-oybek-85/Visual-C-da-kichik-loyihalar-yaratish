#pragma once
#include<fstream>

namespace MS_Word_funksiyalari {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Windows::Input;
	using namespace Microsoft;

	//using namespace  Microsoft::Office::Interop::Word;

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

	protected: 

	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;

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
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(12, 267);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(602, 47);
			this->button2->TabIndex = 2;
			this->button2->Text = L"button2";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(-1, -1);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(638, 262);
			this->webBrowser1->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(637, 320);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->button2);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		
button2->Text = "Wordga eksport qilish"; this->Text = "Jadvallar yaratish va Wordga eksport qilish";
			     String^s="<h1 align=\"center\">Oilam haqidagi ma`lumotlar<br><table border=\"1\"> ";
				 s+="<td>Nomeri<td>";
				 s+="<td>Qar_turi<td>";
				 s+="<td>Fam<td>";
				 s+="<td>Ismi<td>";
				 s+="<td>Tel nomeri<td>";
				 char qar_turi[20]="";
				 char Ismi[20]="";
				 char Fam[20]="";
				 char Tel[20]="";
				 String^ss=""; 
	// файллар билан ишлаш оқими
            //файлдаги маълумотларни ўзлаштириш учун 4 та char туридаги массив эълон қилиш
				  FILE *oqi;
				  int i=1,n;
				  bool dd;
				  oqi=fopen("C:\\word.txt","r"); // файлга йўл кўрсатиш
				  if(oqi==NULL){MessageBox::Show("Файл топилмади");}
				  while(!feof(oqi)){
					  // Матнли файлдан маълумотларни ўзлаштириш
					  fgets(qar_turi,20,oqi);
				   fgets(Fam,20,oqi);
				  fgets(Ismi,20,oqi);
				  dd=fgets(Tel,20,oqi);
				  if(dd==0){break;} // Матнли файлда оҳирги маълумотни аниқлаш
				  // char туридан Stting турига ўтказиш
				  String^ Fq=gcnew String(qar_turi);
				  String^ Fi=gcnew String(Ismi);
				  String^ Fm=gcnew String(Fam);
				  String^ Ft=gcnew String(Tel);
				  // s ўзгарувчисига ўзлаштириш
			s+="<tr><td>"+i.ToString()+"<td>";
			s+="<td>"+Fq+"<td>";
			s+="<td>"+Fm+"<td>";
			s+="<td>"+Fi+"<td>";
			s+="<td>"+Ft+"<td>";
			//s+="<td>564-29-25<td>";
			i++;
		}
		s+="</table> ";
		webBrowser1->Navigate("about:" + s);

			 
			 }
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
				
			 }
	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
// 4 та сатрли массив эълон килиш
array<String^> ^ Fi={"Ismi","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",};
array<String^> ^ Ff={"Familiyasi","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",};
array<String^> ^ Ft={"Telefoni","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",};
array<String^> ^ Fq={"Qarin_turi","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","","",};

  FILE *oqi; // файллар билан ишлаш оқими
            //файлдаги маълумотларни ўзлаштириш учун 4 та char туридаги массив эълон қилиш
                 char qar_turi[20]="";
				 char Ismi[20]="";
				 char Fam[20]="";
				 char Tel2[20]="";
                 int i=1,n;
				  bool dd;
				  oqi=fopen("C:\\word.txt","r"); // файлга йўл кўрсатиш
				  if(oqi==NULL){MessageBox::Show("Файл топилмади");}
				  while(!feof(oqi)){
					  // Матнли файлдан маълумотларни ўзлаштириш
					   fgets(qar_turi,20,oqi);
				       fgets(Fam,20,oqi);
				       fgets(Ismi,20,oqi);
				       dd=fgets(Tel2,20,oqi);

					   if(dd==0){break;}// Матнли файлда оҳирги маълумотни аниқлаш
					   // char туридан Stting турига ўтказиш 
					    // ва массив элементларига ўзлаштириш
					  Fq-> SetValue(gcnew String(qar_turi),i);
					  Ff-> SetValue(gcnew String(Fam),i);
					  Fi-> SetValue(gcnew String(Ismi),i);
					  Ft-> SetValue(gcnew String(Tel2),i);
				  i++;
				  }
// Word::_Application синфи нусҳасини яратиш:
auto Ворд1 =
gcnew Microsoft::Office::Interop::Word::Application();
Ворд1->Visible = true;
// "бўш" қийматли ўзгарувчи:
auto t = Type::Missing;
// Яеги MS Word хужжат очиш:
auto Документ = Ворд1->Documents->Add(t, t, t, t);
// MS WORD хужжатига жорий холати билан матнлар киритиш:
Ворд1->Selection->TypeText("Oilam haqida ma'lumotlar");
// Катакчалар параметри ва уларни чегараларини кўрсатиш:
System::Object ^ t1 = Microsoft::Office::Interop::
Word::WdDefaultTableBehavior::wdWord9TableBehavior;
// Параметр, указывающий будет ли приложение Word автоматически
//Жадвалдаги катакчалар ўлчамини ўзгартириш:
System::Object ^ t2 = Microsoft::Office::Interop::
Word::WdAutoFitBehavior::wdAutoFitContent;
// i та сатр ва 5 та устунли жадвал яратиш:
Ворд1->ActiveDocument->Tables->Add(Ворд1->Selection->Range,
i, 5, t1, t2);  int ii=i;
// Жадвал катакчаларини тўлдириш:
for (int i = 1; i <= ii; i++)
{
	if(i>=2)Ворд1->ActiveDocument->Tables[1]->Cell(i, 1)->default->InsertAfter((i-1).ToString());
Ворд1->ActiveDocument->Tables[1]->Cell(i, 2)->
	default->InsertAfter(Fq[i - 1]);
Ворд1->ActiveDocument->Tables[1]->Cell(i, 3)->
	default->InsertAfter(Ff[i - 1]);
Ворд1->ActiveDocument->Tables[1]->Cell(i, 4)->
	default->InsertAfter(Fi[i - 1]);
Ворд1->ActiveDocument->Tables[1]->Cell(i, 5)->
	default->InsertAfter(Ft[i - 1]);
// C# тилида, қуйидагича ёзилади:
// Ворд1.ActiveDocument.Tables[1].Cell(i, 2).
// Range.InsertAfter(Tel[i - 1]);
}
// MS Word хужжатлари иловаларини белгилаш:
Object ^ t3 = Microsoft::Office::Interop::Word::WdUnits::wdLine;
//MS Word хужжатига i та сатрни аниылаш :
Object ^ строка9 = i;
Ворд1->Selection->MoveDown(t3, строка9, t);
// Қуйидаги матнни чоп қилиш:
Ворд1->Selection->TypeText("Kafedra mudiri                        Sh.A. Sadullayeva");
// Хужжатни автоматик сақлаш, лекин буни фойдаланувчи ҳал қилгани мақул:
 Object ^ ИмяФайла = "C:\\Natija.doc";
 Ворд1->ActiveDocument->SaveAs(ИмяФайла, t, t, t, t, t, t, t, t, t, t, t, t, t, t, t);
				 
			 }
};
}

