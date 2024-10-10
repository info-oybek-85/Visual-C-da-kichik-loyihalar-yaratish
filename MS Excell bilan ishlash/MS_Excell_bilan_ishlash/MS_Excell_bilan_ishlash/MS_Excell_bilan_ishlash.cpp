// MS_Excell_bilan_ishlash.cpp : main project file.

#include "stdafx.h"
#include "iostream";

using namespace System;
using namespace Microsoft::Office::Interop::Excel;
using namespace std;
int main(array<System::String ^> ^args)
{
 double harajat[12], daromat[12], Sof_daromat[12], maxsulot_soni[12]; int n;
bir:Console::Write("Necha oylik daromatni hisoblamoqchisiz?");
std::cin>>n;
Console::WriteLine("Sotib olingan maxsulotlar sonini, harajat va daromatni oylar kesimida kiriting:");
if(n<=12){
for(int i=0;i<n;i++){
	if(i==0){Console::Write("Yanvar: ");}
	else if(i==1){Console::WriteLine("Febral: ");}
	else if(i==2){Console::WriteLine("Mart: ");}
	else if(i==3){Console::WriteLine("Aprel: ");}
	else if(i==4){Console::WriteLine("May: ");}
	else if(i==5){Console::WriteLine("Iyun: ");}
	else if(i==6){Console::WriteLine("Iyul: ");}
	else if(i==7){Console::WriteLine("Avgust: ");}
	else if(i==8){Console::WriteLine("Sentyabr: ");}
	else if(i==9){Console::WriteLine("Oktyabr: ");}
	else if(i==10){Console::WriteLine("Noyabr: ");}
	else if(i==11){Console::WriteLine("Dekabr: ");}
	Console::Write("Maxsulotlar soni: "); std::cin>>maxsulot_soni[i];
	Console::Write("Harajatlar soni: ");std::cin>>harajat[i];
	Console::Write("Daromatlar soni: ");std::cin>>daromat[i];
	Sof_daromat[i]= daromat[i]-harajat[i];
	if(i==n-1){
 //  Excel::Application  класидан нусха олиш:
_Application ^ XL1 = gcnew Application();
XL1->Visible = true;
// мавжуд методда кейинчалик фойдаланиш учун параметр бериш:
Object ^ t = Type::Missing;
// MS Excel да янги вароқ яратиш:
Workbook ^ Книга = XL1->Workbooks->Add(t);
// Вароқни файлда эълон қилиш:
Sheets ^ Листы = Книга->Worksheets;
// Биринчи листни танлаш:
_Worksheet ^ Лист = (_Worksheet ^)Листы->Item[1];
// Агар яна битта лист қўшишни керак бўлса қуйидаги кодни териш лозим:
// _Worksheet ^ Лист = safe_cast<_Worksheet^>(Листы->Item[ (Object^)1 ]);

//Маълумотларни жорий параметрлари билан диограмма яратишга буюртма бериш:
_Chart ^ График = (_Chart ^)XL1->Charts->Add(t, t, t, t);
	if(n>=1){
		Лист->Range["A1", t]->Value2 = "Oylar nomi"; Лист->Range["A2", t]->Value2 = "Yanvar"; 
	Лист->Range["B1", t]->Value2 = "Sotib olingan maxsulot soni"; Лист->Range["B2", t]->Value2 = maxsulot_soni[0];
	Лист->Range["C1", t]->Value2 = "Harajatlar"; Лист->Range["C2", t]->Value2 = harajat[0];
	Лист->Range["D1", t]->Value2 = "Daromatlar"; Лист->Range["D2", t]->Value2 = daromat[0];
	Лист->Range["E1", t]->Value2 = "Soft Daromatlar"; Лист->Range["E2", t]->Value2 = Sof_daromat[0];
	
	//Графика қуриш учун қийматлар диапазонини бериш:
	График->SetSourceData(Лист->Range["A2", "E2"], XlRowCol::xlColumns);
	}
	if(n>=2){Лист->Range["A3", t]->Value2 = "Febral"; Лист->Range["B3", t]->Value2 = maxsulot_soni[1];
	Лист->Range["C3", t]->Value2 = harajat[1];  Лист->Range["D3", t]->Value2 = daromat[1];
	Лист->Range["E3", t]->Value2 = Sof_daromat[1];
//Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E3"], XlRowCol::xlColumns);
	}
	if(n>=3){
	Лист->Range["A4", t]->Value2 = "Mart";	Лист->Range["B4", t]->Value2 = maxsulot_soni[2];
	Лист->Range["C4", t]->Value2 = harajat[2]; Лист->Range["D4", t]->Value2 = daromat[2];
	Лист->Range["E4", t]->Value2 = Sof_daromat[2];
	//Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E4"], XlRowCol::xlColumns);
	}
	if(n>=4){
	Лист->Range["A5", t]->Value2 = "Aprel"; Лист->Range["B5", t]->Value2 = maxsulot_soni[3];
	Лист->Range["C5", t]->Value2 = harajat[3]; Лист->Range["D5", t]->Value2 = daromat[3];
	Лист->Range["E5", t]->Value2 = Sof_daromat[3];
	//Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E5"], XlRowCol::xlColumns);
	}
    if(n>=5){
	Лист->Range["A6", t]->Value2 = "May"; Лист->Range["B6", t]->Value2 = maxsulot_soni[4];
    Лист->Range["C6", t]->Value2 = harajat[4]; Лист->Range["D6", t]->Value2 = daromat[4];
	Лист->Range["E6", t]->Value2 = Sof_daromat[4];
	//Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E6"], XlRowCol::xlColumns);
	}
	if(n>=6){
	Лист->Range["A7", t]->Value2 = "Iyun"; Лист->Range["B7", t]->Value2 = maxsulot_soni[5];
     Лист->Range["C7", t]->Value2 = harajat[5]; Лист->Range["D7", t]->Value2 = daromat[5];
	 Лист->Range["E7", t]->Value2 = Sof_daromat[5];
	 //Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E7"], XlRowCol::xlColumns);
	}
	if(n>=7){
	Лист->Range["A8", t]->Value2 = "Iyul"; Лист->Range["B8", t]->Value2 = maxsulot_soni[6];
	Лист->Range["C8", t]->Value2 = harajat[6]; Лист->Range["D8", t]->Value2 = daromat[6];
	Лист->Range["E8", t]->Value2 = Sof_daromat[6];
	//Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E8"], XlRowCol::xlColumns);
	}
	if(n>=8){
	Лист->Range["A9", t]->Value2 = "Avgust"; Лист->Range["B9", t]->Value2 = maxsulot_soni[7];
    Лист->Range["C9", t]->Value2 = harajat[7];  Лист->Range["D9", t]->Value2 = daromat[7];
	Лист->Range["E9", t]->Value2 = Sof_daromat[7];
	//Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E9"], XlRowCol::xlColumns);
	}
	if(n>=9){
	Лист->Range["A10", t]->Value2 = "Sentyabr"; Лист->Range["B10", t]->Value2 = maxsulot_soni[8];
    Лист->Range["C10", t]->Value2 = harajat[8]; Лист->Range["D10", t]->Value2 = daromat[8];
	Лист->Range["E10", t]->Value2 = Sof_daromat[8];
	//Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E10"], XlRowCol::xlColumns);
	}
	if(n>=10){
    Лист->Range["A11", t]->Value2 = "Oktyabr"; Лист->Range["B11", t]->Value2 = maxsulot_soni[9];
    Лист->Range["C11", t]->Value2 = harajat[9]; Лист->Range["D11", t]->Value2 = daromat[9];
	Лист->Range["E11", t]->Value2 = Sof_daromat[9];	
	//Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E11"], XlRowCol::xlColumns);
	}
	if(n>=11){
	Лист->Range["A12", t]->Value2 = "Noyabr"; Лист->Range["B12", t]->Value2 = maxsulot_soni[10];
	Лист->Range["C12", t]->Value2 = harajat[10]; Лист->Range["D12", t]->Value2 = daromat[10];
	Лист->Range["E12", t]->Value2 = Sof_daromat[10];
	//Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E12"], XlRowCol::xlColumns);
	}
    if(n==12){
		Лист->Range["A13", t]->Value2 = "Dekabr"; Лист->Range["B13", t]->Value2 = maxsulot_soni[11];
		Лист->Range["C13", t]->Value2 = harajat[11]; Лист->Range["D13", t]->Value2 = daromat[11];
        Лист->Range["E13", t]->Value2 = Sof_daromat[11];
		//Графика қуриш учун қийматлар диапазонини бериш:
График->SetSourceData(Лист->Range["A2", "E13"], XlRowCol::xlColumns);
	}
	//Графикни турини бериш("столбиковая диаграмма" (гистограмма)):
	График->ChartType = XlChartType::xlColumnClustered;
	//Графикни легандасини экранга чиқариш:
График->HasLegend = true;
// Графикнинг сарлавҳасини экранга чиқариш:
График->HasTitle = true;
График->ChartTitle->Caption = "Sotib olingan maxsulotlar harajatlari daromat va soft daromati  "+n.ToString()+" oylik korsatgichlari";
//  оси X бўйича имзо:
Axis ^ ГоризонтальнаяОсь = (Axis^)График->Axes(
XlAxisType::xlCategory, XlAxisGroup::xlPrimary);
ГоризонтальнаяОсь->HasTitle = true;
ГоризонтальнаяОсь->HasMajorGridlines=true;
ГоризонтальнаяОсь->AxisTitle->Text = "Oy nomlari";
//  оси Y бўйича имзо:
Axis ^ ВертикальнаяОсь = (Axis^)График->Axes(
XlAxisType::xlValue, XlAxisGroup::xlPrimary);
ВертикальнаяОсь->HasTitle = true;
ВертикальнаяОсь->AxisTitle->Text = "Ko`rsatgichlar";
//Графикни қуйидаги кенгайтмали файл кўринишида сақлаш:
 XL1->ActiveChart->Export("C:\\ExcelГрафик.jpg", t, t);
	}
    } 
       } else {Console::Write("1 yilda 12 oy bor boshqattan urunib ko`ring"); goto bir;}
return 0;  
}
