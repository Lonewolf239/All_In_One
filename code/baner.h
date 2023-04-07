#pragma once

namespace solver {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для baner
	/// </summary>
	public ref class baner : public System::Windows::Forms::Form
	{
	public:
		baner(void)
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
	private: bool loading = true;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(baner::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 72, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(0, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(896, 108);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Загрузка баннера |";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->label1->UseWaitCursor = true;
			// 
			// timer1
			// 
			this->timer1->Interval = 500;
			this->timer1->Tick += gcnew System::EventHandler(this, &baner::timer1_Tick);
			// 
			// baner
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(896, 108);
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
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void baner_Load(System::Object^ sender, System::EventArgs^ e) {
		this->timer1->Start();
	}
	private: System::Void timer1_Tick(System::Object^ sender, System::EventArgs^ e) {
		if (this->loading && num < 46) {
			if (this->stat == 0)
				this->label1->Text = "Загрузка баннера |";
			else if (this->stat == 1)
				this->label1->Text = "Загрузка баннера /";
			else if (this->stat == 2) {
				this->ClientSize = System::Drawing::Size(927, 108);
				this->label1->Text = "Загрузка баннера —";
			}
			else if (this->stat == 3) {
				this->ClientSize = System::Drawing::Size(896, 108);
				this->label1->Text = "Загрузка баннера \\";
			}
			else if (this->stat == 4)
				this->label1->Text = "Загрузка баннера |";
			else if (this->stat == 5)
				this->label1->Text = "Загрузка баннера /";
			else if (this->stat == 6) {
				this->ClientSize = System::Drawing::Size(927, 108);
				this->label1->Text = "Загрузка баннера —";
			}
			else if (this->stat == 7) {
				this->ClientSize = System::Drawing::Size(896, 108);
				this->label1->Text = "Загрузка баннера \\";
			}
			else
				this->stat = -1;
		}
		else {
			this->label1->Hide();
			this->ClientSize = System::Drawing::Size(1920, 125);
		}
		this->stat++;
		this->num++;
	}
	private: System::Void baner_Click(System::Object^ sender, System::EventArgs^ e) {
		(gcnew System::Diagnostics::Process())->Start("https://www.maledigital.com/en/?s=1");
	}
};
}
