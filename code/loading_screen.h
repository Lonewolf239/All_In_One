#include "main.h"

namespace solver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для loading_screen
	/// </summary>
	public ref class loading_screen : public System::Windows::Forms::Form
	{
	public:
		loading_screen(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Timer^ timer1;
	private: bool first_draw = true;
	protected: Point lastLocation, first_location;
	public:
	private: main^ _form1;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~loading_screen()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(loading_screen::typeid));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->InitialImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.InitialImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(640, 400);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &loading_screen::pictureBox1_MouseDown);
			this->pictureBox1->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &loading_screen::pictureBox1_MouseMove);
			this->pictureBox1->MouseUp += gcnew System::Windows::Forms::MouseEventHandler(this, &loading_screen::pictureBox1_MouseUp);
			// 
			// timer1
			// 
			this->timer1->Interval = 6250;
			this->timer1->Tick += gcnew System::EventHandler(this, &loading_screen::timer1_Tick);
			// 
			// loading_screen
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(640, 400);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"loading_screen";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Программа \"Всё В Одном\"";
			this->Load += gcnew System::EventHandler(this, &loading_screen::loading_screen_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
	private: System::Void loading_screen_Load(System::Object^ sender, System::EventArgs^ e) {
		_form1 = gcnew main;
		_form1->ShowInTaskbar = false;
		PlaySound(MAKEINTRESOURCE(18), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
		this->timer1->Start();
		_form1->Show();
		this->first_location = _form1->Location;
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		loading_screen::Hide();
		_form1->Location = this->first_location;
		_form1->ShowInTaskbar = true;
		PlaySound(nullptr, nullptr, 0);
		this->timer1->Stop();
	}
	private: System::Void pictureBox1_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left)
			lastLocation = e->Location;
	}
	private: System::Void pictureBox1_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->pictureBox1->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->Location = Point(
				this->Location.X + e->X - lastLocation.X,
				this->Location.Y + e->Y - lastLocation.Y);
			_form1->Location = Point(
				_form1->Location.X + e->X - lastLocation.X,
				_form1->Location.Y + e->Y - lastLocation.Y);
		}
	}
	private: System::Void pictureBox1_MouseUp(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		this->pictureBox1->Cursor = System::Windows::Forms::Cursors::Default;
	}
	};
}