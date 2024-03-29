#pragma once
#include <iostream>
#include <Windows.h>

namespace solver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� baner
	/// </summary>
	public ref class baner : public System::Windows::Forms::Form
	{
	public:
		baner(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~baner()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Timer^ timer1;
	private: System::ComponentModel::IContainer^ components;
	private: int stat = 0, num = 0;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: bool loading = true;
	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(baner::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Dock = System::Windows::Forms::DockStyle::Left;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 36, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(435, 55);
			this->label1->TabIndex = 0;
			this->label1->Text = L"�������� �������";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label1->UseWaitCursor = true;
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &baner::timer1_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Dock = System::Windows::Forms::DockStyle::Right;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(419, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(69, 55);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->UseWaitCursor = true;
			// 
			// baner
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(488, 55);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Hand;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"baner";
			this->ShowIcon = false;
			this->ShowInTaskbar = false;
			this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			this->TopMost = true;
			this->Load += gcnew System::EventHandler(this, &baner::baner_Load);
			this->Click += gcnew System::EventHandler(this, &baner::baner_Click);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void baner_Load(System::Object^ sender, System::EventArgs^ e) {
		LCID sysLocale = GetSystemDefaultLCID();
		char locale[3];
		GetLocaleInfoA(sysLocale, LOCALE_SISO639LANGNAME, locale, sizeof(locale));
		if (!(std::string(locale) == "ru" || std::string(locale) == "uk" || std::string(locale) == "be" || std::string(locale) == "kk" || std::string(locale) == "ky")) {
			this->ClientSize = System::Drawing::Size(420, 55);
			this->label1->Text = L"Loading banner";
		}
		this->timer1->Start();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->loading && stat == 46) {
			this->label1->Hide();
			this->pictureBox1->Hide();
			int screenW = GetSystemMetrics(SM_CXSCREEN);
			this->ClientSize = System::Drawing::Size(screenW, 125);
			this->timer1->Stop();
		}
		this->stat++;
	}
	private: System::Void baner_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew System::Diagnostics::Process())->Start("https://www.maledigital.com/en/?s=1");
	}
	};
}