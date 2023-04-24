#include <windows.h>
#include <stdlib.h>
#include <winbase.h>
#include "hacking.h"
#include <Lmcons.h>
#pragma comment(lib, "user32") 
#pragma comment(lib, "Advapi32")
#pragma comment(lib, "winmm")

TCHAR username[UNLEN + 1];
DWORD size = UNLEN + 1;
POINT p;

namespace solver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для loading
	/// </summary>
	public ref class loading : public System::Windows::Forms::Form {
	public:
		loading(void) {
			InitializeComponent();
		}

	private:
		//
		//TODO: добавьте код конструктора
		//
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~loading() {
			if (components) {
				delete components;
			}
		}
	private: System::Void FormCancel(System::Object^ sender, FormClosingEventArgs^ e) {
		//Тут выполняется код, который нужно выполнять при нажатие на крестик
	}
	private: System::Windows::Forms::Panel^ panel1_2;

	private: System::Windows::Forms::Button^ button_resh;
	private: System::Windows::Forms::Button^ button_zvd;
	private: System::Windows::Forms::Button^ button0;
	private: System::Windows::Forms::Button^ button9;
	private: System::Windows::Forms::Button^ button8;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: hacking^ _form1;
	private:int screenW, screenH;
	private: int x1, y1, x2, y2, x3, y3, x6, y6, x8, y8, x9, y9, x0, y0, xresh, yresh;
	private: bool other = false;
	protected: Point lastLocation;
	private: System::Windows::Forms::Label^ number;
	private: System::Windows::Forms::Panel^ panel2_2;

	private: System::Windows::Forms::Panel^ panel3_2;

	private: System::Windows::Forms::Label^ sing_txt;
	private: System::Windows::Forms::Label^ conect_txt;
	private: int sec = 0, sec1 = 0, num_did = 0, sexs = 0, n = 0, s = 0;
	private: bool cycle = false;
	private: bool done = false;
	private: bool pas_done = false;
	private: bool canc_did = false;
	private:bool now_loading = true;
	private: System::Windows::Forms::Timer^ timer1_2;
	private: System::Windows::Forms::Timer^ timer2_2;


	private: System::Windows::Forms::Label^ log_txt;
	private: bool tim = false, tim1 = false, start_modem = false;
	private: System::Windows::Forms::Timer^ timer3_2;

	private: System::Windows::Forms::Label^ pas_txt;
	private: System::Windows::Forms::Label^ label1_2;

	private: System::Windows::Forms::Button^ canc1;
	private: System::Windows::Forms::Button^ canc2;
	private: System::Windows::Forms::Label^ label2_2;
	private: System::Windows::Forms::Timer^ timer4_2;	private: System::Windows::Forms::Panel^ panel4_2;


	private: System::Windows::Forms::Label^ label4_2;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Timer^ timer5_2;

	private: System::ComponentModel::IContainer^ components;


	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void) {
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loading::typeid));
			this->panel1_2 = (gcnew System::Windows::Forms::Panel());
			this->panel2_2 = (gcnew System::Windows::Forms::Panel());
			this->number = (gcnew System::Windows::Forms::Label());
			this->button_resh = (gcnew System::Windows::Forms::Button());
			this->button_zvd = (gcnew System::Windows::Forms::Button());
			this->button0 = (gcnew System::Windows::Forms::Button());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1_2 = (gcnew System::Windows::Forms::Label());
			this->panel3_2 = (gcnew System::Windows::Forms::Panel());
			this->pas_txt = (gcnew System::Windows::Forms::Label());
			this->log_txt = (gcnew System::Windows::Forms::Label());
			this->sing_txt = (gcnew System::Windows::Forms::Label());
			this->conect_txt = (gcnew System::Windows::Forms::Label());
			this->timer1_2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2_2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3_2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->canc1 = (gcnew System::Windows::Forms::Button());
			this->canc2 = (gcnew System::Windows::Forms::Button());
			this->label2_2 = (gcnew System::Windows::Forms::Label());
			this->timer4_2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel4_2 = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4_2 = (gcnew System::Windows::Forms::Label());
			this->timer5_2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->panel1_2->SuspendLayout();
			this->panel2_2->SuspendLayout();
			this->panel3_2->SuspendLayout();
			this->panel4_2->SuspendLayout();
			this->SuspendLayout();
			// 
			// panel1_2
			// 
			this->panel1_2->Controls->Add(this->panel2_2);
			this->panel1_2->Controls->Add(this->button_resh);
			this->panel1_2->Controls->Add(this->button_zvd);
			this->panel1_2->Controls->Add(this->button0);
			this->panel1_2->Controls->Add(this->button9);
			this->panel1_2->Controls->Add(this->button8);
			this->panel1_2->Controls->Add(this->button7);
			this->panel1_2->Controls->Add(this->button6);
			this->panel1_2->Controls->Add(this->button5);
			this->panel1_2->Controls->Add(this->button4);
			this->panel1_2->Controls->Add(this->button3);
			this->panel1_2->Controls->Add(this->button2);
			this->panel1_2->Controls->Add(this->button1);
			this->panel1_2->Location = System::Drawing::Point(220, 10);
			this->panel1_2->Name = L"panel1_2";
			this->panel1_2->Size = System::Drawing::Size(161, 210);
			this->panel1_2->TabIndex = 0;
			// 
			// panel2_2
			// 
			this->panel2_2->BackColor = System::Drawing::Color::Black;
			this->panel2_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel2_2->Controls->Add(this->number);
			this->panel2_2->Location = System::Drawing::Point(6, 10);
			this->panel2_2->Name = L"panel2_2";
			this->panel2_2->Size = System::Drawing::Size(150, 40);
			this->panel2_2->TabIndex = 1;
			// 
			// number
			// 
			this->number->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->number->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->number->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->number->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->number->Location = System::Drawing::Point(0, 0);
			this->number->Name = L"number";
			this->number->Size = System::Drawing::Size(150, 40);
			this->number->TabIndex = 0;
			this->number->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// button_resh
			// 
			this->button_resh->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_resh->Location = System::Drawing::Point(120, 176);
			this->button_resh->Name = L"button_resh";
			this->button_resh->Size = System::Drawing::Size(35, 35);
			this->button_resh->TabIndex = 12;
			this->button_resh->Text = L"#";
			this->button_resh->UseVisualStyleBackColor = true;
			this->button_resh->Click += gcnew System::EventHandler(this, &loading::button_resh_Click);
			// 
			// button_zvd
			// 
			this->button_zvd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button_zvd->Location = System::Drawing::Point(38, 176);
			this->button_zvd->Name = L"button_zvd";
			this->button_zvd->Size = System::Drawing::Size(35, 35);
			this->button_zvd->TabIndex = 11;
			this->button_zvd->Text = L"*";
			this->button_zvd->UseVisualStyleBackColor = true;
			// 
			// button0
			// 
			this->button0->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button0->Location = System::Drawing::Point(79, 176);
			this->button0->Name = L"button0";
			this->button0->Size = System::Drawing::Size(35, 35);
			this->button0->TabIndex = 10;
			this->button0->Text = L"0";
			this->button0->UseVisualStyleBackColor = true;
			// 
			// button9
			// 
			this->button9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button9->Location = System::Drawing::Point(120, 135);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(35, 35);
			this->button9->TabIndex = 9;
			this->button9->Text = L"9";
			this->button9->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button8->Location = System::Drawing::Point(79, 135);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(35, 35);
			this->button8->TabIndex = 8;
			this->button8->Text = L"8";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// button7
			// 
			this->button7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button7->Location = System::Drawing::Point(38, 135);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(35, 35);
			this->button7->TabIndex = 7;
			this->button7->Text = L"7";
			this->button7->UseVisualStyleBackColor = true;
			// 
			// button6
			// 
			this->button6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Location = System::Drawing::Point(120, 94);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(35, 35);
			this->button6->TabIndex = 6;
			this->button6->Text = L"6";
			this->button6->UseVisualStyleBackColor = true;
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Location = System::Drawing::Point(79, 94);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(35, 35);
			this->button5->TabIndex = 5;
			this->button5->Text = L"5";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(38, 94);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(35, 35);
			this->button4->TabIndex = 4;
			this->button4->Text = L"4";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(120, 53);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(35, 35);
			this->button3->TabIndex = 3;
			this->button3->Text = L"3";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(79, 53);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 35);
			this->button2->TabIndex = 2;
			this->button2->Text = L"2";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(38, 53);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 35);
			this->button1->TabIndex = 1;
			this->button1->Text = L"1";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// label1_2
			// 
			this->label1_2->BackColor = System::Drawing::Color::Black;
			this->label1_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label1_2.Image")));
			this->label1_2->Location = System::Drawing::Point(0, 0);
			this->label1_2->Name = L"label1_2";
			this->label1_2->Size = System::Drawing::Size(390, 270);
			this->label1_2->TabIndex = 2;
			this->label1_2->Visible = false;
			this->label1_2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseDown);
			this->label1_2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseMove);
			this->label1_2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseUp);
			// 
			// panel3_2
			// 
			this->panel3_2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->panel3_2->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->panel3_2->Controls->Add(this->pas_txt);
			this->panel3_2->Controls->Add(this->log_txt);
			this->panel3_2->Controls->Add(this->sing_txt);
			this->panel3_2->Controls->Add(this->conect_txt);
			this->panel3_2->Location = System::Drawing::Point(13, 20);
			this->panel3_2->Name = L"panel3_2";
			this->panel3_2->Size = System::Drawing::Size(207, 200);
			this->panel3_2->TabIndex = 1;
			// 
			// pas_txt
			// 
			this->pas_txt->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->pas_txt->AutoSize = true;
			this->pas_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->pas_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->pas_txt->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->pas_txt->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->pas_txt->Location = System::Drawing::Point(-2, 74);
			this->pas_txt->Name = L"pas_txt";
			this->pas_txt->Size = System::Drawing::Size(96, 20);
			this->pas_txt->TabIndex = 4;
			this->pas_txt->Text = L"Password: ";
			this->pas_txt->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->pas_txt->Visible = false;
			// 
			// log_txt
			// 
			this->log_txt->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->log_txt->AutoSize = true;
			this->log_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->log_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->log_txt->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->log_txt->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->log_txt->Location = System::Drawing::Point(-2, 49);
			this->log_txt->Name = L"log_txt";
			this->log_txt->Size = System::Drawing::Size(63, 20);
			this->log_txt->TabIndex = 3;
			this->log_txt->Text = L"Login: ";
			this->log_txt->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->log_txt->Visible = false;
			// 
			// sing_txt
			// 
			this->sing_txt->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->sing_txt->AutoSize = true;
			this->sing_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->sing_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->sing_txt->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->sing_txt->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->sing_txt->Location = System::Drawing::Point(-2, -1);
			this->sing_txt->Name = L"sing_txt";
			this->sing_txt->Size = System::Drawing::Size(134, 20);
			this->sing_txt->TabIndex = 2;
			this->sing_txt->Text = L"Набор номера.";
			this->sing_txt->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->sing_txt->Visible = false;
			// 
			// conect_txt
			// 
			this->conect_txt->Anchor = System::Windows::Forms::AnchorStyles::Right;
			this->conect_txt->AutoSize = true;
			this->conect_txt->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->conect_txt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->conect_txt->ForeColor = System::Drawing::Color::MediumSpringGreen;
			this->conect_txt->ImageAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->conect_txt->Location = System::Drawing::Point(-2, 24);
			this->conect_txt->Name = L"conect_txt";
			this->conect_txt->Size = System::Drawing::Size(118, 20);
			this->conect_txt->TabIndex = 1;
			this->conect_txt->Text = L"Соединение.";
			this->conect_txt->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->conect_txt->Visible = false;
			// 
			// timer1_2
			// 
			this->timer1_2->Interval = 200;
			this->timer1_2->Tick += gcnew System::EventHandler(this, &loading::timer1_Tick);
			// 
			// timer2_2
			// 
			this->timer2_2->Interval = 200;
			this->timer2_2->Tick += gcnew System::EventHandler(this, &loading::timer2_Tick);
			// 
			// timer3_2
			// 
			this->timer3_2->Interval = 200;
			this->timer3_2->Tick += gcnew System::EventHandler(this, &loading::timer3_2_Tick);
			// 
			// canc1
			// 
			this->canc1->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->canc1->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->canc1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->canc1->ForeColor = System::Drawing::Color::Black;
			this->canc1->Location = System::Drawing::Point(258, 227);
			this->canc1->Name = L"canc1";
			this->canc1->Size = System::Drawing::Size(117, 40);
			this->canc1->TabIndex = 10;
			this->canc1->Text = L"Отмена";
			this->canc1->UseVisualStyleBackColor = false;
			this->canc1->MouseEnter += gcnew System::EventHandler(this, &loading::canc1_MouseEnter);
			// 
			// canc2
			// 
			this->canc2->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->canc2->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->canc2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->canc2->ForeColor = System::Drawing::Color::Black;
			this->canc2->Location = System::Drawing::Point(13, 227);
			this->canc2->Name = L"canc2";
			this->canc2->Size = System::Drawing::Size(117, 40);
			this->canc2->TabIndex = 11;
			this->canc2->Text = L"Отмена";
			this->canc2->UseVisualStyleBackColor = false;
			this->canc2->Visible = false;
			this->canc2->MouseEnter += gcnew System::EventHandler(this, &loading::canc2_MouseEnter);
			// 
			// label2_2
			// 
			this->label2_2->AutoSize = true;
			this->label2_2->Cursor = System::Windows::Forms::Cursors::Default;
			this->label2_2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2_2->ForeColor = System::Drawing::Color::White;
			this->label2_2->Location = System::Drawing::Point(20, 0);
			this->label2_2->Name = L"label2_2";
			this->label2_2->Size = System::Drawing::Size(199, 16);
			this->label2_2->TabIndex = 12;
			this->label2_2->Text = L"Программа \"Всё В Одном\"";
			this->label2_2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseDown);
			this->label2_2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseMove);
			this->label2_2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseUp);
			// 
			// timer4_2
			// 
			this->timer4_2->Interval = 2300;
			this->timer4_2->Tick += gcnew System::EventHandler(this, &loading::timer4_2_Tick);
			// 
			// panel4_2
			// 
			this->panel4_2->BackColor = System::Drawing::Color::Black;
			this->panel4_2->Controls->Add(this->label3);
			this->panel4_2->Controls->Add(this->label4_2);
			this->panel4_2->Controls->Add(this->label2_2);
			this->panel4_2->Location = System::Drawing::Point(0, 0);
			this->panel4_2->Name = L"panel4_2";
			this->panel4_2->Size = System::Drawing::Size(390, 20);
			this->panel4_2->TabIndex = 12;
			this->panel4_2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseDown);
			this->panel4_2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseMove);
			this->panel4_2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseUp);
			// 
			// label3
			// 
			this->label3->Location = System::Drawing::Point(350, 0);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(20, 20);
			this->label3->TabIndex = 16;
			// 
			// label4_2
			// 
			this->label4_2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"label4_2.Image")));
			this->label4_2->Location = System::Drawing::Point(0, 0);
			this->label4_2->Name = L"label4_2";
			this->label4_2->Size = System::Drawing::Size(20, 20);
			this->label4_2->TabIndex = 15;
			this->label4_2->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseDown);
			this->label4_2->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseMove);
			this->label4_2->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &loading::label2_2_MouseUp);
			// 
			// timer5_2
			// 
			this->timer5_2->Interval = 1000;
			this->timer5_2->Tick += gcnew System::EventHandler(this, &loading::timer5_2_Tick);
			// 
			// loading
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->ClientSize = System::Drawing::Size(390, 270);
			this->ControlBox = false;
			this->Controls->Add(this->panel4_2);
			this->Controls->Add(this->canc2);
			this->Controls->Add(this->canc1);
			this->Controls->Add(this->panel3_2);
			this->Controls->Add(this->panel1_2);
			this->Controls->Add(this->label1_2);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"loading";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Программа \"Всё В Одном\"";
			this->TopMost = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &loading::loading_FormClosing);
			this->Load += gcnew System::EventHandler(this, &loading::loading_Load);
			this->panel1_2->ResumeLayout(false);
			this->panel2_2->ResumeLayout(false);
			this->panel3_2->ResumeLayout(false);
			this->panel3_2->PerformLayout();
			this->panel4_2->ResumeLayout(false);
			this->panel4_2->PerformLayout();
			this->ResumeLayout(false);

		}
	private: System::Void button_resh_Click(System::Object^ sender, System::EventArgs^ e) {
		if (!this->tim1) {
			this->button0->Enabled = false;
			this->button1->Enabled = false;
			this->button2->Enabled = false;
			this->button3->Enabled = false;
			this->button4->Enabled = false;
			this->button5->Enabled = false;
			this->button6->Enabled = false;
			this->button7->Enabled = false;
			this->button8->Enabled = false;
			this->button9->Enabled = false;
			this->button_resh->Enabled = false;
			this->button_zvd->Enabled = false;
			this->tim1 = true;
			this->timer2_2->Start();
			this->canc_did = true;
		}
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->sec == 0) {
			//1
			BlockInput(true);
			if (!this->other) {
				SetCursorPos(x1, y1);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x1, y1, 0, 0);
			}
			else {
				GetCursorPos(&p);
				SetCursorPos(900000, 900000);
				this->button1->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(1), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "+1 (";
		}
		else if (this->sec == 1) {
			//8
			if (!this->other) {
				SetCursorPos(x8, y8);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x8, y8, 0, 0);
			}
			else {
				this->button1->Size = System::Drawing::Size(35, 35);
				this->button8->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(3), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "8";
		}
		else if (this->sec == 2) {
			//0
			if (!this->other) {
				SetCursorPos(x0, y0);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x0, y0, 0, 0);
			}
			else {
				this->button8->Size = System::Drawing::Size(35, 35);
				this->button0->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(4), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "0";
		}
		else if (this->sec == 3) {
			//0
			if (!this->other) {
				SetCursorPos(x0, y0);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x0, y0, 0, 0);
			}
			else {
				this->button0->Size = System::Drawing::Size(35, 35);
				this->button0->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(4), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "0) ";
		}
		else if (this->sec == 4) {
			//3
			if (!this->other) {
				SetCursorPos(x3, y3);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x3, y3, 0, 0);
			}
			else {
				this->button0->Size = System::Drawing::Size(35, 35);
				this->button3->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(2), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "3";
		}
		else if (this->sec == 5) {
			//2
			if (!this->other) {
				SetCursorPos(x2, y2);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x2, y2, 0, 0);
			}
			else {
				this->button3->Size = System::Drawing::Size(35, 35);
				this->button2->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(5), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "2";
		}
		else if (this->sec == 6) {
			//9
			if (!this->other) {
				SetCursorPos(x9, y9);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x9, y9, 0, 0);
			}
			else {
				this->button2->Size = System::Drawing::Size(35, 35);
				this->button9->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(7), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "9";
		}
		else if (this->sec == 7) {
			//2
			if (!this->other) {
				SetCursorPos(x2, y2);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x2, y2, 0, 0);
			}
			else {
				this->button9->Size = System::Drawing::Size(35, 35);
				this->button2->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(5), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "2";
		}
		else if (this->sec == 8) {
			//3
			if (!this->other) {
				SetCursorPos(x3, y3);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x3, y3, 0, 0);
			}
			else {
				this->button2->Size = System::Drawing::Size(35, 35);
				this->button3->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(2), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "3";
		}
		else if (this->sec == 9) {
			//2
			if (!this->other) {
				SetCursorPos(x2, y2);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x2, y2, 0, 0);
			}
			else {
				this->button3->Size = System::Drawing::Size(35, 35);
				this->button2->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(5), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "2";
		}
		else if (this->sec == 10) {
			//6
			if (!this->other) {
				SetCursorPos(x6, y6);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, x6, y6, 0, 0);
			}
			else {
				this->button2->Size = System::Drawing::Size(35, 35);
				this->button6->Size = System::Drawing::Size(37, 37);
			}
			PlaySound(MAKEINTRESOURCE(6), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->number->Text += "6";
		}
		else if (this->sec == 11) {
			//#
			if (!this->other) {
				SetCursorPos(xresh, yresh);
				mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, xresh, yresh, 0, 0);
			}
			else {
				if (!this->tim1) {
					this->button6->Size = System::Drawing::Size(35, 35);
					this->button0->Enabled = false;
					this->button1->Enabled = false;
					this->button2->Enabled = false;
					this->button3->Enabled = false;
					this->button4->Enabled = false;
					this->button5->Enabled = false;
					this->button6->Enabled = false;
					this->button7->Enabled = false;
					this->button8->Enabled = false;
					this->button9->Enabled = false;
					this->button_resh->Enabled = false;
					this->button_zvd->Enabled = false;
					this->tim1 = true;
					this->timer2_2->Start();
					this->canc_did = true;
					SetCursorPos(p.x, p.y);
				}
			}
			PlaySound(MAKEINTRESOURCE(1), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			BlockInput(false);
			this->timer1_2->Stop();
		}
		this->sec++;
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!this->start_modem) {
			GetUserName((TCHAR*)username, &size);
			PlaySound(MAKEINTRESOURCE(8), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->start_modem = true;
		}
		if (sec1 == 0 && !this->cycle)
			this->sing_txt->Show();
		else if (sec1 == 1 && !this->cycle)
			this->sing_txt->Text += ".";
		else if (sec1 == 2 && !this->cycle)
			this->sing_txt->Text += ".";
		else if (sec1 == 3 && !this->cycle)
			this->sing_txt->Text = "Набор номера.";
		else if (this->num_did == 6 && !this->cycle) {
			this->sing_txt->Text = "Done!";
			this->conect_txt->Show();
			this->cycle = true;
			this->num_did = 0;
			this->sec1 = 1;
		}
		else if (sec1 == 1 && this->cycle)
			this->conect_txt->Text += ".";
		else if (sec1 == 2 && this->cycle)
			this->conect_txt->Text += ".";
		else if (sec1 == 3 && this->cycle)
			this->conect_txt->Text = "Соединение.";
		else if (this->num_did == 6 && this->cycle) {
			this->conect_txt->Text = "Done!";
			this->log_txt->Show();
			this->timer2_2->Stop();
			PlaySound(nullptr, nullptr, 0);
			PlaySound(MAKEINTRESOURCE(9), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->timer3_2->Start();
		}
		else if (sec1 == 4 && this->num_did != 6) {
			this->sec1 = 0;
			this->num_did++;
		}
		this->sec1++;
	}
	private: System::Void timer3_2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->sexs < size && !this->pas_done) {
			this->log_txt->Text += username[sexs];
			PlaySound(MAKEINTRESOURCE(10), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
		}
		else if (this->sexs == size && !this->pas_done) {
			PlaySound(MAKEINTRESOURCE(12), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->pas_txt->Show();
			this->pas_done = true;
			this->sexs = 0;
			this->timer3_2->Stop();
			this->timer5_2->Start();
		}
		else if (this->sexs < 10 && this->pas_done) {
			this->pas_txt->Text += "*";
			PlaySound(MAKEINTRESOURCE(10), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
		}
		else if (this->sexs == 10 && this->pas_done) {
			PlaySound(MAKEINTRESOURCE(12), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->timer3_2->Stop();
			this->timer5_2->Start();
		}
		else if (this->sexs == 11 && this->pas_done) {
			this->timer3_2->Stop();
			PlaySound(MAKEINTRESOURCE(11), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->panel4_2->Hide();
			this->button1->Hide();
			this->button2->Hide();
			this->button3->Hide();
			this->button4->Hide();
			this->button5->Hide();
			this->button6->Hide();
			this->button7->Hide();
			this->button8->Hide();
			this->button9->Hide();
			this->button0->Hide();
			this->button_resh->Hide();
			this->button_zvd->Hide();
			this->panel1_2->Hide();
			this->panel2_2->Hide();
			this->panel3_2->Hide();
			this->canc1->Hide();
			this->canc2->Hide();
			this->label2_2->Hide();
			this->label4_2->Hide();
			this->label1_2->Show();
			this->timer4_2->Start();
		}
		this->sexs++;
	}
	private: System::Void canc1_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		if (this->canc_did) {
			this->canc1->Hide();
			this->canc2->Show();
		}
	}
	private: System::Void canc2_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->canc2->Hide();
		this->canc1->Show();
	}
	private: System::Void timer4_2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->s == 1) {
			PlaySound(nullptr, nullptr, 0);
			_form1 = gcnew hacking;
			_form1->Show();
			this->now_loading = false;
			this->ShowInTaskbar = false;
			loading::Hide();
		}
		this->s++;
	}
	private: System::Void timer5_2_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->timer5_2->Stop();
		this->timer3_2->Start();
	}
	private: System::Void loading_Load(System::Object^ sender, System::EventArgs^ e) {
		if (!this->tim) {
			this->screenW = GetSystemMetrics(SM_CYSCREEN);
			this->screenH = GetSystemMetrics(SM_CXSCREEN);
			if (screenH == 1920 && screenW == 1080) { //1920x1080
				x1 = 1040;
				y1 = 465;
				x2 = 1080;
				y2 = 465;
				x3 = 1120;
				y3 = 465;
				x6 = 1120;
				y6 = 505;
				x8 = 1080;
				y8 = 545;
				x9 = 1120;
				y9 = 545;
				x0 = 1080;
				y0 = 590;
				xresh = 1120;
				yresh = 590;
			}
			else if (screenH == 1440 && screenW == 900) { //1440x900
				x1 = 800;
				y1 = 375;
				x2 = 840;
				y2 = 375;
				x3 = 880;
				y3 = 375;
				x6 = 880;
				y6 = 415;
				x8 = 840;
				y8 = 455;
				x9 = 880;
				y9 = 455;
				x0 = 840;
				y0 = 495;
				xresh = 880;
				yresh = 495;
			}
			else if (screenH == 1280 && screenW == 1024) { //1280x1024
				x1 = 720;
				y1 = 435;
				x2 = 760;
				y2 = 435;
				x3 = 800;
				y3 = 435;
				x6 = 800;
				y6 = 475;
				x8 = 760;
				y8 = 520;
				x9 = 800;
				y9 = 520;
				x0 = 760;
				y0 = 560;
				xresh = 800;
				yresh = 560;
			}
			else if (screenH == 1280 && screenW == 720) { //1280x720
				x1 = 720;
				y1 = 285;
				x2 = 760;
				y2 = 285;
				x3 = 800;
				y3 = 285;
				x6 = 800;
				y6 = 325;
				x8 = 760;
				y8 = 365;
				x9 = 800;
				y9 = 365;
				x0 = 760;
				y0 = 405;
				xresh = 800;
				yresh = 405;
			}
			else if (screenH == 800 && screenW == 600) { //800x600
				x1 = 480;
				y1 = 225;
				x2 = 520;
				y2 = 225;
				x3 = 560;
				y3 = 225;
				x6 = 560;
				y6 = 265;
				x8 = 520;
				y8 = 305;
				x9 = 560;
				y9 = 305;
				x0 = 520;
				y0 = 345;
				xresh = 560;
				yresh = 345;
			}
			else { //other
				this->other = true;
			}
			this->tim = true;
			this->timer1_2->Start();
		}
	}
	private: System::Void loading_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (this->now_loading) {
			MessageBox::Show("Пожалуйста не закрывайте программу, не отключайте интернет и не выключайте ПК до окончания работы программы!\nСпасибо за понимание!", "Не стоит так делать", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			e->Cancel = true;
		}
	}
	private: System::Void label2_2_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			lastLocation = e->Location;
	}
	private: System::Void label2_2_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->label1_2->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->label2_2->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->label4_2->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->panel4_2->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->Location = Point(
				this->Location.X + e->X - lastLocation.X,
				this->Location.Y + e->Y - lastLocation.Y);
		}
	}
	private: System::Void label2_2_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->label1_2->Cursor = System::Windows::Forms::Cursors::Default;
		this->label2_2->Cursor = System::Windows::Forms::Cursors::Default;
		this->label4_2->Cursor = System::Windows::Forms::Cursors::Default;
		this->panel4_2->Cursor = System::Windows::Forms::Cursors::Default;
	}
	};
}