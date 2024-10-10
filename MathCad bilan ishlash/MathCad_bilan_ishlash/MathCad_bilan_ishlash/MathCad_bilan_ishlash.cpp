// MathCad_bilan_ishlash.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace iTextSharp::text;
using namespace iTextSharp::text::pdf;

int main(array<System::String ^> ^args)
{
	// В текущем каталоге создаем PDF-документ:
 Document ^ Документ = gcnew Document(); 
 PdfWriter::GetInstance(Документ, gcnew System::IO::FileStream( 
 "Отчет.pdf", System::IO::FileMode::Create));
 Документ->Open();
 // Базовый шрифт создаем, используя один из шрифтов из папки Windows: 
 BaseFont ^ БазовыйШрифт = BaseFont::CreateFont( 
 //"C:\\WINDOWS\\Fonts\\comic.ttf", "CP1251", BaseFont::EMBEDDED);

 //"C:\\WINDOWS\\Fonts\\times.ttf", "CP1251", BaseFont::EMBEDDED); 
 "C:\\WINDOWS\\Fonts\\CONSOLA.TTF", "CP1251", BaseFont::EMBEDDED); 
 // Задаем шрифт размером 10 пунктов. Можно задать
 // шрифт Font::ITALIC (наклонный) или Font::BOLD (жирный):
 Font ^ Шрифт = gcnew Font(БазовыйШрифт, 10, Font::NORMAL); 
 Документ->Add(gcnew Paragraph(
 "Здравствуйте !\n Вы увлекаетесь C++ ?", Шрифт)); 
 Документ->Close();
 // PDF-документ можно открыть с помощью интернет-браузера:
 // System.Diagnostics.Process.Start("IExplore.exe", System.IO.
 // Directory.GetCurrentDirectory() + "\\Отчет.pdf"); 
 // PDF-документ можно открыть с помощью Adobe Acrobat,
 // если он установлен: 
 System::Diagnostics::Process::Start("Отчет.pdf");

 //   Console::WriteLine(L"Hello World");
    return 0;
}
