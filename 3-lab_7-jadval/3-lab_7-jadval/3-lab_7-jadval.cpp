// 3-lab_7-jadval.cpp : main project file.

#include "stdafx.h"
#include "Form1.h"

using namespace My3lab_7jadval;

[STAThreadAttribute]
int main(array<System::String ^> ^args)
{
	// Enabling Windows XP visual effects before any controls are created
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false); 

	// Create the main window and run it
	Application::Run(gcnew Form1());
	return 0;
}
