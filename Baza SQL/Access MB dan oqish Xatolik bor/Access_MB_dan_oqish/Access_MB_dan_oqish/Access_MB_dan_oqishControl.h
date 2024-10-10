#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace Access_MB_dan_oqish {

	/// <summary>
	/// Summary for Access_MB_dan_oqishControl
	/// </summary>
	public ref class Access_MB_dan_oqishControl : public System::Windows::Forms::UserControl
	{
	public:
		Access_MB_dan_oqishControl(void)
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
		~Access_MB_dan_oqishControl()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->SuspendLayout();
			// 
			// Access_MB_dan_oqishControl
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Name = L"Access_MB_dan_oqishControl";
			this->Size = System::Drawing::Size(553, 430);
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
