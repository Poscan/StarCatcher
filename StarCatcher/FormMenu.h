#pragma once
#include "BelbinTest.h"
#include "UngTest.h"

namespace StarCatcher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для FormMenu
	/// </summary>
	public ref class FormMenu : public System::Windows::Forms::Form
	{
	public:
		FormMenu(void)
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
		~FormMenu()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private: System::Windows::Forms::Label^ Belbin;
	private: System::Windows::Forms::Label^ Ung;
	private: System::Windows::Forms::Label^ Close;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Panel^ panel6;

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(FormMenu::typeid));
			this->Belbin = (gcnew System::Windows::Forms::Label());
			this->Ung = (gcnew System::Windows::Forms::Label());
			this->Close = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->panel5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// Belbin
			// 
			this->Belbin->AutoSize = true;
			this->Belbin->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Belbin->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Belbin->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->Belbin->Location = System::Drawing::Point(120, 120);
			this->Belbin->Name = L"Belbin";
			this->Belbin->Size = System::Drawing::Size(100, 17);
			this->Belbin->TabIndex = 1;
			this->Belbin->Text = L"Тест Белбина";
			this->Belbin->Click += gcnew System::EventHandler(this, &FormMenu::Belbin_Click);
			// 
			// Ung
			// 
			this->Ung->AutoSize = true;
			this->Ung->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Ung->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Ung->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->Ung->Location = System::Drawing::Point(130, 151);
			this->Ung->Name = L"Ung";
			this->Ung->Size = System::Drawing::Size(78, 17);
			this->Ung->TabIndex = 2;
			this->Ung->Text = L"Тест Юнга";
			this->Ung->Click += gcnew System::EventHandler(this, &FormMenu::Ung_Click);
			// 
			// Close
			// 
			this->Close->AutoSize = true;
			this->Close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Close->Dock = System::Windows::Forms::DockStyle::Right;
			this->Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Close->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->Close->Location = System::Drawing::Point(310, 0);
			this->Close->Name = L"Close";
			this->Close->Padding = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->Close->Size = System::Drawing::Size(21, 20);
			this->Close->TabIndex = 0;
			this->Close->Text = L"X";
			this->Close->Click += gcnew System::EventHandler(this, &FormMenu::Close_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(333, 1);
			this->panel1->TabIndex = 3;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel2->Location = System::Drawing::Point(0, 325);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(333, 1);
			this->panel2->TabIndex = 4;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel3->Location = System::Drawing::Point(0, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1, 324);
			this->panel3->TabIndex = 5;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel4->Location = System::Drawing::Point(332, 1);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1, 324);
			this->panel4->TabIndex = 6;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->panel5->Controls->Add(this->Close);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(1, 1);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(331, 23);
			this->panel5->TabIndex = 7;
			this->panel5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &FormMenu::Pos_MouseDown);
			this->panel5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &FormMenu::Pos_MouseMove);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(44, 31);
			this->pictureBox1->Margin = System::Windows::Forms::Padding(300, 30, 30, 30);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(250, 59);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(171)));
			this->panel6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel6->Location = System::Drawing::Point(1, 288);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(331, 37);
			this->panel6->TabIndex = 8;
			// 
			// FormMenu
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(248)));
			this->ClientSize = System::Drawing::Size(333, 326);
			this->Controls->Add(this->Belbin);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Ung);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"FormMenu";
			this->Text = L"FormMenu";
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Close_Click(System::Object^ sender, System::EventArgs^ e) {
		if(((MouseEventArgs^)e)->Button == System::Windows::Forms::MouseButtons::Left)
			Application::Exit();
	}
	private: System::Void Pos_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->Left += e->X - lastPoint->X;
			this->Top += e->Y - lastPoint->Y;
		}
	}
	private: System::Void Pos_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lastPoint = new Point(e->X, e->Y);
	}

	private:
		Point* lastPoint;
	private: System::Void Belbin_Click(System::Object^ sender, System::EventArgs^ e) {
		if (((MouseEventArgs^)e)->Button == System::Windows::Forms::MouseButtons::Left) {
			this->Hide();
			BelbinTest^ frm = gcnew BelbinTest();
			frm->ShowDialog();
		}
	}
	private: System::Void Ung_Click(System::Object^ sender, System::EventArgs^ e) {
		if (((MouseEventArgs^)e)->Button == System::Windows::Forms::MouseButtons::Left) {
			this->Hide();
			UngTest^ frm = gcnew UngTest();
			frm->ShowDialog();
		}
	}
};
}
