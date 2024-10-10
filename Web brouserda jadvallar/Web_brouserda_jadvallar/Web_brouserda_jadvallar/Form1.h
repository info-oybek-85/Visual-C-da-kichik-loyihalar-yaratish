#pragma once
#include<string.h>
#include<fstream>
namespace Web_brouserda_jadvallar {

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

	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::WebBrowser^  webBrowser1;
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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->webBrowser1 = (gcnew System::Windows::Forms::WebBrowser());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(27, 332);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Кидириш";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(12, 24);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(140, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Form1::textBox1_KeyDown);
			// 
			// webBrowser1
			// 
			this->webBrowser1->Location = System::Drawing::Point(158, -2);
			this->webBrowser1->MinimumSize = System::Drawing::Size(20, 20);
			this->webBrowser1->Name = L"webBrowser1";
			this->webBrowser1->Size = System::Drawing::Size(490, 374);
			this->webBrowser1->TabIndex = 3;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(646, 370);
			this->Controls->Add(this->webBrowser1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"webBrowser компонетасининг ишлатилиши ";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
       
				 String^s="<h1 align=\"center\">Oilam haqi ma`lumot<br><table border=\"1\"> ";
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
	
				  FILE *oqi;
				  int i=1,n;
				  bool dd;
				  oqi=fopen("C:\\word.txt","r");
				  if(oqi==NULL){MessageBox::Show("Not found");}
				  while(!feof(oqi)){
					  fgets(qar_turi,20,oqi);
				   fgets(Fam,20,oqi);
				  fgets(Ismi,20,oqi);
				  dd=fgets(Tel,20,oqi);
				  if(dd==0){break;}
				  String^ Fq=gcnew String(qar_turi);
				  String^ Fi=gcnew String(Ismi);
				  String^ Fm=gcnew String(Fam);
				  String^ Ft=gcnew String(Tel);
				  
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
				 if (  !this->textBox1->Text->Equals( "" ) )
   {
      this->webBrowser1->Navigate( this->textBox1->Text );
   }
     
			 }
	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
				  if ( e->KeyCode == System::Windows::Forms::Keys::Enter &&  !this->textBox1->Text->Equals( "" ) )
   {
	   this->webBrowser1->Navigate( this->textBox1->Text );
   }

			 }
private: System::Void webBrowser1_Navigated(System::Object^  sender, System::Windows::Forms::WebBrowserNavigatedEventArgs^  e) {

			 this->textBox1->Text = this->webBrowser1->Url->ToString();
		 }
};
}

