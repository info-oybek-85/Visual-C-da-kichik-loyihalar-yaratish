#pragma once

namespace Window_Media_Player {

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
	private: AxWMPLib::AxWindowsMediaPlayer^  axWindowsMediaPlayer1;
	protected: 
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  faylToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ochishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  yopishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  servisToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ekranBoylabToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  tuxtatishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  boshlashToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ovoziniOchirishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  ovoziniYoqishToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  xossasiToolStripMenuItem;

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->axWindowsMediaPlayer1 = (gcnew AxWMPLib::AxWindowsMediaPlayer());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->faylToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ochishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->yopishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->servisToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ekranBoylabToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->tuxtatishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->boshlashToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ovoziniOchirishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ovoziniYoqishToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->xossasiToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axWindowsMediaPlayer1))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// axWindowsMediaPlayer1
			// 
			this->axWindowsMediaPlayer1->Enabled = true;
			this->axWindowsMediaPlayer1->Location = System::Drawing::Point(3, 27);
			this->axWindowsMediaPlayer1->Name = L"axWindowsMediaPlayer1";
			this->axWindowsMediaPlayer1->OcxState = (cli::safe_cast<System::Windows::Forms::AxHost::State^  >(resources->GetObject(L"axWindowsMediaPlayer1.OcxState")));
			this->axWindowsMediaPlayer1->Size = System::Drawing::Size(586, 356);
			this->axWindowsMediaPlayer1->TabIndex = 0;
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->faylToolStripMenuItem, 
				this->servisToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(644, 24);
			this->menuStrip1->TabIndex = 1;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// faylToolStripMenuItem
			// 
			this->faylToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->ochishToolStripMenuItem, 
				this->yopishToolStripMenuItem});
			this->faylToolStripMenuItem->Name = L"faylToolStripMenuItem";
			this->faylToolStripMenuItem->Size = System::Drawing::Size(40, 20);
			this->faylToolStripMenuItem->Text = L"Fayl";
			// 
			// ochishToolStripMenuItem
			// 
			this->ochishToolStripMenuItem->Name = L"ochishToolStripMenuItem";
			this->ochishToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->ochishToolStripMenuItem->Text = L"Ochish";
			this->ochishToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ochishToolStripMenuItem_Click);
			// 
			// yopishToolStripMenuItem
			// 
			this->yopishToolStripMenuItem->Name = L"yopishToolStripMenuItem";
			this->yopishToolStripMenuItem->Size = System::Drawing::Size(114, 22);
			this->yopishToolStripMenuItem->Text = L"Chiqish";
			this->yopishToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::yopishToolStripMenuItem_Click);
			// 
			// servisToolStripMenuItem
			// 
			this->servisToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {this->ekranBoylabToolStripMenuItem, 
				this->tuxtatishToolStripMenuItem, this->boshlashToolStripMenuItem, this->ovoziniOchirishToolStripMenuItem, this->ovoziniYoqishToolStripMenuItem, 
				this->xossasiToolStripMenuItem});
			this->servisToolStripMenuItem->Name = L"servisToolStripMenuItem";
			this->servisToolStripMenuItem->Size = System::Drawing::Size(49, 20);
			this->servisToolStripMenuItem->Text = L"Servis";
			// 
			// ekranBoylabToolStripMenuItem
			// 
			this->ekranBoylabToolStripMenuItem->Name = L"ekranBoylabToolStripMenuItem";
			this->ekranBoylabToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->ekranBoylabToolStripMenuItem->Text = L"Ekran boylab";
			this->ekranBoylabToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ekranBoylabToolStripMenuItem_Click);
			// 
			// tuxtatishToolStripMenuItem
			// 
			this->tuxtatishToolStripMenuItem->Name = L"tuxtatishToolStripMenuItem";
			this->tuxtatishToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->tuxtatishToolStripMenuItem->Text = L"To\'xtatish";
			this->tuxtatishToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::tuxtatishToolStripMenuItem_Click);
			// 
			// boshlashToolStripMenuItem
			// 
			this->boshlashToolStripMenuItem->Name = L"boshlashToolStripMenuItem";
			this->boshlashToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->boshlashToolStripMenuItem->Text = L"Boshlash";
			this->boshlashToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::boshlashToolStripMenuItem_Click);
			// 
			// ovoziniOchirishToolStripMenuItem
			// 
			this->ovoziniOchirishToolStripMenuItem->Name = L"ovoziniOchirishToolStripMenuItem";
			this->ovoziniOchirishToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->ovoziniOchirishToolStripMenuItem->Text = L"Ovozini o\'chirish";
			this->ovoziniOchirishToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ovoziniOchirishToolStripMenuItem_Click);
			// 
			// ovoziniYoqishToolStripMenuItem
			// 
			this->ovoziniYoqishToolStripMenuItem->Name = L"ovoziniYoqishToolStripMenuItem";
			this->ovoziniYoqishToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->ovoziniYoqishToolStripMenuItem->Text = L"Ovozini yoqish";
			this->ovoziniYoqishToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::ovoziniYoqishToolStripMenuItem_Click);
			// 
			// xossasiToolStripMenuItem
			// 
			this->xossasiToolStripMenuItem->Name = L"xossasiToolStripMenuItem";
			this->xossasiToolStripMenuItem->Size = System::Drawing::Size(162, 22);
			this->xossasiToolStripMenuItem->Text = L"Xossasi";
			this->xossasiToolStripMenuItem->Click += gcnew System::EventHandler(this, &Form1::xossasiToolStripMenuItem_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(644, 421);
			this->Controls->Add(this->axWindowsMediaPlayer1);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->axWindowsMediaPlayer1))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
				 OpenFileDialog ^ openFileDialog1;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
				 openFileDialog1 = gcnew OpenFileDialog();
 //  ПЛЕЕРни версияси
 this->Text = "Windows Media Player, версия = " + 
 axWindowsMediaPlayer1->versionInfo;
			 }
