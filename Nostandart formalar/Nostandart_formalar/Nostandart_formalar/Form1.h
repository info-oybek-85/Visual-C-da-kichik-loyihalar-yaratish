#pragma once

namespace Nostandart_formalar {

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
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(279, 33);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(135, 57);
			this->button1->TabIndex = 0;
			this->button1->Text = L"button1";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button1_MouseDown);
			this->button1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button1_MouseMove);
			this->button1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &Form1::button1_MouseUp);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(604, 369);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
		
 bool Перемещение;
 int MouseDownX;
 int MouseDownY;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 Перемещение = false;
			 }
			 	
private: System::Void button1_MouseDown(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
 
  if (e->Button == System::Windows::Forms:: 
 MouseButtons::Left)
 {
 Перемещение = true;
 MouseDownX = e->X;
 MouseDownY = e->Y;
 }
  			 }

private: System::Void button1_MouseUp(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
	if (e->Button == System::Windows::Forms:: 
 MouseButtons::Left) Перемещение = false;
		 }

private: System::Void button1_MouseMove(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
if (Перемещение == true)
 {
 auto Точка = System::Drawing::Point(); 
 Точка.X = this->button1->Location.X + (e->X - MouseDownX); 
 Точка.Y = this->button1->Location.Y + (e->Y - MouseDownY); 
 this->button1->Location = Точка;
 }
		 }
};
}

