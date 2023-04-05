#include "final.h"
#include "propyski.h"

namespace solver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для hacking
	/// </summary>
	public ref class hacking : public System::Windows::Forms::Form
	{
	public:
		hacking(void)
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
		~hacking()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ stop_btn;
	private: System::Windows::Forms::Label^ exit_btn_3;
	private: System::Windows::Forms::Panel^ panel1_3;
	protected:



	private: System::Windows::Forms::Label^ prog_name_3;
	private: System::Windows::Forms::Panel^ panel2_3;


	private: System::Windows::Forms::ProgressBar^ main_progres;
	private: System::Windows::Forms::Label^ orig_3;
	private: System::Windows::Forms::Panel^ orig2_3;



	private: System::Windows::Forms::Label^ orig1_3;

	private: System::Windows::Forms::Label^ prog_icon_3;

	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label24;
	private: System::Windows::Forms::Label^ label25;
	private: System::Windows::Forms::Label^ label26;
	private: System::Windows::Forms::Label^ label27;
	private: System::Windows::Forms::Label^ label14;
	private: System::Windows::Forms::Label^ label15;
	private: System::Windows::Forms::Label^ label16;
	private: System::Windows::Forms::Label^ label17;
	private: System::Windows::Forms::Label^ label18;
	private: System::Windows::Forms::Label^ label19;
	private: System::Windows::Forms::Label^ label20;
	private: System::Windows::Forms::Label^ label21;
	private: System::Windows::Forms::Label^ label22;
	private: System::Windows::Forms::Label^ label23;
	private: System::Windows::Forms::Label^ label13;
	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::GroupBox^ groupBox1_3;

	private: System::Windows::Forms::ProgressBar^ progressBar1;
	private: System::Windows::Forms::ProgressBar^ progressBar25;
	private: int proces = 0;


	private: System::Windows::Forms::ProgressBar^ progressBar20;
	private: System::Windows::Forms::ProgressBar^ progressBar24;


	private: System::Windows::Forms::ProgressBar^ progressBar15;
	private: System::Windows::Forms::ProgressBar^ progressBar23;



	private: System::Windows::Forms::ProgressBar^ progressBar19;
	private: System::Windows::Forms::ProgressBar^ progressBar22;



	private: System::Windows::Forms::ProgressBar^ progressBar10;
	private: System::Windows::Forms::ProgressBar^ progressBar21;



	private: System::Windows::Forms::ProgressBar^ progressBar18;
	private:final^ _form3;

	private: System::Windows::Forms::ProgressBar^ progressBar14;
	private: System::Windows::Forms::ProgressBar^ progressBar17;



	private: System::Windows::Forms::ProgressBar^ progressBar5;
	private: System::Windows::Forms::ProgressBar^ progressBar16;
	private: System::Windows::Forms::ProgressBar^ progressBar13;




	private: System::Windows::Forms::ProgressBar^ progressBar9;
	private: System::Windows::Forms::ProgressBar^ progressBar12;




	private: System::Windows::Forms::ProgressBar^ progressBar4;
	private: System::Windows::Forms::ProgressBar^ progressBar11;


	private: System::Windows::Forms::ProgressBar^ progressBar8;

	private: System::Windows::Forms::ProgressBar^ progressBar3;
	private: System::Windows::Forms::ProgressBar^ progressBar7;


	private: System::Windows::Forms::ProgressBar^ progressBar2;
	private: System::Windows::Forms::ProgressBar^ progressBar6;


	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Timer^ timer2;
	private: System::Windows::Forms::Timer^ timer3;
	private: System::Windows::Forms::Timer^ timer4;
	private: System::Windows::Forms::Timer^ timer5;
	private: System::Windows::Forms::Timer^ timer6;
	private: System::Windows::Forms::Timer^ timer7;
	private: System::Windows::Forms::Timer^ timer8;
	private: System::Windows::Forms::Timer^ timer9;
	private: System::Windows::Forms::Timer^ timer10;
	private: System::Windows::Forms::Timer^ timer11;
	private: System::Windows::Forms::Timer^ timer12;
	private: System::Windows::Forms::Timer^ timer13;
	private: System::Windows::Forms::Timer^ timer14;
	private: System::Windows::Forms::Timer^ timer15;
	private: System::Windows::Forms::Timer^ timer16;
	private: System::Windows::Forms::Timer^ timer17;
	private: System::Windows::Forms::Timer^ timer18;
	private: System::Windows::Forms::Timer^ timer19;
	private: System::Windows::Forms::Timer^ timer20;
	private: System::Windows::Forms::Timer^ timer21;
	private: System::Windows::Forms::Timer^ timer22;
	private: System::Windows::Forms::Timer^ timer23;
	private: System::Windows::Forms::Timer^ timer24;
	private: System::Windows::Forms::Timer^ timer25;
	private: System::Windows::Forms::Timer^ timer26;
	private: System::ComponentModel::IContainer^ components;
	private: System::Windows::Forms::Label^ propysk;

	private: System::Windows::Forms::Timer^ timer_wait;
private: System::Windows::Forms::Label^ propysk3_3;
private: System::Windows::Forms::Label^ propysk2_3;



private:bool now_hacking = true;
private: System::Windows::Forms::Label^ propysk4_3;

private: System::Windows::Forms::Label^ propysk1_3;

private: System::Windows::Forms::Label^ done23;
private: System::Windows::Forms::Label^ done24;
private: System::Windows::Forms::Label^ done25;
private: System::Windows::Forms::Label^ done22;
private: System::Windows::Forms::Label^ done21;
private: System::Windows::Forms::Label^ done20;
private: System::Windows::Forms::Label^ done19;
private: System::Windows::Forms::Label^ done18;
private: System::Windows::Forms::Label^ done17;
private: System::Windows::Forms::Label^ done16;
private: System::Windows::Forms::Label^ done15;
private: System::Windows::Forms::Label^ done13;
private: System::Windows::Forms::Label^ done12;
private: System::Windows::Forms::Label^ done11;
private: System::Windows::Forms::Label^ done10;
private: System::Windows::Forms::Label^ done9;
private: System::Windows::Forms::Label^ done8;
private: System::Windows::Forms::Label^ done7;
private: System::Windows::Forms::Label^ done6;
private: System::Windows::Forms::Label^ done5;
private: System::Windows::Forms::Label^ done4;
private: System::Windows::Forms::Label^ done3;
private: System::Windows::Forms::Label^ done2;
private: System::Windows::Forms::Label^ done1;
private: System::Windows::Forms::Label^ ostalos_text;


	private: bool Start = false;

	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(hacking::typeid));
			this->stop_btn = (gcnew System::Windows::Forms::Button());
			this->exit_btn_3 = (gcnew System::Windows::Forms::Label());
			this->panel1_3 = (gcnew System::Windows::Forms::Panel());
			this->prog_icon_3 = (gcnew System::Windows::Forms::Label());
			this->prog_name_3 = (gcnew System::Windows::Forms::Label());
			this->panel2_3 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1_3 = (gcnew System::Windows::Forms::GroupBox());
			this->done23 = (gcnew System::Windows::Forms::Label());
			this->done24 = (gcnew System::Windows::Forms::Label());
			this->done25 = (gcnew System::Windows::Forms::Label());
			this->done22 = (gcnew System::Windows::Forms::Label());
			this->done21 = (gcnew System::Windows::Forms::Label());
			this->done20 = (gcnew System::Windows::Forms::Label());
			this->done19 = (gcnew System::Windows::Forms::Label());
			this->done18 = (gcnew System::Windows::Forms::Label());
			this->done17 = (gcnew System::Windows::Forms::Label());
			this->done16 = (gcnew System::Windows::Forms::Label());
			this->done15 = (gcnew System::Windows::Forms::Label());
			this->done13 = (gcnew System::Windows::Forms::Label());
			this->done12 = (gcnew System::Windows::Forms::Label());
			this->done11 = (gcnew System::Windows::Forms::Label());
			this->done10 = (gcnew System::Windows::Forms::Label());
			this->done9 = (gcnew System::Windows::Forms::Label());
			this->done8 = (gcnew System::Windows::Forms::Label());
			this->done7 = (gcnew System::Windows::Forms::Label());
			this->done6 = (gcnew System::Windows::Forms::Label());
			this->done5 = (gcnew System::Windows::Forms::Label());
			this->done4 = (gcnew System::Windows::Forms::Label());
			this->done3 = (gcnew System::Windows::Forms::Label());
			this->done2 = (gcnew System::Windows::Forms::Label());
			this->done1 = (gcnew System::Windows::Forms::Label());
			this->propysk3_3 = (gcnew System::Windows::Forms::Label());
			this->propysk2_3 = (gcnew System::Windows::Forms::Label());
			this->propysk4_3 = (gcnew System::Windows::Forms::Label());
			this->propysk1_3 = (gcnew System::Windows::Forms::Label());
			this->propysk = (gcnew System::Windows::Forms::Label());
			this->progressBar25 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar20 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar24 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar15 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar23 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar19 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar22 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar10 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar21 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar18 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar14 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar17 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar5 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar16 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar13 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar9 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar12 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar4 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar11 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar8 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar3 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar7 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar2 = (gcnew System::Windows::Forms::ProgressBar());
			this->progressBar6 = (gcnew System::Windows::Forms::ProgressBar());
			this->label24 = (gcnew System::Windows::Forms::Label());
			this->label25 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label26 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label27 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label14 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label15 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label16 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->label17 = (gcnew System::Windows::Forms::Label());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->label18 = (gcnew System::Windows::Forms::Label());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->label19 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->label20 = (gcnew System::Windows::Forms::Label());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label21 = (gcnew System::Windows::Forms::Label());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->label22 = (gcnew System::Windows::Forms::Label());
			this->label23 = (gcnew System::Windows::Forms::Label());
			this->progressBar1 = (gcnew System::Windows::Forms::ProgressBar());
			this->main_progres = (gcnew System::Windows::Forms::ProgressBar());
			this->orig_3 = (gcnew System::Windows::Forms::Label());
			this->orig2_3 = (gcnew System::Windows::Forms::Panel());
			this->orig1_3 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer2 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer3 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer5 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer6 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer7 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer8 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer9 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer10 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer11 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer12 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer13 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer14 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer15 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer16 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer17 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer18 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer19 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer20 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer21 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer22 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer23 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer24 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer25 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer26 = (gcnew System::Windows::Forms::Timer(this->components));
			this->timer_wait = (gcnew System::Windows::Forms::Timer(this->components));
			this->ostalos_text = (gcnew System::Windows::Forms::Label());
			this->panel1_3->SuspendLayout();
			this->panel2_3->SuspendLayout();
			this->groupBox1_3->SuspendLayout();
			this->orig2_3->SuspendLayout();
			this->SuspendLayout();
			// 
			// stop_btn
			// 
			this->stop_btn->BackColor = System::Drawing::Color::MediumSpringGreen;
			this->stop_btn->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->stop_btn->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->stop_btn->ForeColor = System::Drawing::Color::Black;
			this->stop_btn->Location = System::Drawing::Point(308, 277);
			this->stop_btn->Name = L"stop_btn";
			this->stop_btn->Size = System::Drawing::Size(120, 60);
			this->stop_btn->TabIndex = 9;
			this->stop_btn->Text = L"СтопЭ!";
			this->stop_btn->UseVisualStyleBackColor = false;
			this->stop_btn->Click += gcnew System::EventHandler(this, &hacking::start_btn_Click);
			// 
			// exit_btn_3
			// 
			this->exit_btn_3->AutoSize = true;
			this->exit_btn_3->Cursor = System::Windows::Forms::Cursors::Default;
			this->exit_btn_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->exit_btn_3->ForeColor = System::Drawing::Color::Silver;
			this->exit_btn_3->Location = System::Drawing::Point(409, 0);
			this->exit_btn_3->Name = L"exit_btn_3";
			this->exit_btn_3->Size = System::Drawing::Size(31, 29);
			this->exit_btn_3->TabIndex = 1;
			this->exit_btn_3->Text = L"X";
			this->exit_btn_3->Click += gcnew System::EventHandler(this, &hacking::exit_btn_Click);
			this->exit_btn_3->MouseEnter += gcnew System::EventHandler(this, &hacking::exit_btn_MouseEnter);
			this->exit_btn_3->MouseLeave += gcnew System::EventHandler(this, &hacking::exit_btn_MouseLeave);
			// 
			// panel1_3
			// 
			this->panel1_3->BackColor = System::Drawing::Color::Black;
			this->panel1_3->Controls->Add(this->prog_icon_3);
			this->panel1_3->Controls->Add(this->prog_name_3);
			this->panel1_3->Controls->Add(this->exit_btn_3);
			this->panel1_3->Location = System::Drawing::Point(0, 0);
			this->panel1_3->Name = L"panel1_3";
			this->panel1_3->Size = System::Drawing::Size(440, 30);
			this->panel1_3->TabIndex = 0;
			// 
			// prog_icon_3
			// 
			this->prog_icon_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"prog_icon_3.Image")));
			this->prog_icon_3->Location = System::Drawing::Point(0, 0);
			this->prog_icon_3->Name = L"prog_icon_3";
			this->prog_icon_3->Size = System::Drawing::Size(30, 30);
			this->prog_icon_3->TabIndex = 4;
			// 
			// prog_name_3
			// 
			this->prog_name_3->Cursor = System::Windows::Forms::Cursors::Default;
			this->prog_name_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->prog_name_3->ForeColor = System::Drawing::Color::White;
			this->prog_name_3->Location = System::Drawing::Point(30, 0);
			this->prog_name_3->Name = L"prog_name_3";
			this->prog_name_3->Size = System::Drawing::Size(340, 30);
			this->prog_name_3->TabIndex = 0;
			this->prog_name_3->Text = L"Программа \"Всё В Одном\"";
			// 
			// panel2_3
			// 
			this->panel2_3->AutoScroll = true;
			this->panel2_3->Controls->Add(this->groupBox1_3);
			this->panel2_3->Location = System::Drawing::Point(12, 36);
			this->panel2_3->Name = L"panel2_3";
			this->panel2_3->Size = System::Drawing::Size(416, 180);
			this->panel2_3->TabIndex = 10;
			// 
			// groupBox1_3
			// 
			this->groupBox1_3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->groupBox1_3->Controls->Add(this->done23);
			this->groupBox1_3->Controls->Add(this->done24);
			this->groupBox1_3->Controls->Add(this->done25);
			this->groupBox1_3->Controls->Add(this->done22);
			this->groupBox1_3->Controls->Add(this->done21);
			this->groupBox1_3->Controls->Add(this->done20);
			this->groupBox1_3->Controls->Add(this->done19);
			this->groupBox1_3->Controls->Add(this->done18);
			this->groupBox1_3->Controls->Add(this->done17);
			this->groupBox1_3->Controls->Add(this->done16);
			this->groupBox1_3->Controls->Add(this->done15);
			this->groupBox1_3->Controls->Add(this->done13);
			this->groupBox1_3->Controls->Add(this->done12);
			this->groupBox1_3->Controls->Add(this->done11);
			this->groupBox1_3->Controls->Add(this->done10);
			this->groupBox1_3->Controls->Add(this->done9);
			this->groupBox1_3->Controls->Add(this->done8);
			this->groupBox1_3->Controls->Add(this->done7);
			this->groupBox1_3->Controls->Add(this->done6);
			this->groupBox1_3->Controls->Add(this->done5);
			this->groupBox1_3->Controls->Add(this->done4);
			this->groupBox1_3->Controls->Add(this->done3);
			this->groupBox1_3->Controls->Add(this->done2);
			this->groupBox1_3->Controls->Add(this->done1);
			this->groupBox1_3->Controls->Add(this->propysk3_3);
			this->groupBox1_3->Controls->Add(this->propysk2_3);
			this->groupBox1_3->Controls->Add(this->propysk4_3);
			this->groupBox1_3->Controls->Add(this->propysk1_3);
			this->groupBox1_3->Controls->Add(this->propysk);
			this->groupBox1_3->Controls->Add(this->progressBar25);
			this->groupBox1_3->Controls->Add(this->progressBar20);
			this->groupBox1_3->Controls->Add(this->progressBar24);
			this->groupBox1_3->Controls->Add(this->progressBar15);
			this->groupBox1_3->Controls->Add(this->progressBar23);
			this->groupBox1_3->Controls->Add(this->progressBar19);
			this->groupBox1_3->Controls->Add(this->progressBar22);
			this->groupBox1_3->Controls->Add(this->progressBar10);
			this->groupBox1_3->Controls->Add(this->progressBar21);
			this->groupBox1_3->Controls->Add(this->progressBar18);
			this->groupBox1_3->Controls->Add(this->progressBar14);
			this->groupBox1_3->Controls->Add(this->progressBar17);
			this->groupBox1_3->Controls->Add(this->progressBar5);
			this->groupBox1_3->Controls->Add(this->progressBar16);
			this->groupBox1_3->Controls->Add(this->progressBar13);
			this->groupBox1_3->Controls->Add(this->progressBar9);
			this->groupBox1_3->Controls->Add(this->progressBar12);
			this->groupBox1_3->Controls->Add(this->progressBar4);
			this->groupBox1_3->Controls->Add(this->progressBar11);
			this->groupBox1_3->Controls->Add(this->progressBar8);
			this->groupBox1_3->Controls->Add(this->progressBar3);
			this->groupBox1_3->Controls->Add(this->progressBar7);
			this->groupBox1_3->Controls->Add(this->progressBar2);
			this->groupBox1_3->Controls->Add(this->progressBar6);
			this->groupBox1_3->Controls->Add(this->label24);
			this->groupBox1_3->Controls->Add(this->label25);
			this->groupBox1_3->Controls->Add(this->label2);
			this->groupBox1_3->Controls->Add(this->label26);
			this->groupBox1_3->Controls->Add(this->label5);
			this->groupBox1_3->Controls->Add(this->label27);
			this->groupBox1_3->Controls->Add(this->label3);
			this->groupBox1_3->Controls->Add(this->label14);
			this->groupBox1_3->Controls->Add(this->label6);
			this->groupBox1_3->Controls->Add(this->label15);
			this->groupBox1_3->Controls->Add(this->label7);
			this->groupBox1_3->Controls->Add(this->label16);
			this->groupBox1_3->Controls->Add(this->label8);
			this->groupBox1_3->Controls->Add(this->label17);
			this->groupBox1_3->Controls->Add(this->label9);
			this->groupBox1_3->Controls->Add(this->label18);
			this->groupBox1_3->Controls->Add(this->label10);
			this->groupBox1_3->Controls->Add(this->label19);
			this->groupBox1_3->Controls->Add(this->label11);
			this->groupBox1_3->Controls->Add(this->label20);
			this->groupBox1_3->Controls->Add(this->label12);
			this->groupBox1_3->Controls->Add(this->label21);
			this->groupBox1_3->Controls->Add(this->label13);
			this->groupBox1_3->Controls->Add(this->label22);
			this->groupBox1_3->Controls->Add(this->label23);
			this->groupBox1_3->Controls->Add(this->progressBar1);
			this->groupBox1_3->ForeColor = System::Drawing::Color::Silver;
			this->groupBox1_3->Location = System::Drawing::Point(0, 0);
			this->groupBox1_3->Name = L"groupBox1_3";
			this->groupBox1_3->Size = System::Drawing::Size(399, 615);
			this->groupBox1_3->TabIndex = 39;
			this->groupBox1_3->TabStop = false;
			this->groupBox1_3->Text = L"Выполнение процессов:";
			// 
			// done23
			// 
			this->done23->BackColor = System::Drawing::Color::LightGreen;
			this->done23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done23->ForeColor = System::Drawing::Color::Black;
			this->done23->Location = System::Drawing::Point(303, 547);
			this->done23->Name = L"done23";
			this->done23->Size = System::Drawing::Size(90, 18);
			this->done23->TabIndex = 51;
			this->done23->Text = L"ВЫПОЛНЕНО!";
			this->done23->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done23->Visible = false;
			// 
			// done24
			// 
			this->done24->BackColor = System::Drawing::Color::LightGreen;
			this->done24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done24->ForeColor = System::Drawing::Color::Black;
			this->done24->Location = System::Drawing::Point(303, 571);
			this->done24->Name = L"done24";
			this->done24->Size = System::Drawing::Size(90, 18);
			this->done24->TabIndex = 52;
			this->done24->Text = L"ВЫПОЛНЕНО!";
			this->done24->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done24->Visible = false;
			// 
			// done25
			// 
			this->done25->BackColor = System::Drawing::Color::LightGreen;
			this->done25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done25->ForeColor = System::Drawing::Color::Black;
			this->done25->Location = System::Drawing::Point(303, 595);
			this->done25->Name = L"done25";
			this->done25->Size = System::Drawing::Size(90, 18);
			this->done25->TabIndex = 53;
			this->done25->Text = L"ВЫПОЛНЕНО!";
			this->done25->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done25->Visible = false;
			// 
			// done22
			// 
			this->done22->BackColor = System::Drawing::Color::LightGreen;
			this->done22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done22->ForeColor = System::Drawing::Color::Black;
			this->done22->Location = System::Drawing::Point(303, 523);
			this->done22->Name = L"done22";
			this->done22->Size = System::Drawing::Size(90, 18);
			this->done22->TabIndex = 51;
			this->done22->Text = L"ВЫПОЛНЕНО!";
			this->done22->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done22->Visible = false;
			// 
			// done21
			// 
			this->done21->BackColor = System::Drawing::Color::LightGreen;
			this->done21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done21->ForeColor = System::Drawing::Color::Black;
			this->done21->Location = System::Drawing::Point(303, 499);
			this->done21->Name = L"done21";
			this->done21->Size = System::Drawing::Size(90, 18);
			this->done21->TabIndex = 51;
			this->done21->Text = L"ВЫПОЛНЕНО!";
			this->done21->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done21->Visible = false;
			// 
			// done20
			// 
			this->done20->BackColor = System::Drawing::Color::LightGreen;
			this->done20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done20->ForeColor = System::Drawing::Color::Black;
			this->done20->Location = System::Drawing::Point(303, 475);
			this->done20->Name = L"done20";
			this->done20->Size = System::Drawing::Size(90, 18);
			this->done20->TabIndex = 51;
			this->done20->Text = L"ВЫПОЛНЕНО!";
			this->done20->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done20->Visible = false;
			// 
			// done19
			// 
			this->done19->BackColor = System::Drawing::Color::LightGreen;
			this->done19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done19->ForeColor = System::Drawing::Color::Black;
			this->done19->Location = System::Drawing::Point(303, 451);
			this->done19->Name = L"done19";
			this->done19->Size = System::Drawing::Size(90, 18);
			this->done19->TabIndex = 51;
			this->done19->Text = L"ВЫПОЛНЕНО!";
			this->done19->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done19->Visible = false;
			// 
			// done18
			// 
			this->done18->BackColor = System::Drawing::Color::LightGreen;
			this->done18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done18->ForeColor = System::Drawing::Color::Black;
			this->done18->Location = System::Drawing::Point(303, 427);
			this->done18->Name = L"done18";
			this->done18->Size = System::Drawing::Size(90, 18);
			this->done18->TabIndex = 51;
			this->done18->Text = L"ВЫПОЛНЕНО!";
			this->done18->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done18->Visible = false;
			// 
			// done17
			// 
			this->done17->BackColor = System::Drawing::Color::LightGreen;
			this->done17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done17->ForeColor = System::Drawing::Color::Black;
			this->done17->Location = System::Drawing::Point(303, 403);
			this->done17->Name = L"done17";
			this->done17->Size = System::Drawing::Size(90, 18);
			this->done17->TabIndex = 51;
			this->done17->Text = L"ВЫПОЛНЕНО!";
			this->done17->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done17->Visible = false;
			// 
			// done16
			// 
			this->done16->BackColor = System::Drawing::Color::LightGreen;
			this->done16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done16->ForeColor = System::Drawing::Color::Black;
			this->done16->Location = System::Drawing::Point(303, 379);
			this->done16->Name = L"done16";
			this->done16->Size = System::Drawing::Size(90, 18);
			this->done16->TabIndex = 51;
			this->done16->Text = L"ВЫПОЛНЕНО!";
			this->done16->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done16->Visible = false;
			// 
			// done15
			// 
			this->done15->BackColor = System::Drawing::Color::LightGreen;
			this->done15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done15->ForeColor = System::Drawing::Color::Black;
			this->done15->Location = System::Drawing::Point(303, 355);
			this->done15->Name = L"done15";
			this->done15->Size = System::Drawing::Size(90, 18);
			this->done15->TabIndex = 51;
			this->done15->Text = L"ВЫПОЛНЕНО!";
			this->done15->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done15->Visible = false;
			// 
			// done13
			// 
			this->done13->BackColor = System::Drawing::Color::LightGreen;
			this->done13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done13->ForeColor = System::Drawing::Color::Black;
			this->done13->Location = System::Drawing::Point(303, 307);
			this->done13->Name = L"done13";
			this->done13->Size = System::Drawing::Size(90, 18);
			this->done13->TabIndex = 52;
			this->done13->Text = L"ВЫПОЛНЕНО!";
			this->done13->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done13->Visible = false;
			// 
			// done12
			// 
			this->done12->BackColor = System::Drawing::Color::LightGreen;
			this->done12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done12->ForeColor = System::Drawing::Color::Black;
			this->done12->Location = System::Drawing::Point(303, 284);
			this->done12->Name = L"done12";
			this->done12->Size = System::Drawing::Size(90, 18);
			this->done12->TabIndex = 51;
			this->done12->Text = L"ВЫПОЛНЕНО!";
			this->done12->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done12->Visible = false;
			// 
			// done11
			// 
			this->done11->BackColor = System::Drawing::Color::LightGreen;
			this->done11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done11->ForeColor = System::Drawing::Color::Black;
			this->done11->Location = System::Drawing::Point(303, 259);
			this->done11->Name = L"done11";
			this->done11->Size = System::Drawing::Size(90, 18);
			this->done11->TabIndex = 51;
			this->done11->Text = L"ВЫПОЛНЕНО!";
			this->done11->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done11->Visible = false;
			// 
			// done10
			// 
			this->done10->BackColor = System::Drawing::Color::LightGreen;
			this->done10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done10->ForeColor = System::Drawing::Color::Black;
			this->done10->Location = System::Drawing::Point(303, 235);
			this->done10->Name = L"done10";
			this->done10->Size = System::Drawing::Size(90, 18);
			this->done10->TabIndex = 51;
			this->done10->Text = L"ВЫПОЛНЕНО!";
			this->done10->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done10->Visible = false;
			// 
			// done9
			// 
			this->done9->BackColor = System::Drawing::Color::LightGreen;
			this->done9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done9->ForeColor = System::Drawing::Color::Black;
			this->done9->Location = System::Drawing::Point(303, 211);
			this->done9->Name = L"done9";
			this->done9->Size = System::Drawing::Size(90, 18);
			this->done9->TabIndex = 50;
			this->done9->Text = L"ВЫПОЛНЕНО!";
			this->done9->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done9->Visible = false;
			// 
			// done8
			// 
			this->done8->BackColor = System::Drawing::Color::LightGreen;
			this->done8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done8->ForeColor = System::Drawing::Color::Black;
			this->done8->Location = System::Drawing::Point(303, 187);
			this->done8->Name = L"done8";
			this->done8->Size = System::Drawing::Size(90, 18);
			this->done8->TabIndex = 50;
			this->done8->Text = L"ВЫПОЛНЕНО!";
			this->done8->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done8->Visible = false;
			// 
			// done7
			// 
			this->done7->BackColor = System::Drawing::Color::LightGreen;
			this->done7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done7->ForeColor = System::Drawing::Color::Black;
			this->done7->Location = System::Drawing::Point(303, 163);
			this->done7->Name = L"done7";
			this->done7->Size = System::Drawing::Size(90, 18);
			this->done7->TabIndex = 50;
			this->done7->Text = L"ВЫПОЛНЕНО!";
			this->done7->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done7->Visible = false;
			// 
			// done6
			// 
			this->done6->BackColor = System::Drawing::Color::LightGreen;
			this->done6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done6->ForeColor = System::Drawing::Color::Black;
			this->done6->Location = System::Drawing::Point(303, 139);
			this->done6->Name = L"done6";
			this->done6->Size = System::Drawing::Size(90, 18);
			this->done6->TabIndex = 50;
			this->done6->Text = L"ВЫПОЛНЕНО!";
			this->done6->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done6->Visible = false;
			// 
			// done5
			// 
			this->done5->BackColor = System::Drawing::Color::LightGreen;
			this->done5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done5->ForeColor = System::Drawing::Color::Black;
			this->done5->Location = System::Drawing::Point(303, 115);
			this->done5->Name = L"done5";
			this->done5->Size = System::Drawing::Size(90, 18);
			this->done5->TabIndex = 50;
			this->done5->Text = L"ВЫПОЛНЕНО!";
			this->done5->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done5->Visible = false;
			// 
			// done4
			// 
			this->done4->BackColor = System::Drawing::Color::LightGreen;
			this->done4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done4->ForeColor = System::Drawing::Color::Black;
			this->done4->Location = System::Drawing::Point(303, 92);
			this->done4->Name = L"done4";
			this->done4->Size = System::Drawing::Size(90, 18);
			this->done4->TabIndex = 50;
			this->done4->Text = L"ВЫПОЛНЕНО!";
			this->done4->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done4->Visible = false;
			// 
			// done3
			// 
			this->done3->BackColor = System::Drawing::Color::LightGreen;
			this->done3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done3->ForeColor = System::Drawing::Color::Black;
			this->done3->Location = System::Drawing::Point(303, 67);
			this->done3->Name = L"done3";
			this->done3->Size = System::Drawing::Size(90, 18);
			this->done3->TabIndex = 50;
			this->done3->Text = L"ВЫПОЛНЕНО!";
			this->done3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done3->Visible = false;
			// 
			// done2
			// 
			this->done2->BackColor = System::Drawing::Color::LightGreen;
			this->done2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done2->ForeColor = System::Drawing::Color::Black;
			this->done2->Location = System::Drawing::Point(303, 43);
			this->done2->Name = L"done2";
			this->done2->Size = System::Drawing::Size(90, 18);
			this->done2->TabIndex = 50;
			this->done2->Text = L"ВЫПОЛНЕНО!";
			this->done2->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done2->Visible = false;
			// 
			// done1
			// 
			this->done1->BackColor = System::Drawing::Color::LightGreen;
			this->done1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->done1->ForeColor = System::Drawing::Color::Black;
			this->done1->Location = System::Drawing::Point(303, 19);
			this->done1->Name = L"done1";
			this->done1->Size = System::Drawing::Size(90, 18);
			this->done1->TabIndex = 49;
			this->done1->Text = L"ВЫПОЛНЕНО!";
			this->done1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->done1->Visible = false;
			// 
			// propysk3_3
			// 
			this->propysk3_3->BackColor = System::Drawing::Color::IndianRed;
			this->propysk3_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->propysk3_3->ForeColor = System::Drawing::Color::Black;
			this->propysk3_3->Location = System::Drawing::Point(303, 43);
			this->propysk3_3->Name = L"propysk3_3";
			this->propysk3_3->Size = System::Drawing::Size(90, 18);
			this->propysk3_3->TabIndex = 48;
			this->propysk3_3->Text = L"ПРОПУЩЕНО!";
			this->propysk3_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->propysk3_3->Visible = false;
			// 
			// propysk2_3
			// 
			this->propysk2_3->BackColor = System::Drawing::Color::IndianRed;
			this->propysk2_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->propysk2_3->ForeColor = System::Drawing::Color::Black;
			this->propysk2_3->Location = System::Drawing::Point(303, 499);
			this->propysk2_3->Name = L"propysk2_3";
			this->propysk2_3->Size = System::Drawing::Size(90, 18);
			this->propysk2_3->TabIndex = 48;
			this->propysk2_3->Text = L"ПРОПУЩЕНО!";
			this->propysk2_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->propysk2_3->Visible = false;
			// 
			// propysk4_3
			// 
			this->propysk4_3->BackColor = System::Drawing::Color::IndianRed;
			this->propysk4_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->propysk4_3->ForeColor = System::Drawing::Color::Black;
			this->propysk4_3->Location = System::Drawing::Point(303, 163);
			this->propysk4_3->Name = L"propysk4_3";
			this->propysk4_3->Size = System::Drawing::Size(90, 18);
			this->propysk4_3->TabIndex = 48;
			this->propysk4_3->Text = L"ПРОПУЩЕНО!";
			this->propysk4_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->propysk4_3->Visible = false;
			// 
			// propysk1_3
			// 
			this->propysk1_3->BackColor = System::Drawing::Color::IndianRed;
			this->propysk1_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->propysk1_3->ForeColor = System::Drawing::Color::Black;
			this->propysk1_3->Location = System::Drawing::Point(303, 67);
			this->propysk1_3->Name = L"propysk1_3";
			this->propysk1_3->Size = System::Drawing::Size(90, 18);
			this->propysk1_3->TabIndex = 48;
			this->propysk1_3->Text = L"ПРОПУЩЕНО!";
			this->propysk1_3->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->propysk1_3->Visible = false;
			// 
			// propysk
			// 
			this->propysk->BackColor = System::Drawing::Color::IndianRed;
			this->propysk->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->propysk->ForeColor = System::Drawing::Color::Black;
			this->propysk->Location = System::Drawing::Point(303, 331);
			this->propysk->Name = L"propysk";
			this->propysk->Size = System::Drawing::Size(90, 18);
			this->propysk->TabIndex = 47;
			this->propysk->Text = L"ПРОПУЩЕНО!";
			this->propysk->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->propysk->Visible = false;
			// 
			// progressBar25
			// 
			this->progressBar25->Location = System::Drawing::Point(303, 595);
			this->progressBar25->Name = L"progressBar25";
			this->progressBar25->Size = System::Drawing::Size(90, 18);
			this->progressBar25->TabIndex = 44;
			// 
			// progressBar20
			// 
			this->progressBar20->Location = System::Drawing::Point(303, 475);
			this->progressBar20->Name = L"progressBar20";
			this->progressBar20->Size = System::Drawing::Size(90, 18);
			this->progressBar20->TabIndex = 44;
			// 
			// progressBar24
			// 
			this->progressBar24->Location = System::Drawing::Point(303, 571);
			this->progressBar24->Name = L"progressBar24";
			this->progressBar24->Size = System::Drawing::Size(90, 18);
			this->progressBar24->TabIndex = 46;
			// 
			// progressBar15
			// 
			this->progressBar15->Location = System::Drawing::Point(303, 355);
			this->progressBar15->Name = L"progressBar15";
			this->progressBar15->Size = System::Drawing::Size(90, 18);
			this->progressBar15->TabIndex = 44;
			// 
			// progressBar23
			// 
			this->progressBar23->Location = System::Drawing::Point(303, 547);
			this->progressBar23->Name = L"progressBar23";
			this->progressBar23->Size = System::Drawing::Size(90, 18);
			this->progressBar23->TabIndex = 45;
			// 
			// progressBar19
			// 
			this->progressBar19->Location = System::Drawing::Point(303, 451);
			this->progressBar19->Name = L"progressBar19";
			this->progressBar19->Size = System::Drawing::Size(90, 18);
			this->progressBar19->TabIndex = 46;
			// 
			// progressBar22
			// 
			this->progressBar22->Location = System::Drawing::Point(303, 523);
			this->progressBar22->Name = L"progressBar22";
			this->progressBar22->Size = System::Drawing::Size(90, 18);
			this->progressBar22->TabIndex = 43;
			// 
			// progressBar10
			// 
			this->progressBar10->Location = System::Drawing::Point(303, 235);
			this->progressBar10->Name = L"progressBar10";
			this->progressBar10->Size = System::Drawing::Size(90, 18);
			this->progressBar10->TabIndex = 44;
			// 
			// progressBar21
			// 
			this->progressBar21->Location = System::Drawing::Point(303, 499);
			this->progressBar21->Name = L"progressBar21";
			this->progressBar21->Size = System::Drawing::Size(90, 18);
			this->progressBar21->TabIndex = 42;
			// 
			// progressBar18
			// 
			this->progressBar18->Location = System::Drawing::Point(303, 427);
			this->progressBar18->Maximum = 200;
			this->progressBar18->Name = L"progressBar18";
			this->progressBar18->Size = System::Drawing::Size(90, 18);
			this->progressBar18->TabIndex = 45;
			// 
			// progressBar14
			// 
			this->progressBar14->Location = System::Drawing::Point(303, 331);
			this->progressBar14->Name = L"progressBar14";
			this->progressBar14->Size = System::Drawing::Size(90, 18);
			this->progressBar14->TabIndex = 46;
			// 
			// progressBar17
			// 
			this->progressBar17->Location = System::Drawing::Point(303, 403);
			this->progressBar17->Name = L"progressBar17";
			this->progressBar17->Size = System::Drawing::Size(90, 18);
			this->progressBar17->TabIndex = 43;
			// 
			// progressBar5
			// 
			this->progressBar5->Location = System::Drawing::Point(303, 115);
			this->progressBar5->Name = L"progressBar5";
			this->progressBar5->Size = System::Drawing::Size(90, 18);
			this->progressBar5->TabIndex = 40;
			// 
			// progressBar16
			// 
			this->progressBar16->Location = System::Drawing::Point(303, 379);
			this->progressBar16->Name = L"progressBar16";
			this->progressBar16->Size = System::Drawing::Size(90, 18);
			this->progressBar16->TabIndex = 42;
			// 
			// progressBar13
			// 
			this->progressBar13->Location = System::Drawing::Point(303, 307);
			this->progressBar13->Name = L"progressBar13";
			this->progressBar13->Size = System::Drawing::Size(90, 18);
			this->progressBar13->TabIndex = 45;
			// 
			// progressBar9
			// 
			this->progressBar9->Location = System::Drawing::Point(303, 211);
			this->progressBar9->Name = L"progressBar9";
			this->progressBar9->Size = System::Drawing::Size(90, 18);
			this->progressBar9->TabIndex = 46;
			// 
			// progressBar12
			// 
			this->progressBar12->Location = System::Drawing::Point(303, 283);
			this->progressBar12->Name = L"progressBar12";
			this->progressBar12->Size = System::Drawing::Size(90, 18);
			this->progressBar12->TabIndex = 43;
			// 
			// progressBar4
			// 
			this->progressBar4->Location = System::Drawing::Point(303, 91);
			this->progressBar4->Name = L"progressBar4";
			this->progressBar4->Size = System::Drawing::Size(90, 18);
			this->progressBar4->TabIndex = 41;
			// 
			// progressBar11
			// 
			this->progressBar11->Location = System::Drawing::Point(303, 259);
			this->progressBar11->Name = L"progressBar11";
			this->progressBar11->Size = System::Drawing::Size(90, 18);
			this->progressBar11->TabIndex = 42;
			// 
			// progressBar8
			// 
			this->progressBar8->Location = System::Drawing::Point(303, 187);
			this->progressBar8->Name = L"progressBar8";
			this->progressBar8->Size = System::Drawing::Size(90, 18);
			this->progressBar8->TabIndex = 45;
			// 
			// progressBar3
			// 
			this->progressBar3->Location = System::Drawing::Point(303, 67);
			this->progressBar3->Name = L"progressBar3";
			this->progressBar3->Size = System::Drawing::Size(90, 18);
			this->progressBar3->TabIndex = 40;
			// 
			// progressBar7
			// 
			this->progressBar7->Location = System::Drawing::Point(303, 163);
			this->progressBar7->Name = L"progressBar7";
			this->progressBar7->Size = System::Drawing::Size(90, 18);
			this->progressBar7->TabIndex = 43;
			// 
			// progressBar2
			// 
			this->progressBar2->Location = System::Drawing::Point(303, 43);
			this->progressBar2->Name = L"progressBar2";
			this->progressBar2->Size = System::Drawing::Size(90, 18);
			this->progressBar2->TabIndex = 39;
			// 
			// progressBar6
			// 
			this->progressBar6->Location = System::Drawing::Point(303, 139);
			this->progressBar6->Name = L"progressBar6";
			this->progressBar6->Size = System::Drawing::Size(90, 18);
			this->progressBar6->TabIndex = 42;
			// 
			// label24
			// 
			this->label24->AutoSize = true;
			this->label24->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label24->ForeColor = System::Drawing::Color::White;
			this->label24->Location = System::Drawing::Point(6, 571);
			this->label24->Name = L"label24";
			this->label24->Size = System::Drawing::Size(182, 18);
			this->label24->TabIndex = 38;
			this->label24->Text = L"24. Шифрование WI-FI";
			// 
			// label25
			// 
			this->label25->AutoSize = true;
			this->label25->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label25->ForeColor = System::Drawing::Color::White;
			this->label25->Location = System::Drawing::Point(6, 547);
			this->label25->Name = L"label25";
			this->label25->Size = System::Drawing::Size(181, 18);
			this->label25->TabIndex = 37;
			this->label25->Text = L"23. Шифрование BIOS";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::Color::White;
			this->label2->Location = System::Drawing::Point(6, 19);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(289, 18);
			this->label2->TabIndex = 14;
			this->label2->Text = L"1. Установка основных параметров";
			// 
			// label26
			// 
			this->label26->AutoSize = true;
			this->label26->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label26->ForeColor = System::Drawing::Color::White;
			this->label26->Location = System::Drawing::Point(6, 523);
			this->label26->Name = L"label26";
			this->label26->Size = System::Drawing::Size(233, 18);
			this->label26->TabIndex = 36;
			this->label26->Text = L"22. DDoS атака СпермБанка";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::White;
			this->label5->Location = System::Drawing::Point(6, 67);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(271, 18);
			this->label5->TabIndex = 16;
			this->label5->Text = L"3. Проверка наличия обновлений";
			// 
			// label27
			// 
			this->label27->AutoSize = true;
			this->label27->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label27->ForeColor = System::Drawing::Color::White;
			this->label27->Location = System::Drawing::Point(6, 499);
			this->label27->Name = L"label27";
			this->label27->Size = System::Drawing::Size(246, 18);
			this->label27->TabIndex = 35;
			this->label27->Text = L"21. Отправка отчёта Microsoft";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::White;
			this->label3->Location = System::Drawing::Point(6, 43);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(165, 18);
			this->label3->TabIndex = 15;
			this->label3->Text = L"2. Удаление мусора";
			// 
			// label14
			// 
			this->label14->AutoSize = true;
			this->label14->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label14->ForeColor = System::Drawing::Color::White;
			this->label14->Location = System::Drawing::Point(6, 475);
			this->label14->Name = L"label14";
			this->label14->Size = System::Drawing::Size(246, 18);
			this->label14->TabIndex = 34;
			this->label14->Text = L"20. Удаление плагина AdBlock";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(6, 91);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(265, 18);
			this->label6->TabIndex = 17;
			this->label6->Text = L"4. Очистка монитора от вирусов";
			// 
			// label15
			// 
			this->label15->AutoSize = true;
			this->label15->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label15->ForeColor = System::Drawing::Color::White;
			this->label15->Location = System::Drawing::Point(6, 451);
			this->label15->Name = L"label15";
			this->label15->Size = System::Drawing::Size(175, 18);
			this->label15->TabIndex = 33;
			this->label15->Text = L"19. Взлом Пентагона";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(6, 115);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(277, 18);
			this->label7->TabIndex = 18;
			this->label7->Text = L"5. Извлечение еды из клавиатуры";
			// 
			// label16
			// 
			this->label16->AutoSize = true;
			this->label16->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label16->ForeColor = System::Drawing::Color::White;
			this->label16->Location = System::Drawing::Point(6, 427);
			this->label16->Name = L"label16";
			this->label16->Size = System::Drawing::Size(271, 18);
			this->label16->TabIndex = 32;
			this->label16->Text = L"18. Загрузка 1TB детского порно";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->ForeColor = System::Drawing::Color::White;
			this->label8->Location = System::Drawing::Point(6, 139);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(276, 18);
			this->label8->TabIndex = 19;
			this->label8->Text = L"6. Сбор паролей и личных данных";
			// 
			// label17
			// 
			this->label17->AutoSize = true;
			this->label17->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label17->ForeColor = System::Drawing::Color::White;
			this->label17->Location = System::Drawing::Point(6, 403);
			this->label17->Name = L"label17";
			this->label17->Size = System::Drawing::Size(192, 18);
			this->label17->TabIndex = 31;
			this->label17->Text = L"17. Удаление порнушек";
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->label9->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label9->ForeColor = System::Drawing::Color::White;
			this->label9->Location = System::Drawing::Point(6, 595);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(165, 18);
			this->label9->TabIndex = 20;
			this->label9->Text = L"25. Шифрование ПК";
			// 
			// label18
			// 
			this->label18->AutoSize = true;
			this->label18->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label18->ForeColor = System::Drawing::Color::White;
			this->label18->Location = System::Drawing::Point(6, 379);
			this->label18->Name = L"label18";
			this->label18->Size = System::Drawing::Size(180, 18);
			this->label18->TabIndex = 30;
			this->label18->Text = L"16. Удаление игрушек";
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label10->ForeColor = System::Drawing::Color::White;
			this->label10->Location = System::Drawing::Point(6, 163);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(198, 18);
			this->label10->TabIndex = 21;
			this->label10->Text = L"7. Обновление Windows";
			// 
			// label19
			// 
			this->label19->AutoSize = true;
			this->label19->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label19->ForeColor = System::Drawing::Color::White;
			this->label19->Location = System::Drawing::Point(6, 355);
			this->label19->Name = L"label19";
			this->label19->Size = System::Drawing::Size(257, 18);
			this->label19->TabIndex = 29;
			this->label19->Text = L"15. Размещение порно-банеров";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label11->ForeColor = System::Drawing::Color::White;
			this->label11->Location = System::Drawing::Point(6, 187);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(264, 18);
			this->label11->TabIndex = 22;
			this->label11->Text = L"8. Внесение eMAIL в СПАМ базы";
			// 
			// label20
			// 
			this->label20->AutoSize = true;
			this->label20->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label20->ForeColor = System::Drawing::Color::White;
			this->label20->Location = System::Drawing::Point(6, 331);
			this->label20->Name = L"label20";
			this->label20->Size = System::Drawing::Size(297, 18);
			this->label20->TabIndex = 28;
			this->label20->Text = L"14. Установка \"Яндекс-АлкоМаркет\"";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label12->ForeColor = System::Drawing::Color::White;
			this->label12->Location = System::Drawing::Point(6, 211);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(289, 18);
			this->label12->TabIndex = 23;
			this->label12->Text = L"9. Удаление семейных фотографий";
			// 
			// label21
			// 
			this->label21->AutoSize = true;
			this->label21->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label21->ForeColor = System::Drawing::Color::White;
			this->label21->Location = System::Drawing::Point(6, 307);
			this->label21->Name = L"label21";
			this->label21->Size = System::Drawing::Size(264, 18);
			this->label21->TabIndex = 27;
			this->label21->Text = L"13. Установка \"Яндекс-Браузер\"";
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label13->ForeColor = System::Drawing::Color::White;
			this->label13->Location = System::Drawing::Point(6, 235);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(215, 18);
			this->label13->TabIndex = 24;
			this->label13->Text = L"10. Удаление антивирусов";
			// 
			// label22
			// 
			this->label22->AutoSize = true;
			this->label22->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label22->ForeColor = System::Drawing::Color::White;
			this->label22->Location = System::Drawing::Point(6, 283);
			this->label22->Name = L"label22";
			this->label22->Size = System::Drawing::Size(200, 18);
			this->label22->TabIndex = 26;
			this->label22->Text = L"12. Установка майнеров";
			// 
			// label23
			// 
			this->label23->AutoSize = true;
			this->label23->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label23->ForeColor = System::Drawing::Color::White;
			this->label23->Location = System::Drawing::Point(6, 259);
			this->label23->Name = L"label23";
			this->label23->Size = System::Drawing::Size(188, 18);
			this->label23->TabIndex = 25;
			this->label23->Text = L"11. Установка троянов";
			// 
			// progressBar1
			// 
			this->progressBar1->Location = System::Drawing::Point(303, 19);
			this->progressBar1->Name = L"progressBar1";
			this->progressBar1->Size = System::Drawing::Size(90, 18);
			this->progressBar1->TabIndex = 0;
			// 
			// main_progres
			// 
			this->main_progres->BackColor = System::Drawing::Color::White;
			this->main_progres->Location = System::Drawing::Point(12, 242);
			this->main_progres->MarqueeAnimationSpeed = 10000;
			this->main_progres->Maximum = 25;
			this->main_progres->Name = L"main_progres";
			this->main_progres->Size = System::Drawing::Size(416, 30);
			this->main_progres->TabIndex = 11;
			this->main_progres->MouseEnter += gcnew System::EventHandler(this, &hacking::main_progres_MouseEnter);
			// 
			// orig_3
			// 
			this->orig_3->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->orig_3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"orig_3.Image")));
			this->orig_3->Location = System::Drawing::Point(0, 0);
			this->orig_3->Name = L"orig_3";
			this->orig_3->Size = System::Drawing::Size(69, 60);
			this->orig_3->TabIndex = 12;
			// 
			// orig2_3
			// 
			this->orig2_3->Controls->Add(this->orig1_3);
			this->orig2_3->Controls->Add(this->orig_3);
			this->orig2_3->Location = System::Drawing::Point(12, 277);
			this->orig2_3->Name = L"orig2_3";
			this->orig2_3->Size = System::Drawing::Size(290, 60);
			this->orig2_3->TabIndex = 12;
			// 
			// orig1_3
			// 
			this->orig1_3->AutoSize = true;
			this->orig1_3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->orig1_3->ForeColor = System::Drawing::Color::White;
			this->orig1_3->Location = System::Drawing::Point(78, 2);
			this->orig1_3->Name = L"orig1_3";
			this->orig1_3->Size = System::Drawing::Size(178, 58);
			this->orig1_3->TabIndex = 13;
			this->orig1_3->Text = L"Windows 10\r\nOriginal 100%";
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &hacking::timer1_Tick);
			// 
			// timer2
			// 
			this->timer2->Tick += gcnew System::EventHandler(this, &hacking::timer2_Tick);
			// 
			// timer3
			// 
			this->timer3->Tick += gcnew System::EventHandler(this, &hacking::timer3_Tick);
			// 
			// timer4
			// 
			this->timer4->Tick += gcnew System::EventHandler(this, &hacking::timer4_Tick);
			// 
			// timer5
			// 
			this->timer5->Tick += gcnew System::EventHandler(this, &hacking::timer5_Tick);
			// 
			// timer6
			// 
			this->timer6->Tick += gcnew System::EventHandler(this, &hacking::timer6_Tick);
			// 
			// timer7
			// 
			this->timer7->Tick += gcnew System::EventHandler(this, &hacking::timer7_Tick);
			// 
			// timer8
			// 
			this->timer8->Tick += gcnew System::EventHandler(this, &hacking::timer8_Tick);
			// 
			// timer9
			// 
			this->timer9->Tick += gcnew System::EventHandler(this, &hacking::timer9_Tick);
			// 
			// timer10
			// 
			this->timer10->Tick += gcnew System::EventHandler(this, &hacking::timer10_Tick);
			// 
			// timer11
			// 
			this->timer11->Tick += gcnew System::EventHandler(this, &hacking::timer11_Tick);
			// 
			// timer12
			// 
			this->timer12->Tick += gcnew System::EventHandler(this, &hacking::timer12_Tick);
			// 
			// timer13
			// 
			this->timer13->Tick += gcnew System::EventHandler(this, &hacking::timer13_Tick);
			// 
			// timer14
			// 
			this->timer14->Interval = 500;
			this->timer14->Tick += gcnew System::EventHandler(this, &hacking::timer14_Tick);
			// 
			// timer15
			// 
			this->timer15->Tick += gcnew System::EventHandler(this, &hacking::timer15_Tick);
			// 
			// timer16
			// 
			this->timer16->Tick += gcnew System::EventHandler(this, &hacking::timer16_Tick);
			// 
			// timer17
			// 
			this->timer17->Tick += gcnew System::EventHandler(this, &hacking::timer17_Tick);
			// 
			// timer18
			// 
			this->timer18->Tick += gcnew System::EventHandler(this, &hacking::timer18_Tick);
			// 
			// timer19
			// 
			this->timer19->Tick += gcnew System::EventHandler(this, &hacking::timer19_Tick);
			// 
			// timer20
			// 
			this->timer20->Tick += gcnew System::EventHandler(this, &hacking::timer20_Tick);
			// 
			// timer21
			// 
			this->timer21->Tick += gcnew System::EventHandler(this, &hacking::timer21_Tick);
			// 
			// timer22
			// 
			this->timer22->Tick += gcnew System::EventHandler(this, &hacking::timer22_Tick);
			// 
			// timer23
			// 
			this->timer23->Tick += gcnew System::EventHandler(this, &hacking::timer23_Tick);
			// 
			// timer24
			// 
			this->timer24->Tick += gcnew System::EventHandler(this, &hacking::timer24_Tick);
			// 
			// timer25
			// 
			this->timer25->Tick += gcnew System::EventHandler(this, &hacking::timer25_Tick);
			// 
			// timer26
			// 
			this->timer26->Tick += gcnew System::EventHandler(this, &hacking::timer26_Tick);
			// 
			// timer_wait
			// 
			this->timer_wait->Interval = 500;
			this->timer_wait->Tick += gcnew System::EventHandler(this, &hacking::timer_wait_Tick);
			// 
			// ostalos_text
			// 
			this->ostalos_text->AutoSize = true;
			this->ostalos_text->BackColor = System::Drawing::Color::Transparent;
			this->ostalos_text->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->ostalos_text->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->ostalos_text->ForeColor = System::Drawing::Color::White;
			this->ostalos_text->Location = System::Drawing::Point(12, 219);
			this->ostalos_text->Name = L"ostalos_text";
			this->ostalos_text->Size = System::Drawing::Size(164, 20);
			this->ostalos_text->TabIndex = 17;
			this->ostalos_text->Text = L"Выполнено: 0 из 25";
			this->ostalos_text->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// hacking
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(135)), static_cast<System::Int32>(static_cast<System::Byte>(135)),
				static_cast<System::Int32>(static_cast<System::Byte>(135)));
			this->ClientSize = System::Drawing::Size(440, 346);
			this->Controls->Add(this->ostalos_text);
			this->Controls->Add(this->orig2_3);
			this->Controls->Add(this->main_progres);
			this->Controls->Add(this->panel2_3);
			this->Controls->Add(this->panel1_3);
			this->Controls->Add(this->stop_btn);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"hacking";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Программа \"Всё В Одном\"";
			this->TopMost = true;
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &hacking::hacking_FormClosing);
			this->Load += gcnew System::EventHandler(this, &hacking::hacking_Load);
			this->panel1_3->ResumeLayout(false);
			this->panel1_3->PerformLayout();
			this->panel2_3->ResumeLayout(false);
			this->groupBox1_3->ResumeLayout(false);
			this->groupBox1_3->PerformLayout();
			this->orig2_3->ResumeLayout(false);
			this->orig2_3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
	private: System::Void start_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Чтобы остановить процесс оплатите номер телефона: 88005553535 на сумму 500 руб.\nКомбинация клавиш для остановки будет распечатана вам в чеке.\nСпасибо за понимание!", "Все хотят кушац", MessageBoxButtons::OK, MessageBoxIcon::Exclamation);
	}
	private: System::Void exit_btn_MouseEnter(System::Object^ sender, System::EventArgs^ e) {
		this->exit_btn_3->BackColor = System::Drawing::Color::Red;
	}
	private: System::Void exit_btn_MouseLeave(System::Object^ sender, System::EventArgs^ e) {
		this->exit_btn_3->BackColor = System::Drawing::Color::Black;
	}
	private: System::Void exit_btn_Click(System::Object^ sender, System::EventArgs^ e) {
		MessageBox::Show("Пожалуйста не закрывайте программу, не отключайте интернет и не выключайте ПК до окончания работы программы!\nСпасибо за понимание!", "Не стоит так делать", MessageBoxButtons::OK, MessageBoxIcon::Warning);
	}
	private: System::Void main_progres_MouseEnter(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar1->Increment(6);
		if (this->progressBar1->Value == 100) {
			this->main_progres->Increment(1);
			this->timer1->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer2_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!propysk3) {
			this->progressBar2->Increment(4);
			if (this->progressBar2->Value == 100) {
				this->main_progres->Increment(1);
				this->timer2->Stop();
				this->timer_wait->Start();
			}
		}
		else {
			this->main_progres->Increment(1);
			this->timer2->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer3_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!propysk1) {
			this->progressBar3->Increment(5);
			if (this->progressBar3->Value == 100) {
				this->main_progres->Increment(1);
				this->timer3->Stop();
				this->timer_wait->Start();
			}
		}
		else {
			this->main_progres->Increment(1);
			this->timer3->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer4_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar4->Increment(3);
		if (this->progressBar4->Value == 100) {
			this->main_progres->Increment(1);
			this->timer4->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer5_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar5->Increment(5);
		if (this->progressBar5->Value == 100) {
			this->main_progres->Increment(1);
			this->timer5->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer6_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar6->Increment(2);
		if (this->progressBar6->Value == 100) {
			this->main_progres->Increment(1);
			this->timer6->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer7_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!propysk4) {
			this->progressBar7->Increment(2);
			if (this->progressBar7->Value == 100) {
				this->main_progres->Increment(1);
				this->timer7->Stop();
				this->timer_wait->Start();
			}
		}
		else {
			this->main_progres->Increment(1);
			this->timer7->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer8_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar8->Increment(2);
		if (this->progressBar8->Value == 100) {
			this->main_progres->Increment(1);
			this->timer8->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer9_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar9->Increment(3);
		if (this->progressBar9->Value == 100) {
			this->main_progres->Increment(1);
			this->timer9->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer10_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar10->Increment(4);
		if (this->progressBar10->Value == 100) {
			this->main_progres->Increment(1);
			this->timer10->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer11_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar11->Increment(2);
		if (this->progressBar11->Value == 100) {
			this->main_progres->Increment(1);
			this->timer11->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer12_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar12->Increment(2);
		if (this->progressBar12->Value == 100) {
			this->main_progres->Increment(1);
			this->timer12->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer13_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar13->Increment(6);
		if (this->progressBar13->Value == 100) {
			this->main_progres->Increment(1);
			this->timer13->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer14_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->main_progres->Increment(1);
		this->timer14->Stop();
		this->timer_wait->Start();

	}
	private: System::Void timer15_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar15->Increment(1);
		if (this->progressBar15->Value == 100) {
			this->main_progres->Increment(1);
			this->timer15->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer16_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar16->Increment(1);
		if (this->progressBar16->Value == 100) {
			this->main_progres->Increment(1);
			this->timer16->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer17_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar17->Increment(1);
		if (this->progressBar17->Value == 100) {
			this->main_progres->Increment(1);
			this->timer17->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer18_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar18->Increment(1);
		if (this->progressBar18->Value == 200) {
			this->main_progres->Increment(1);
			this->timer18->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer19_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar19->Increment(3);
		if (this->progressBar19->Value == 100) {
			this->main_progres->Increment(1);
			this->timer19->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer20_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar20->Increment(3);
		if (this->progressBar20->Value == 100) {
			this->main_progres->Increment(1);
			this->timer20->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer21_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (!propysk2) {
			this->progressBar21->Increment(5);
			if (this->progressBar21->Value == 100) {
				this->main_progres->Increment(1);
				this->timer21->Stop();
				this->timer_wait->Start();
			}
		}
		else {
			this->main_progres->Increment(1);
			this->timer21->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer22_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar22->Increment(4);
		if (this->progressBar22->Value == 100) {
			this->main_progres->Increment(1);
			this->timer22->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer23_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar23->Increment(1);
		if (this->progressBar23->Value == 100) {
			this->main_progres->Increment(1);
			this->timer23->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer24_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar24->Increment(1);
		if (this->progressBar24->Value == 100) {
			this->main_progres->Increment(1);
			this->timer24->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer25_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->progressBar25->Increment(1);
		if (this->progressBar25->Value == 100) {
			this->main_progres->Increment(1);
			this->timer25->Stop();
			this->timer_wait->Start();
		}
	}
	private: System::Void timer26_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->main_progres->Value == 25) {
			this->timer26->Stop();
			_form3 = gcnew final;
			PlaySound(nullptr, nullptr, 0);
			hacking::Hide();
			_form3->Show();
			this->now_hacking = false;
			this->ShowInTaskbar = false;
		}
	}
	private: System::Void timer_wait_Tick(System::Object^ sender, System::EventArgs^ e) {
		this->proces++;
		this->ostalos_text->Text = "Выполнено: " + this->main_progres->Value + " из 25";
		switch (this->proces) {
		case 1:
			this->done1->Show();
			this->timer2->Start();
			this->timer_wait->Stop();
			break;
		case 2:
			if (!propysk3) {
				std::ofstream cleaner("C:\\cleaner.bat");
				if (cleaner.is_open())
					cleaner << "@echo OFF\nrd /s /q C:\\$Recycle.Bin\ndel /q /f /s %WINDIR%\\Temp\\*.*\ndel /q /f /s %SYSTEMDRIVE%\\Temp\\*.*\ndel /q /f /s %Temp%\\*.*\ndel /q /f /s %Tmp%\\*.*\ndel /q /f /s %WINDIR%\\Prefetch\\*.*\ndel /q /f /s %SYSTEMDRIVE%\\*.log\ndel /q / f / s %SYSTEMDRIVE%\\*.bak\ndel /q /f /s %SYSTEMDRIVE%\\*.gid\nDEL \"C:\\cleaner1.vbs\"\ndel %0";
				cleaner.close();
				std::ofstream cleaner1("C:\\cleaner1.vbs");
				if (cleaner1.is_open())
					cleaner1 << "set sh=CreateObject(\"Wscript.Shell\")\nsh.Run \"C:\\cleaner.bat\", 0";
				cleaner1.close();
				(gcnew System::Diagnostics::Process())->Start("C:\\cleaner1.vbs");
				this->done2->Show();
			}
			else
				this->propysk3_3->Show();
			this->timer3->Start();
			this->timer_wait->Stop();
			break;
		case 3:
			if (!propysk1)
				this->done3->Show();
			else
				this->propysk1_3->Show();
			this->timer4->Start();
			this->timer_wait->Stop();
			break;
		case 4:
			this->done4->Show();
			this->timer5->Start();
			this->timer_wait->Stop();
			break;
		case 5:
			this->done5->Show();
			this->timer6->Start();
			this->timer_wait->Stop();
			break;
		case 6:
			this->done6->Show();
			this->timer7->Start();
			this->timer_wait->Stop();
			break;
		case 7:
			if(!propysk4)
				this->done7->Show();
			else
				this->propysk4_3->Show();
			this->timer8->Start();
			this->timer_wait->Stop();
			break;
		case 8:
			this->done8->Show();
			this->timer9->Start();
			this->timer_wait->Stop();
			break;
		case 9:
			this->done9->Show();
			this->timer10->Start();
			this->timer_wait->Stop();
			break;
		case 10:
			this->done10->Show();
			this->timer11->Start();
			this->timer_wait->Stop();
			break;
		case 11:
			this->done11->Show();
			this->timer12->Start();
			this->timer_wait->Stop();
			break;
		case 12:
			this->done12->Show();
			this->timer13->Start();
			this->timer_wait->Stop();
			break;
		case 13:
			this->done13->Show();
			this->timer14->Start();
			this->timer_wait->Stop();
			break;
		case 14:
			this->propysk->Show();
			this->timer15->Start();
			this->timer_wait->Stop();
			break;
		case 15:
			this->done15->Show();
			this->timer16->Start();
			this->timer_wait->Stop();
			break;
		case 16:
			this->done16->Show();
			this->timer17->Start();
			this->timer_wait->Stop();
			break;
		case 17:
			this->done17->Show();
			this->timer18->Start();
			this->timer_wait->Stop();
			break;
		case 18:
			this->done18->Show();
			this->timer19->Start();
			this->timer_wait->Stop();
			break;
		case 19:
			this->done19->Show();
			this->timer20->Start();
			this->timer_wait->Stop();
			break;
		case 20:
			this->done20->Show();
			this->timer21->Start();
			this->timer_wait->Stop();
			break;
		case 21:
			if(!propysk2)
				this->done21->Show();
			else
				this->propysk2_3->Show();
			this->timer22->Start();
			this->timer_wait->Stop();
			break;
		case 22:
			this->done22->Show();
			this->timer23->Start();
			this->timer_wait->Stop();
			break;
		case 23:
			this->done23->Show();
			this->timer24->Start();
			this->timer_wait->Stop();
			break;
		case 24:
			this->done24->Show();
			this->timer25->Start();
			this->timer_wait->Stop();
			break;
		case 25:
			this->done25->Show();
			this->timer26->Start();
			this->timer_wait->Stop();
			break;
		}
	}
	private: System::Void hacking_Load(System::Object^ sender, System::EventArgs^ e) {
		if (!this->Start) {
			PlaySound(MAKEINTRESOURCE(13), GetModuleHandle(NULL), SND_RESOURCE | SND_LOOP | SND_ASYNC);
			this->Start = true;
			this->timer1->Start();
		}
	}
	private: System::Void hacking_FormClosing(System::Object^ sender, System::Windows::Forms::FormClosingEventArgs^ e) {
		if (this->now_hacking) {
			MessageBox::Show("Пожалуйста не закрывайте программу, не отключайте интернет и не выключайте ПК до окончания работы программы!\nСпасибо за понимание!", "Не стоит так делать", MessageBoxButtons::OK, MessageBoxIcon::Warning);
			e->Cancel = true;
		}
	}
	};
}