// MathCad_bilan_ishlash.cpp : main project file.

#include "stdafx.h"

using namespace System;
using namespace iTextSharp::text;
using namespace iTextSharp::text::pdf;

int main(array<System::String ^> ^args)
{
	// � ������� �������� ������� PDF-��������:
 Document ^ �������� = gcnew Document(); 
 PdfWriter::GetInstance(��������, gcnew System::IO::FileStream( 
 "�����.pdf", System::IO::FileMode::Create));
 ��������->Open();
 // ������� ����� �������, ��������� ���� �� ������� �� ����� Windows: 
 BaseFont ^ ������������ = BaseFont::CreateFont( 
 //"C:\\WINDOWS\\Fonts\\comic.ttf", "CP1251", BaseFont::EMBEDDED);

 //"C:\\WINDOWS\\Fonts\\times.ttf", "CP1251", BaseFont::EMBEDDED); 
 "C:\\WINDOWS\\Fonts\\CONSOLA.TTF", "CP1251", BaseFont::EMBEDDED); 
 // ������ ����� �������� 10 �������. ����� ������
 // ����� Font::ITALIC (���������) ��� Font::BOLD (������):
 Font ^ ����� = gcnew Font(������������, 10, Font::NORMAL); 
 ��������->Add(gcnew Paragraph(
 "������������ !\n �� ����������� C++ ?", �����)); 
 ��������->Close();
 // PDF-�������� ����� ������� � ������� ��������-��������:
 // System.Diagnostics.Process.Start("IExplore.exe", System.IO.
 // Directory.GetCurrentDirectory() + "\\�����.pdf"); 
 // PDF-�������� ����� ������� � ������� Adobe Acrobat,
 // ���� �� ����������: 
 System::Diagnostics::Process::Start("�����.pdf");

 //   Console::WriteLine(L"Hello World");
    return 0;
}
