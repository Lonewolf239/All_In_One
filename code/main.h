#include "loading.h"
#include "developer.h"

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
	protected:



	private: System::Windows::Forms::Label^ exit_btn;
	private: System::Windows::Forms::Label^ hide_btn;
	private: System::Windows::Forms::Panel^ panel2_1;

	private: System::Windows::Forms::Label^ welcum_txt;
	private: System::Windows::Forms::CheckBox^ checkBox1;


	private: System::Windows::Forms::CheckBox^ checkBox3;
	private: System::Windows::Forms::CheckBox^ checkBox4;
	private: System::Windows::Forms::CheckBox^ checkBox2;
	private: System::Windows::Forms::Button^ start_btn1;
	private: System::Windows::Forms::Label^ orig_icon1;




	private: System::Windows::Forms::Panel^ orig2;
	private: System::Windows::Forms::Label^ orig1;
	private: System::Windows::Forms::Label^ l100_1;


	private: loading^ _form;
	private: developer^ _form1;
	private: System::Windows::Forms::Label^ icon_prog1;
	private: System::Windows::Forms::GroupBox^ groupBox1_1;
	private: System::Windows::Forms::Label^ quest_btn;
	private: System::Windows::Forms::Label^ name_prog1;
	private: System::ComponentModel::IContainer^ components;




	protected:

	private:


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->panel1_1 = (gcnew System::Windows::Forms::Panel());
			this->quest_btn = (gcnew System::Windows::Forms::Label());
			this->icon_prog1 = (gcnew System::Windows::Forms::Label());
			this->hide_btn = (gcnew System::Windows::Forms::Label());
			this->exit_btn = (gcnew System::Windows::Forms::Label());
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
			this->panel2_1->SuspendLayout();
			this->orig2->SuspendLayout();
			this->groupBox1_1->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1_1
			// 
			this->panel1_1->BackColor = System::Drawing::Color::Black;
			this->panel1_1->Controls->Add(this->quest_btn);
			this->panel1_1->Controls->Add(this->icon_prog1);
			this->panel1_1->Controls->Add(this->hide_btn);
			this->panel1_1->Controls->Add(this->exit_btn);
			this->panel1_1->Controls->Add(this->name_prog1);
			this->panel1_1->Location = System::Drawing::Point(0, 0);
			this->panel1_1->Name = L"panel1_1";
			this->panel1_1->Size = System::Drawing::Size(590, 30);
			this->panel1_1->TabIndex = 0;
			// 
			// quest_btn
			// 
			this->quest_btn->BackColor = System::Drawing::Color::Black;
			this->quest_btn->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->quest_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->quest_btn->ForeColor = System::Drawing::Color::Silver;
			this->quest_btn->Location = System::Drawing::Point(500, 0);
			this->quest_btn->Name = L"quest_btn";
			this->quest_btn->Size = System::Drawing::Size(30, 30);
			this->quest_btn->TabIndex = 4;
			this->quest_btn->Text = L"\?";
			this->quest_btn->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->quest_btn->Click += gcnew System::EventHandler(this, &main::label1_Click_1);
			this->quest_btn->MouseEnter += gcnew System::EventHandler(this, &main::label1_MouseEnter_1);
			this->quest_btn->MouseLeave += gcnew System::EventHandler(this, &main::label1_MouseLeave);
			this->quest_btn->MouseHover += gcnew System::EventHandler(this, &main::quest_btn_MouseHover);
			// 
			// icon_prog1
			// 
			this->icon_prog1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"icon_prog1.Image")));
			this->icon_prog1->Location = System::Drawing::Point(0, 0);
			this->icon_prog1->Name = L"icon_prog1";
			this->icon_prog1->Size = System::Drawing::Size(30, 30);
			this->icon_prog1->TabIndex = 3;
			// 
			// hide_btn
			// 
			this->hide_btn->BackColor = System::Drawing::Color::Black;
			this->hide_btn->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->hide_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 21.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->hide_btn->ForeColor = System::Drawing::Color::Silver;
			this->hide_btn->Location = System::Drawing::Point(530, 0);
			this->hide_btn->Name = L"hide_btn";
			this->hide_btn->Size = System::Drawing::Size(30, 30);
			this->hide_btn->TabIndex = 2;
			this->hide_btn->Text = L"—";
			this->hide_btn->Click += gcnew System::EventHandler(this, &main::hide_btn_Click);
			this->hide_btn->MouseEnter += gcnew System::EventHandler(this, &main::hide_btn_MouseEnter);
			this->hide_btn->MouseLeave += gcnew System::EventHandler(this, &main::hide_btn_MouseLeave);
			// 
			// exit_btn
			// 
			this->exit_btn->Cursor = System::Windows::Forms::Cursors::Default;
			this->exit_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_btn->ForeColor = System::Drawing::Color::Silver;
			this->exit_btn->Location = System::Drawing::Point(560, 0);
			this->exit_btn->Name = L"exit_btn";
			this->exit_btn->Size = System::Drawing::Size(30, 30);
			this->exit_btn->TabIndex = 1;
			this->exit_btn->Text = L"X";
			this->exit_btn->Click += gcnew System::EventHandler(this, &main::exit_btn_Click);
			this->exit_btn->MouseEnter += gcnew System::EventHandler(this, &main::exit_btn_MouseEnter);
			this->exit_btn->MouseLeave += gcnew System::EventHandler(this, &main::exit_btn_MouseLeave);
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
			this->name_prog1->Size = System::Drawing::Size(340, 29);
			this->name_prog1->TabIndex = 0;
			this->name_prog1->Text = L"Программа \"Всё В Одном\"";
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
			this->welcum_txt->Text = L"Глючит ПК\? Мало памяти\?\r\nРазбили монитор\? Мучает изжога\? \r\nРаздолбали клавиатуру\?"
				L"\r\nПролили пиво на системный блок\?\r\nПрограмма \"Всё В Одном\" исправит всё!\r\n";
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
			this->checkBox1->Text = L"Проверить наличие обновлений";
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
			this->checkBox3->Text = L"Очистить ПК от мусора";
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
			this->checkBox4->Text = L"Обновить Windows";
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
			this->checkBox2->Text = L"Отправить отчёт Microsoft";
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
			this->start_btn1->Text = L"Старт";
			this->start_btn1->UseVisualStyleBackColor = false;
			this->start_btn1->Click += gcnew System::EventHandler(this, &main::start_btn_Click);
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
			this->orig1->Text = L"Windows 10 Original";
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
			this->groupBox1_1->Text = L"Настройки:";
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
			this->Text = L"Программа \"Всё В Одном\"";
			this->panel1_1->ResumeLayout(false);
			this->panel1_1->PerformLayout();
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
	private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
	}
	private: System::Void hide_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		this->WindowState = FormWindowState::Minimized;
	}
	private: System::Void hide_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->hide_btn->BackColor = System::Drawing::Color::LightGray;
	}
	private: System::Void hide_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->hide_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		_form = gcnew loading;
		_form->Show();
		if (_form1)
			_form1->Close();
		this->ShowInTaskbar = false;
		this->Enabled = false;
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
	private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
		if (!_form1_opened) {
			_form1 = gcnew developer;
			_form1->Show();
			_form1_opened = true;
		}
	}
	private: System::Void label1_MouseEnter_1(System::Object^ sender, System::EventArgs^ e) {
		this->quest_btn->BackColor = System::Drawing::Color::LightGray;
	}
	private: System::Void label1_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->quest_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void quest_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		ToolTip^ g = gcnew ToolTip();
		g->SetToolTip(quest_btn, "О Разработчике");
	}
};
}