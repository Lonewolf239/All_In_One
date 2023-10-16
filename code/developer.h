#pragma once
#include <iostream>
#include <Windows.h>

bool Language1 = true;

namespace solver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для developer
	/// </summary>
	public ref class developer : public System::Windows::Forms::Form
	{
	public:
		developer(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~developer()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;
	private: System::Windows::Forms::Panel^ panel1_1;

	protected: Point lastLocation;
	private: ToolTip^ g;



	private: bool exit_right = false;

	private: System::Windows::Forms::PictureBox^ exit_btn;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::PictureBox^ place_order_btn;
	private: System::Windows::Forms::PictureBox^ bug_report_btn;
	private: System::Windows::Forms::PictureBox^ github_btn;
	private: System::Windows::Forms::PictureBox^ tg_btn;




	private: System::Windows::Forms::Label^ name_prog1;
#pragma region Windows Form Designer generated code
		   /// <summary>
		   /// Требуемый метод для поддержки конструктора — не изменяйте 
		   /// содержимое этого метода с помощью редактора кода.
		   /// </summary>
		   void InitializeComponent(void)
		   {
			   System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(developer::typeid));
			   this->panel1_1 = (gcnew System::Windows::Forms::Panel());
			   this->exit_btn = (gcnew System::Windows::Forms::PictureBox());
			   this->name_prog1 = (gcnew System::Windows::Forms::Label());
			   this->panel1 = (gcnew System::Windows::Forms::Panel());
			   this->tg_btn = (gcnew System::Windows::Forms::PictureBox());
			   this->github_btn = (gcnew System::Windows::Forms::PictureBox());
			   this->bug_report_btn = (gcnew System::Windows::Forms::PictureBox());
			   this->place_order_btn = (gcnew System::Windows::Forms::PictureBox());
			   this->panel1_1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exit_btn))->BeginInit();
			   this->panel1->SuspendLayout();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tg_btn))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->github_btn))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bug_report_btn))->BeginInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->place_order_btn))->BeginInit();
			   this->SuspendLayout();
			   // 
			   // panel1_1
			   // 
			   this->panel1_1->BackColor = System::Drawing::Color::Black;
			   this->panel1_1->Controls->Add(this->exit_btn);
			   this->panel1_1->Controls->Add(this->name_prog1);
			   this->panel1_1->Location = System::Drawing::Point(0, 0);
			   this->panel1_1->Name = L"panel1_1";
			   this->panel1_1->Size = System::Drawing::Size(282, 25);
			   this->panel1_1->TabIndex = 0;
			   this->panel1_1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseDown);
			   this->panel1_1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseMove);
			   this->panel1_1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseUp);
			   // 
			   // exit_btn
			   // 
			   this->exit_btn->Dock = System::Windows::Forms::DockStyle::Right;
			   this->exit_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"exit_btn.Image")));
			   this->exit_btn->Location = System::Drawing::Point(257, 0);
			   this->exit_btn->Name = L"exit_btn";
			   this->exit_btn->Size = System::Drawing::Size(25, 25);
			   this->exit_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->exit_btn->TabIndex = 0;
			   this->exit_btn->TabStop = false;
			   this->exit_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::exit_btn_MouseClick);
			   this->exit_btn->MouseEnter += gcnew System::EventHandler(this, &developer::exit_btn_MouseEnter);
			   this->exit_btn->MouseLeave += gcnew System::EventHandler(this, &developer::exit_btn_MouseLeave);
			   // 
			   // name_prog1
			   // 
			   this->name_prog1->BackColor = System::Drawing::Color::Black;
			   this->name_prog1->Cursor = System::Windows::Forms::Cursors::Default;
			   this->name_prog1->Dock = System::Windows::Forms::DockStyle::Left;
			   this->name_prog1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				   static_cast<System::Byte>(204)));
			   this->name_prog1->ForeColor = System::Drawing::Color::White;
			   this->name_prog1->Location = System::Drawing::Point(0, 0);
			   this->name_prog1->Name = L"name_prog1";
			   this->name_prog1->Size = System::Drawing::Size(252, 25);
			   this->name_prog1->TabIndex = 0;
			   this->name_prog1->Text = L"О Разработчике:";
			   this->name_prog1->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			   this->name_prog1->UseCompatibleTextRendering = true;
			   this->name_prog1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseDown);
			   this->name_prog1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseMove);
			   this->name_prog1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::panel1_1_MouseUp);
			   // 
			   // panel1
			   // 
			   this->panel1->Controls->Add(this->tg_btn);
			   this->panel1->Controls->Add(this->github_btn);
			   this->panel1->Controls->Add(this->bug_report_btn);
			   this->panel1->Controls->Add(this->place_order_btn);
			   this->panel1->Location = System::Drawing::Point(0, 25);
			   this->panel1->Name = L"panel1";
			   this->panel1->Size = System::Drawing::Size(282, 286);
			   this->panel1->TabIndex = 1;
			   // 
			   // tg_btn
			   // 
			   this->tg_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"tg_btn.Image")));
			   this->tg_btn->Location = System::Drawing::Point(15, 209);
			   this->tg_btn->Margin = System::Windows::Forms::Padding(15, 3, 15, 15);
			   this->tg_btn->Name = L"tg_btn";
			   this->tg_btn->Size = System::Drawing::Size(252, 75);
			   this->tg_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->tg_btn->TabIndex = 0;
			   this->tg_btn->TabStop = false;
			   this->tg_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::tg_btn_MouseClick);
			   this->tg_btn->MouseEnter += gcnew System::EventHandler(this, &developer::tg_btn_MouseEnter);
			   this->tg_btn->MouseLeave += gcnew System::EventHandler(this, &developer::tg_btn_MouseLeave);
			   this->tg_btn->MouseHover += gcnew System::EventHandler(this, &developer::tg_btn_MouseHover);
			   // 
			   // github_btn
			   // 
			   this->github_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"github_btn.Image")));
			   this->github_btn->Location = System::Drawing::Point(15, 140);
			   this->github_btn->Margin = System::Windows::Forms::Padding(15, 3, 15, 5);
			   this->github_btn->Name = L"github_btn";
			   this->github_btn->Size = System::Drawing::Size(252, 75);
			   this->github_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->github_btn->TabIndex = 1;
			   this->github_btn->TabStop = false;
			   this->github_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::github_btn_MouseClick);
			   this->github_btn->MouseEnter += gcnew System::EventHandler(this, &developer::github_btn_MouseEnter);
			   this->github_btn->MouseLeave += gcnew System::EventHandler(this, &developer::github_btn_MouseLeave);
			   this->github_btn->MouseHover += gcnew System::EventHandler(this, &developer::github_btn_MouseHover);
			   // 
			   // bug_report_btn
			   // 
			   this->bug_report_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"bug_report_btn.Image")));
			   this->bug_report_btn->Location = System::Drawing::Point(15, 71);
			   this->bug_report_btn->Margin = System::Windows::Forms::Padding(15, 3, 15, 5);
			   this->bug_report_btn->Name = L"bug_report_btn";
			   this->bug_report_btn->Size = System::Drawing::Size(252, 75);
			   this->bug_report_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->bug_report_btn->TabIndex = 2;
			   this->bug_report_btn->TabStop = false;
			   this->bug_report_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::bug_report_btn_MouseClick);
			   this->bug_report_btn->MouseEnter += gcnew System::EventHandler(this, &developer::bug_report_btn_MouseEnter);
			   this->bug_report_btn->MouseLeave += gcnew System::EventHandler(this, &developer::bug_report_btn_MouseLeave);
			   this->bug_report_btn->MouseHover += gcnew System::EventHandler(this, &developer::bug_report_btn_MouseHover);
			   // 
			   // place_order_btn
			   // 
			   this->place_order_btn->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"place_order_btn.Image")));
			   this->place_order_btn->Location = System::Drawing::Point(15, 2);
			   this->place_order_btn->Margin = System::Windows::Forms::Padding(15, 3, 15, 5);
			   this->place_order_btn->Name = L"place_order_btn";
			   this->place_order_btn->Size = System::Drawing::Size(252, 75);
			   this->place_order_btn->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			   this->place_order_btn->TabIndex = 3;
			   this->place_order_btn->TabStop = false;
			   this->place_order_btn->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &developer::place_order_btn_MouseClick);
			   this->place_order_btn->MouseEnter += gcnew System::EventHandler(this, &developer::place_order_btn_MouseEnter);
			   this->place_order_btn->MouseLeave += gcnew System::EventHandler(this, &developer::place_order_btn_MouseLeave);
			   this->place_order_btn->MouseHover += gcnew System::EventHandler(this, &developer::place_order_btn_MouseHover);
			   // 
			   // developer
			   // 
			   this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			   this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			   this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(145)),
				   static_cast<System::Int32>(static_cast<System::Byte>(145)));
			   this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			   this->ClientSize = System::Drawing::Size(282, 311);
			   this->Controls->Add(this->panel1);
			   this->Controls->Add(this->panel1_1);
			   this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			   this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			   this->Name = L"developer";
			   this->ShowInTaskbar = false;
			   this->StartPosition = System::Windows::Forms::FormStartPosition::Manual;
			   this->Text = L"Программа \"Всё В Одном\"";
			   this->TopMost = true;
			   this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &developer::developer_FormClosing);
			   this->Load += gcnew System::EventHandler(this, &developer::developer_Load);
			   this->panel1_1->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->exit_btn))->EndInit();
			   this->panel1->ResumeLayout(false);
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tg_btn))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->github_btn))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->bug_report_btn))->EndInit();
			   (cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->place_order_btn))->EndInit();
			   this->ResumeLayout(false);

		   }
	private: System::Void git_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew System::Diagnostics::Process())->Start("https://github.com/Lonewolf239");
	}
	private: System::Void teg_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew System::Diagnostics::Process())->Start("https://t.me/+VLJzjVRg8ElkZWYy");
	}
	private: System::Void dis_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew System::Diagnostics::Process())->Start("https://t.me/Lonewolf239_OrderBOT");
	}
	private: System::Void exit_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->exit_btn->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void exit_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->exit_btn->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void developer_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (this->exit_right)
			PlaySound(MAKEINTRESOURCE(16), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
	}
	private: System::Void developer_Load(System::Object^ sender, System::EventArgs^ e) {
		LCID sysLocale = GetSystemDefaultLCID();
		char locale[3];
		GetLocaleInfoA(sysLocale, LOCALE_SISO639LANGNAME, locale, sizeof(locale));
		if (std::string(locale) == "ru" || std::string(locale) == "uk" || std::string(locale) == "be" || std::string(locale) == "kk" || std::string(locale) == "ky")
			Language1 = false;
		else {
			this->Text = L"Program \"All in One\"";
			this->name_prog1->Text = L"About the Developer:";
		}
		PlaySound(MAKEINTRESOURCE(15), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
	}
	private: System::Void panel1_1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			lastLocation = e->Location;
	}
	private: System::Void panel1_1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->name_prog1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->panel1_1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->Location = Point(
				this->Location.X + e->X - lastLocation.X,
				this->Location.Y + e->Y - lastLocation.Y);
		}
	}
	private: System::Void panel1_1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->panel1_1->Cursor = System::Windows::Forms::Cursors::Default;
		this->name_prog1->Cursor = System::Windows::Forms::Cursors::Default;
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew System::Diagnostics::Process())->Start("https://t.me/Lonewolf239_BugReportBOT");
	}
	private: System::Void exit_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			_form1_opened = false;
			this->exit_right = true;
			this->Close();
		}
	}
	private: System::Void tg_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			(gcnew System::Diagnostics::Process())->Start("https://t.me/+VLJzjVRg8ElkZWYy");
	}
	private: System::Void tg_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->tg_btn->Size = System::Drawing::Size(246, 69);
		this->tg_btn->Location = System::Drawing::Point(18, 213);
	}
	private: System::Void tg_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->tg_btn->Size = System::Drawing::Size(252, 75);
		this->tg_btn->Location = System::Drawing::Point(15, 209);
	}
	private: System::Void tg_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		delete g;
		g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::Info;
		if (!Language1) {
			g->ToolTipTitle = "Подсказка";
			g->SetToolTip(tg_btn, "Открыть Telegram разработчика");
		}
		else {
			g->ToolTipTitle = "Tip";
			g->SetToolTip(tg_btn, "Open developer's Telegram");
		}
	}
	private: System::Void github_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			(gcnew System::Diagnostics::Process())->Start("https://github.com/Lonewolf239");
	}
	private: System::Void github_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->github_btn->Size = System::Drawing::Size(246, 69);
		this->github_btn->Location = System::Drawing::Point(18, 144);
	}
	private: System::Void github_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->github_btn->Size = System::Drawing::Size(252, 75);
		this->github_btn->Location = System::Drawing::Point(15, 140);
	}
	private: System::Void github_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		delete g;
		g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::Info;
		if (!Language1) {
			g->ToolTipTitle = "Подсказка";
			g->SetToolTip(github_btn, "Открыть GitHub разработчика");
		}
		else {
			g->ToolTipTitle = "Tip";
			g->SetToolTip(github_btn, "Open GitHub developer");
		}
	}
	private: System::Void bug_report_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			(gcnew System::Diagnostics::Process())->Start("https://t.me/Lonewolf239_BugReportBOT");
	}
	private: System::Void bug_report_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->bug_report_btn->Size = System::Drawing::Size(246, 69);
		this->bug_report_btn->Location = System::Drawing::Point(18, 75);
	}
	private: System::Void bug_report_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		delete g;
		g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::Info;
		if (!Language1) {
			g->ToolTipTitle = "Подсказка";
			g->SetToolTip(bug_report_btn, "Сообщить об ошибках");
		}
		else {
			g->ToolTipTitle = "Tip";
			g->SetToolTip(bug_report_btn, "Report bugs");
		}
	}
	private: System::Void bug_report_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->bug_report_btn->Size = System::Drawing::Size(252, 75);
		this->bug_report_btn->Location = System::Drawing::Point(15, 71);
	}
	private: System::Void place_order_btn_MouseClick(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			(gcnew System::Diagnostics::Process())->Start("https://t.me/Lonewolf239_OrderBOT");
	}
	private: System::Void place_order_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->place_order_btn->Size = System::Drawing::Size(246, 69);
		this->place_order_btn->Location = System::Drawing::Point(18, 6);
	}
	private: System::Void place_order_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->place_order_btn->Size = System::Drawing::Size(252, 75);
		this->place_order_btn->Location = System::Drawing::Point(15, 2);
	}
	private: System::Void place_order_btn_MouseHover(System::Object^ sender, System::EventArgs^ e) {
		delete g;
		g = gcnew ToolTip();
		g->ToolTipIcon = ToolTipIcon::Info;
		if (!Language1) {
			g->ToolTipTitle = "Подсказка";
			g->SetToolTip(place_order_btn, "Оформить заказ");
		}
		else {
			g->ToolTipTitle = "Tip";
			g->SetToolTip(place_order_btn, "Place an order");
		}
	}
	};
}