private: System::Void ochishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 // ПУНКТ МЕНЮСИ 
 // фОЙДАЛАНУВЧИ ФАЙЛНИ ТАНЛАЙДИ : 
 openFileDialog1->ShowDialog();
 // ФАЙЛНИНГ НОМИНИ ПОЛЕЕРГА ЖЎНАТИШ
 axWindowsMediaPlayer1->URL = openFileDialog1->FileName; 
 // axWindowsMediaPlayer1->URL = "C:\\WINDOWS\\Media\\tada.wav"; 
 // файла ФАЙЛНИ ЮКЛАШ КОМАНДАСИ
 axWindowsMediaPlayer1->Ctlcontrols->play();
 // axWindowsMediaPlayer1->openPlayer(openFileDialog1->FileName);
		 }
private: System::Void yopishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {

			 // КИРИШ МЕНЮ бўлими 
 Application::Exit();
		 }
private: System::Void ekranBoylabToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Экран бўйлаб МЕНЮ бўоими.
 if (axWindowsMediaPlayer1->playState == 
 WMPLib::WMPPlayState::wmppsPlaying) 
 axWindowsMediaPlayer1->fullScreen = true;
		 }
private: System::Void tuxtatishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Тўхтатиш МЕНЮ бўлими 
 axWindowsMediaPlayer1->Ctlcontrols->pause();
		 }
private: System::Void boshlashToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Бошлаш МЕНЮ бўлими
 axWindowsMediaPlayer1->Ctlcontrols->play();
		 }
private: System::Void ovoziniOchirishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Овозни ёқиш МЕНЮ бўлими 
 axWindowsMediaPlayer1->settings->mute = true;
		 }
private: System::Void ovoziniYoqishToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Овозни ўчириш МЕНЮ бўлими
 axWindowsMediaPlayer1->settings->mute = false;
		 }
private: System::Void xossasiToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
			 // Файл хоссаси МЕНЮ бўлими
 axWindowsMediaPlayer1->ShowPropertyPages();
		 }
};
}

