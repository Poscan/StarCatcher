#pragma once
#include <Windows.h>
#include <iostream>
#include "Rezult.h"

namespace StarCatcher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	

	/// <summary>
	/// ������ ��� BelbinTest
	/// </summary>
	public ref class BelbinTest : public System::Windows::Forms::Form
	{
	public:
		//int** Rezult;
		DataTable^ dt;
		BelbinTest(void)
		{
			//Rezult = new int*[7];
			//for (int i = 0; i < 7; i++) Rezult[i] = new int[8];
			//for (int i = 0; i < 7; i++) for (int j = 0; j < 8; j++) Rezult[i][j] = 0;
			InitializeComponent();
			dt = gcnew DataTable();
			dt->Columns->Add("�����������");
			dt->Columns->Add("������");
			dt->Columns->Add("��������� ����");
			dt->Columns->Add("�������");
			dt->Columns->Add("��������");
			dt->Columns->Add("�������������");
			dt->Columns->Add("������������");
			dt->Columns->Add("����������");
			Rezl = gcnew Rezult();
			this->Quest = 0;
			MessageBox::Show("���� ������� ����� �����, ���������� ������������ 10 ������ ����� 8-��� �������������. ������� ��� ��������� 7 ��� ��� ������ �����������. �� ��������� ����������� ����� ����� ���������� ���� ���� � �������, ���������� ����� ���� ��������� ����: ����������, �����������, ������, ��������� ����, �������������, �������, �������� � �����������. ", "�������");
			QuestOne();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~BelbinTest()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:

	private: System::Windows::Forms::Label^ Ques1;
	private: System::Windows::Forms::Label^ Ques2;
	private: System::Windows::Forms::Label^ Ques3;
	private: System::Windows::Forms::Label^ Ques4;

	private: System::Windows::Forms::Label^ Ques5;
	private: System::Windows::Forms::Label^ Ques6;
	private: System::Windows::Forms::Label^ Ques7;
	private: System::Windows::Forms::Label^ Ques8;
	private: System::Windows::Forms::Button^ Next;
	private: System::Windows::Forms::Button^ Prev;
	private: System::Windows::Forms::Label^ Title;
	private: System::Windows::Forms::NumericUpDown^ Rez1;
	private: System::Windows::Forms::NumericUpDown^ Rez2;
	private: System::Windows::Forms::NumericUpDown^ Rez3;
	private: System::Windows::Forms::NumericUpDown^ Rez4;
	private: System::Windows::Forms::NumericUpDown^ Rez5;
	private: System::Windows::Forms::NumericUpDown^ Rez6;
	private: System::Windows::Forms::NumericUpDown^ Rez7;
	private: System::Windows::Forms::NumericUpDown^ Rez8;


	private: System::Windows::Forms::Label^ Close;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ Pos;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::DataGridView^ TableRez;










	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->Ques1 = (gcnew System::Windows::Forms::Label());
			this->Ques2 = (gcnew System::Windows::Forms::Label());
			this->Ques3 = (gcnew System::Windows::Forms::Label());
			this->Ques4 = (gcnew System::Windows::Forms::Label());
			this->Ques5 = (gcnew System::Windows::Forms::Label());
			this->Ques6 = (gcnew System::Windows::Forms::Label());
			this->Ques7 = (gcnew System::Windows::Forms::Label());
			this->Ques8 = (gcnew System::Windows::Forms::Label());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->Prev = (gcnew System::Windows::Forms::Button());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->Rez1 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Rez2 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Rez3 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Rez4 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Rez5 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Rez6 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Rez7 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Rez8 = (gcnew System::Windows::Forms::NumericUpDown());
			this->Close = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->Pos = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->TableRez = (gcnew System::Windows::Forms::DataGridView());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez8))->BeginInit();
			this->Pos->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableRez))->BeginInit();
			this->SuspendLayout();
			// 
			// Ques1
			// 
			this->Ques1->AutoSize = true;
			this->Ques1->Location = System::Drawing::Point(30, 75);
			this->Ques1->Name = L"Ques1";
			this->Ques1->Size = System::Drawing::Size(35, 13);
			this->Ques1->TabIndex = 1;
			this->Ques1->Text = L"label1";
			// 
			// Ques2
			// 
			this->Ques2->AutoSize = true;
			this->Ques2->Location = System::Drawing::Point(30, 101);
			this->Ques2->Name = L"Ques2";
			this->Ques2->Size = System::Drawing::Size(35, 13);
			this->Ques2->TabIndex = 2;
			this->Ques2->Text = L"label1";
			// 
			// Ques3
			// 
			this->Ques3->AutoSize = true;
			this->Ques3->Location = System::Drawing::Point(30, 127);
			this->Ques3->Name = L"Ques3";
			this->Ques3->Size = System::Drawing::Size(35, 13);
			this->Ques3->TabIndex = 3;
			this->Ques3->Text = L"label1";
			// 
			// Ques4
			// 
			this->Ques4->AutoSize = true;
			this->Ques4->Location = System::Drawing::Point(30, 153);
			this->Ques4->Name = L"Ques4";
			this->Ques4->Size = System::Drawing::Size(35, 13);
			this->Ques4->TabIndex = 4;
			this->Ques4->Text = L"label1";
			// 
			// Ques5
			// 
			this->Ques5->AutoSize = true;
			this->Ques5->Location = System::Drawing::Point(30, 179);
			this->Ques5->Name = L"Ques5";
			this->Ques5->Size = System::Drawing::Size(35, 13);
			this->Ques5->TabIndex = 5;
			this->Ques5->Text = L"label1";
			// 
			// Ques6
			// 
			this->Ques6->AutoSize = true;
			this->Ques6->Location = System::Drawing::Point(30, 205);
			this->Ques6->Name = L"Ques6";
			this->Ques6->Size = System::Drawing::Size(35, 13);
			this->Ques6->TabIndex = 6;
			this->Ques6->Text = L"label1";
			// 
			// Ques7
			// 
			this->Ques7->AutoSize = true;
			this->Ques7->Location = System::Drawing::Point(30, 231);
			this->Ques7->Name = L"Ques7";
			this->Ques7->Size = System::Drawing::Size(35, 13);
			this->Ques7->TabIndex = 7;
			this->Ques7->Text = L"label1";
			// 
			// Ques8
			// 
			this->Ques8->AutoSize = true;
			this->Ques8->Location = System::Drawing::Point(30, 257);
			this->Ques8->Name = L"Ques8";
			this->Ques8->Size = System::Drawing::Size(35, 13);
			this->Ques8->TabIndex = 8;
			this->Ques8->Text = L"label1";
			// 
			// Next
			// 
			this->Next->Location = System::Drawing::Point(554, 284);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(75, 23);
			this->Next->TabIndex = 9;
			this->Next->Text = L"�����";
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &BelbinTest::Next_Click);
			// 
			// Prev
			// 
			this->Prev->Location = System::Drawing::Point(473, 284);
			this->Prev->Name = L"Prev";
			this->Prev->Size = System::Drawing::Size(75, 23);
			this->Prev->TabIndex = 10;
			this->Prev->Text = L"�����";
			this->Prev->UseVisualStyleBackColor = true;
			this->Prev->Visible = false;
			this->Prev->Click += gcnew System::EventHandler(this, &BelbinTest::Prev_Click);
			// 
			// Title
			// 
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title->Location = System::Drawing::Point(33, 38);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(41, 13);
			this->Title->TabIndex = 11;
			this->Title->Text = L"label1";
			// 
			// Rez1
			// 
			this->Rez1->Location = System::Drawing::Point(591, 75);
			this->Rez1->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Rez1->Name = L"Rez1";
			this->Rez1->Size = System::Drawing::Size(37, 20);
			this->Rez1->TabIndex = 12;
			this->Rez1->ValueChanged += gcnew System::EventHandler(this, &BelbinTest::Rez1_ValueChanged);
			// 
			// Rez2
			// 
			this->Rez2->Location = System::Drawing::Point(591, 101);
			this->Rez2->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Rez2->Name = L"Rez2";
			this->Rez2->Size = System::Drawing::Size(37, 20);
			this->Rez2->TabIndex = 13;
			this->Rez2->ValueChanged += gcnew System::EventHandler(this, &BelbinTest::Rez2_ValueChanged);
			// 
			// Rez3
			// 
			this->Rez3->Location = System::Drawing::Point(591, 127);
			this->Rez3->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Rez3->Name = L"Rez3";
			this->Rez3->Size = System::Drawing::Size(37, 20);
			this->Rez3->TabIndex = 14;
			this->Rez3->ValueChanged += gcnew System::EventHandler(this, &BelbinTest::Rez3_ValueChanged);
			// 
			// Rez4
			// 
			this->Rez4->Location = System::Drawing::Point(591, 153);
			this->Rez4->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Rez4->Name = L"Rez4";
			this->Rez4->Size = System::Drawing::Size(37, 20);
			this->Rez4->TabIndex = 15;
			this->Rez4->ValueChanged += gcnew System::EventHandler(this, &BelbinTest::Rez4_ValueChanged);
			// 
			// Rez5
			// 
			this->Rez5->Location = System::Drawing::Point(591, 179);
			this->Rez5->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Rez5->Name = L"Rez5";
			this->Rez5->Size = System::Drawing::Size(37, 20);
			this->Rez5->TabIndex = 16;
			this->Rez5->ValueChanged += gcnew System::EventHandler(this, &BelbinTest::Rez5_ValueChanged);
			// 
			// Rez6
			// 
			this->Rez6->Location = System::Drawing::Point(591, 205);
			this->Rez6->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Rez6->Name = L"Rez6";
			this->Rez6->Size = System::Drawing::Size(37, 20);
			this->Rez6->TabIndex = 17;
			this->Rez6->ValueChanged += gcnew System::EventHandler(this, &BelbinTest::Rez6_ValueChanged);
			// 
			// Rez7
			// 
			this->Rez7->Location = System::Drawing::Point(591, 231);
			this->Rez7->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Rez7->Name = L"Rez7";
			this->Rez7->Size = System::Drawing::Size(37, 20);
			this->Rez7->TabIndex = 18;
			this->Rez7->ValueChanged += gcnew System::EventHandler(this, &BelbinTest::Rez7_ValueChanged);
			// 
			// Rez8
			// 
			this->Rez8->Location = System::Drawing::Point(591, 257);
			this->Rez8->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 10, 0, 0, 0 });
			this->Rez8->Name = L"Rez8";
			this->Rez8->Size = System::Drawing::Size(37, 20);
			this->Rez8->TabIndex = 19;
			this->Rez8->ValueChanged += gcnew System::EventHandler(this, &BelbinTest::Rez8_ValueChanged);
			// 
			// Close
			// 
			this->Close->AutoSize = true;
			this->Close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Close->Location = System::Drawing::Point(617, 3);
			this->Close->Margin = System::Windows::Forms::Padding(3, 3, 3, 0);
			this->Close->Name = L"Close";
			this->Close->Padding = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->Close->Size = System::Drawing::Size(21, 20);
			this->Close->TabIndex = 0;
			this->Close->Text = L"X";
			this->Close->Click += gcnew System::EventHandler(this, &BelbinTest::Close_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(596, 3);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->label1->Size = System::Drawing::Size(15, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"!";
			this->label1->Click += gcnew System::EventHandler(this, &BelbinTest::label1_Click);
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel2->Location = System::Drawing::Point(0, 0);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(643, 1);
			this->panel2->TabIndex = 21;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel3->Location = System::Drawing::Point(0, 337);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(643, 1);
			this->panel3->TabIndex = 22;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel4->Location = System::Drawing::Point(0, 1);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(1, 336);
			this->panel4->TabIndex = 23;
			// 
			// panel5
			// 
			this->panel5->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel5->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel5->Location = System::Drawing::Point(642, 1);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(1, 336);
			this->panel5->TabIndex = 24;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel1->Location = System::Drawing::Point(1, 313);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(641, 24);
			this->panel1->TabIndex = 25;
			// 
			// Pos
			// 
			this->Pos->Controls->Add(this->label2);
			this->Pos->Controls->Add(this->Close);
			this->Pos->Controls->Add(this->label1);
			this->Pos->Dock = System::Windows::Forms::DockStyle::Top;
			this->Pos->Location = System::Drawing::Point(1, 1);
			this->Pos->Name = L"Pos";
			this->Pos->Size = System::Drawing::Size(641, 34);
			this->Pos->TabIndex = 26;
			this->Pos->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &BelbinTest::Pos_MouseDown);
			this->Pos->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &BelbinTest::Pos_MouseMove);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(11, 3);
			this->label2->Name = L"label2";
			this->label2->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->label2->Size = System::Drawing::Size(112, 20);
			this->label2->TabIndex = 2;
			this->label2->Text = L"���� �������";
			// 
			// TableRez
			// 
			this->TableRez->AllowUserToAddRows = false;
			this->TableRez->AllowUserToDeleteRows = false;
			this->TableRez->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::ColumnHeader;
			this->TableRez->AutoSizeRowsMode = System::Windows::Forms::DataGridViewAutoSizeRowsMode::AllHeaders;
			this->TableRez->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->TableRez->Location = System::Drawing::Point(12, 38);
			this->TableRez->Name = L"TableRez";
			this->TableRez->ReadOnly = true;
			this->TableRez->ShowCellErrors = false;
			this->TableRez->ShowEditingIcon = false;
			this->TableRez->ShowRowErrors = false;
			this->TableRez->Size = System::Drawing::Size(619, 269);
			this->TableRez->TabIndex = 27;
			this->TableRez->Visible = false;
			// 
			// BelbinTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(643, 338);
			this->Controls->Add(this->TableRez);
			this->Controls->Add(this->Pos);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->Rez8);
			this->Controls->Add(this->Rez7);
			this->Controls->Add(this->Rez6);
			this->Controls->Add(this->Rez5);
			this->Controls->Add(this->Rez4);
			this->Controls->Add(this->Rez3);
			this->Controls->Add(this->Rez2);
			this->Controls->Add(this->Rez1);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->Prev);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->Ques8);
			this->Controls->Add(this->Ques7);
			this->Controls->Add(this->Ques6);
			this->Controls->Add(this->Ques5);
			this->Controls->Add(this->Ques4);
			this->Controls->Add(this->Ques3);
			this->Controls->Add(this->Ques2);
			this->Controls->Add(this->Ques1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"BelbinTest";
			this->Text = L"BelbinTest";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Rez8))->EndInit();
			this->Pos->ResumeLayout(false);
			this->Pos->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->TableRez))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		private:
			System::Void QuestOne() {
				Title->Text = "���� 1. ����� ����� � ���� ������ � ������ �������:";
				Ques1->Text = "1. � �����, ��� �������� ������ �������� ����� ����������� � ��������� �� ��� ������.";
				Ques2->Text = "2. � ���� ������� �������� � ������ ������� ������.";
				Ques3->Text = "3. ��������� ���� � �� ���������� �����������.";
				Ques4->Text = "4. ���� ������������ �������� ������ �������� �����, ��������� �������� ������ �������.";
				Ques5->Text = "5. ��� ����������� �������� �� �� ����� �� ������ ���������� ��� ����������������\n" +
					"�������������.";
				Ques6->Text = "6. � ����� ��������� ��������� ��������������, ���� ����, ��� ��� �������� �������� � ��������" +
					"\n����� �������� ����������.";
				Ques7->Text = "7. � ������ �������, ��� ��������� � ������ ��������, ���� � �������� �������� � ��� �������.";
				Ques8->Text = "8. ������ ����������� � ������������� �� ������ ��� �������� � ���������� ������������\n" +
					"�������������� ��������.";
				Rez1->Value = Rezl->rez[0][0];
				Rez2->Value = Rezl->rez[0][1];
				Rez3->Value = Rezl->rez[0][2];
				Rez4->Value = Rezl->rez[0][3];
				Rez5->Value = Rezl->rez[0][4];
				Rez6->Value = Rezl->rez[0][5];
				Rez7->Value = Rezl->rez[0][6];
				Rez8->Value = Rezl->rez[0][7];
				Prev->Visible = false;
				if (Rezl->Sum(Quest) == 10) {
					Next->Enabled = true;
				}
				else {
					Next->Enabled = false;
				}
			}

			System::Void QuestTwo() {
				Title->Text = "���� 2. ��� ����������, ������� ����� ���������� � ��������� ������:";
				Ques1->Text = "1. � �������� ���� ���������� �� ���������, ���� ����������� ������ �������� ��� � ��������" +
					"\n�� � �����������.";
				Ques2->Text = "2. � ������� ���� ������� ������������ � �����, ������� ���������� ����� ������, �� ��\n" +
					"������������� � �������.";
				Ques3->Text = "3. � ������� ������� ����� ��������, ����� � ������ ����������� ����� ����.";
				Ques4->Text = "4. ���������� ���� ���������������� � �� ������� ������ � � ����������� �������������� �\n" +
					"������ ������.";
				Ques5->Text = "5. � ������ ������� ������������ � ����������, ����� �������� ������������� ������� ����-��.";
				Ques6->Text = "6. ��� ������ ������� ����� �� �����, ��������� � ������� ��������� ������� ���������,\n" +
					"������� � ������.";
				Ques7->Text = "7. � ������� �������� ������, ������� ��� �������� � ������, � ������� ����� ����� �� ���,\n" +
					"��� ���������� ������.";
				Ques8->Text = "8. ��� ������� �������, ��� � ������� ����� �������� ������ ������� � ��������� ���������� �" +
					"\n���, ��� ���� ���� �����������.";
				Rez1->Value = Rezl->rez[1][0];
				Rez2->Value = Rezl->rez[1][1];
				Rez3->Value = Rezl->rez[1][2];
				Rez4->Value = Rezl->rez[1][3];
				Rez5->Value = Rezl->rez[1][4];
				Rez6->Value = Rezl->rez[1][5];
				Rez7->Value = Rezl->rez[1][6];
				Rez8->Value = Rezl->rez[1][7];
				Prev->Visible = true;
				if (Rezl->Sum(Quest) == 10) {
					Next->Enabled = true;
				}
				else {
					Next->Enabled = false;
				}
			}

			System::Void QuestThree() {
				Title->Text = "���� 3. ������� � ���������� �������:";
				Ques1->Text = "1. � ���� ������ �� �����, �� �������� �� ��� ��������.";
				Ques2->Text = "2. ���������� ���������������� ������������ ���� �� ������, ����������� ��-�� ����������������.";
				Ques3->Text = "3. � ����� ������� ��������, ����� ��������� �� ������������ � ������ ����� ������� � ��\n" +
					"�������� �� ���� �������� ���� ����������.";
				Ques4->Text = "4. ����� ������������ �� ����������� �� ���� ������������ �����������.";
				Ques5->Text = "5. � ������ ����� ���������� ����� �����������, ���� ��� ������ ����� ���������.";
				Ques6->Text = "6. � ��������� ��� ����� ����� ���� � ���������� ���������.";
				Ques7->Text = "7. � �������, ��� ��� ����������� �������� ��������������� �������� ��������� �����, ���\n" + 
					"���� �����.";
				Ques8->Text = "8. �� ���� ����� ��������� ����������� ������� �� ���, ����� �������� ������������ ������\n" +
					"���� ������������ ������� �������.";
				Rez1->Value = Rezl->rez[2][0];
				Rez2->Value = Rezl->rez[2][1];
				Rez3->Value = Rezl->rez[2][2];
				Rez4->Value = Rezl->rez[2][3];
				Rez5->Value = Rezl->rez[2][4];
				Rez6->Value = Rezl->rez[2][5];
				Rez7->Value = Rezl->rez[2][6];
				Rez8->Value = Rezl->rez[2][7];
				Prev->Visible = true;
				if (Rezl->Sum(Quest) == 10) {
					Next->Enabled = true;
				}
				else {
					Next->Enabled = false;
				}
			}

			System::Void QuestFour() {
				Title->Text = "���� 4. ����������� ����� ����� ������ � �������:";
				Ques1->Text = "1. � ��������� �������� ����� ������ ����� ������.";
				Ques2->Text = "2. � �������� �������� ����� �������� � �� ����� ��� ���� � �����������.";
				Ques3->Text = "3. � ������ ������ ������ ������������ ������ ������ �����������.";
				Ques4->Text = "4. � �������, ��� ������� �������� ������ ������������ ���������� ���������� ������.";
				Ques5->Text = "5. � ������� ������������ �������� ��������� ������� � ���� �������� �����������.";
				Ques6->Text = "6. � ��������� �������� ������������ ��� ���������� ����� ���� � ��������� ������.";
				Ques7->Text = "7. � ���� ������������� �������� � ������� ���������� �������.";
				Ques8->Text = "8. � �������� ������������ ����� ������������� ������, �� ��� ��������� ���������� ������\n" +
					"����������� ����� �������� �������.";
				Rez1->Value = Rezl->rez[3][0];
				Rez2->Value = Rezl->rez[3][1];
				Rez3->Value = Rezl->rez[3][2];
				Rez4->Value = Rezl->rez[3][3];
				Rez5->Value = Rezl->rez[3][4];
				Rez6->Value = Rezl->rez[3][5];
				Rez7->Value = Rezl->rez[3][6];
				Rez8->Value = Rezl->rez[3][7];
				Prev->Visible = true;
				if (Rezl->Sum(Quest) == 10) {
					Next->Enabled = true;
				}
				else {
					Next->Enabled = false;
				}
			}

			System::Void QuestFive() {
				Title->Text = "���� 5. � ������� �������������� �� ������, ������ ���:";
				Ques1->Text = "1. ��� ���������� ������������ ������ �������� � ����������� ���� ������.";
				Ques2->Text = "2. ��� �������� �������� ������������ ������� �������.";
				Ques3->Text = "3. ��� ��������� ���������, ��� � ������ ������� ������� ���������������.";
				Ques4->Text = "4. � �������� ��������� ������� ������� �� �������� �������.";
				Ques5->Text = "5. � ������� ����������� ����������� � ������, ���������� ���������� ���-�� ����� ��� ����.";
				Ques6->Text = "6. � �������� �������� �������� ����� �� ���������� ������������ ����� ��������.";
				Ques7->Text = "7. � �������� ���� � ����� ������, ����� ���� ������� ������ ��� ��� ��������.";
				Ques8->Text = "8. ��� �������� �������� ������, ��������� ���������� �����������.";
				Rez1->Value = Rezl->rez[4][0];
				Rez2->Value = Rezl->rez[4][1];
				Rez3->Value = Rezl->rez[4][2];
				Rez4->Value = Rezl->rez[4][3];
				Rez5->Value = Rezl->rez[4][4];
				Rez6->Value = Rezl->rez[4][5];
				Rez7->Value = Rezl->rez[4][6];
				Rez8->Value = Rezl->rez[4][7];
				Prev->Visible = true;
				if (Rezl->Sum(Quest) == 10) {
					Next->Enabled = true;
				}
				else {
					Next->Enabled = false;
				}
			}

			System::Void QuestSix() {
				Title->Text = "���� 6. ���� ��� ���������� ��������� ������ ������� ������ �� ������������ ����� �\n" +
					"����������� ������, ��:";
				Ques1->Text = "1. � �� ������������ ������������� ������� � ����������� �������� ���� ������ �� ������,\n" +
					"������ ��� ������ �����������.";
				Ques2->Text = "2. � ��� �� ����� �������� � ���������, ��������� �������� ���������� ������, ������ �� ��\n" +
					"���� ��������� � ���� ���������.";
				Ques3->Text = "3. � �� ��������� ����� ������ ��������� ������ �� ����� � ������������ � ���, ��� �����\n" +
					"����� ����� ������ ��������� ����� �������.";
				Ques4->Text = "4. �������� ��� �������������� ������� �� ��� �� ������� �� �������.";
				Ques5->Text = "5. � �������, ��� �� ������� ��������� ������������ � ����������� ��������� �������.";
				Ques6->Text = "6. � �� ������ ��������� ���������� ����, �������� �� �� ����� ������.";
				Ques7->Text = "7. � ��� �� ����� ����������� ����� �������������� ������� ��� ��������� ��������� ����������" +
					"\n��������� � ��������� ������.";
				Ques8->Text = "8. � �� ����������� ���������, ����� ������������� ���������� ����� ���� � ������� ���������" +
					"\n������� ��������� ������.";
				Rez1->Value = Rezl->rez[5][0];
				Rez2->Value = Rezl->rez[5][1];
				Rez3->Value = Rezl->rez[5][2];
				Rez4->Value = Rezl->rez[5][3];
				Rez5->Value = Rezl->rez[5][4];
				Rez6->Value = Rezl->rez[5][5];
				Rez7->Value = Rezl->rez[5][6];
				Rez8->Value = Rezl->rez[5][7];
				Prev->Visible = true;
				if (Rezl->Sum(Quest) == 10) {
					Next->Enabled = true;
				}
				else {
					Next->Enabled = false;
				}
			}

			System::Void QuestSeven() {
				Title->Text = "���� 7. ��������, � �������� � �����������, ������� � �������:";
				Ques1->Text = "1. � ������� ��������� ������������ �� ��������� � �����, ��������, �� ����� ������, ���������" +
					"\n� ����� ������.";
				Ques2->Text = "2. ���������� ������ ��������� ���� �� ���������� ����������� � ������������� � �����������" + 
					"\n��������.";
				Ques3->Text = "3. ��� ���������� ���������� �������, ����� ������ ����������� ���������, ����� ��������� �" +
					"\n�������� ������.";
				Ques4->Text = "4. � ������� ������ ��������� ��������� � �������� ���������� ��� � �������� �������� ������" + 
					"\n������.";
				Ques5->Text = "5. � ����� �� ������, ���� �� ���� ����� �����.";
				Ques6->Text = "6. ��� ������ ������ ����� ������ ����������� �� ������������� ��� ����������.";
				Ques7->Text = "7. � ��������� ���������� �� ������� � ������, ����� �� ���� ���-���� ������� ���.";
				Ques8->Text = "8. � ��������� ����������� ��� ����������� ����� ����� ������, ����� ����������� � ����������" +
					"\n������������.";
				Rez1->Value = Rezl->rez[6][0];
				Rez2->Value = Rezl->rez[6][1];
				Rez3->Value = Rezl->rez[6][2];
				Rez4->Value = Rezl->rez[6][3];
				Rez5->Value = Rezl->rez[6][4];
				Rez6->Value = Rezl->rez[6][5];
				Rez7->Value = Rezl->rez[6][6];
				Rez8->Value = Rezl->rez[6][7];
				Prev->Visible = true;
				if (Rezl->Sum(Quest) == 10) {
					Next->Enabled = true;
				}
				else {
					Next->Enabled = false;
				}
			}

	private: System::Void Close_Click(System::Object^ sender, System::EventArgs^ e) {
		if (((MouseEventArgs^)e)->Button == System::Windows::Forms::MouseButtons::Left) {
			Application::Exit();
		}
	}
	
	private:
		Point* lastPoint;
		int Quest;
		Rezult^ Rezl;
	private: 
		void Block() {
			Rez1->Maximum = 10 - Rezl->Sum(Quest) + Rezl->rez[Quest][0];
			Rez2->Maximum = 10 - Rezl->Sum(Quest) + Rezl->rez[Quest][1];
			Rez3->Maximum = 10 - Rezl->Sum(Quest) + Rezl->rez[Quest][2];
			Rez4->Maximum = 10 - Rezl->Sum(Quest) + Rezl->rez[Quest][3];
			Rez5->Maximum = 10 - Rezl->Sum(Quest) + Rezl->rez[Quest][4];
			Rez6->Maximum = 10 - Rezl->Sum(Quest) + Rezl->rez[Quest][5];
			Rez7->Maximum = 10 - Rezl->Sum(Quest) + Rezl->rez[Quest][6];
			Rez8->Maximum = 10 - Rezl->Sum(Quest) + Rezl->rez[Quest][7];
		}

	private: System::Void Pos_MouseDown(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		lastPoint = new Point(e->X, e->Y);
	}
	private: System::Void Pos_MouseMove(System::Object^ sender, System::Windows::Forms::MouseEventArgs^ e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Left) {
			this->Left += e->X - lastPoint->X;
			this->Top += e->Y - lastPoint->Y;
		}
	}
	private: System::Void Prev_Click(System::Object^ sender, System::EventArgs^ e) {
		switch (this->Quest)
		{
		case 1:
			this->Quest--;
			Block();
			QuestOne();
			break;
		case 2:
			this->Quest--;
			Block();
			QuestTwo();
			break;
		case 3:
			this->Quest--;
			Block();
			QuestThree();
			break;
		case 4:
			this->Quest--;
			Block();
			QuestFour();
			break;
		case 5:
			this->Quest--;
			Block();
			QuestFive();
			break;
		case 6:
			this->Quest--;
			Block();
			QuestSix();
			break;
		default:
			break;
		}
	}
	private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ stuff = gcnew String{ Rezl->rez[0][0], Rezl->rez[0][1] };
		
		switch (this->Quest)
		{
		case 0:
			this->Quest++;
			Block();
			QuestTwo();
			break;
		case 1:
			this->Quest++;
			Block();
			QuestThree();
			break;
		case 2:
			this->Quest++;
			Block();
			QuestFour();
			break;
		case 3:
			this->Quest++;
			Block();
			QuestFive();
			break;
		case 4:
			this->Quest++;
			Block();
			QuestSix();
			break;
		case 5:
			this->Quest++;
			Block();
			QuestSeven();
			break; 
		case 6:
			this->Quest++;
			TableRez->Visible = true;
			initRow1(dt);
			initRow2(dt);
			initRow3(dt);
			initRow4(dt);
			initRow5(dt);
			initRow6(dt);
			initRow7(dt);
			initRow8(dt);
			TableRez->DataSource = dt;
			TableRez->AllowUserToAddRows = false;
			break;
		default:
			break;
		}
	}

	private:
		System::Void initRow1(DataTable^ dt) {
			DataRow^ r = dt->NewRow();
			r["�����������"] = Rezl->rez[0][3];
			r["������"] = Rezl->rez[0][5];
			r["��������� ����"] = Rezl->rez[0][2];
			r["�������"] = Rezl->rez[0][7];
			r["��������"] = Rezl->rez[0][4];
			r["�������������"] = Rezl->rez[0][0];
			r["������������"] = Rezl->rez[0][1];
			r["����������"] = Rezl->rez[0][6];
			dt->Rows->Add(r);
		}

		System::Void initRow2(DataTable^ dt) {
			DataRow^ r = dt->NewRow();
			r["�����������"] = Rezl->rez[1][1];
			r["������"] = Rezl->rez[1][4];
			r["��������� ����"] = Rezl->rez[1][6];
			r["�������"] = Rezl->rez[1][3];
			r["��������"] = Rezl->rez[1][7];
			r["�������������"] = Rezl->rez[1][2];
			r["������������"] = Rezl->rez[1][5];
			r["����������"] = Rezl->rez[1][0];
			dt->Rows->Add(r);
		}

		System::Void initRow3(DataTable^ dt) {
			DataRow^ r = dt->NewRow();
			r["�����������"] = Rezl->rez[2][0];
			r["������"] = Rezl->rez[2][2];
			r["��������� ����"] = Rezl->rez[2][3];
			r["�������"] = Rezl->rez[2][6];
			r["��������"] = Rezl->rez[2][1];
			r["�������������"] = Rezl->rez[2][5];
			r["������������"] = Rezl->rez[2][4];
			r["����������"] = Rezl->rez[2][7];
			dt->Rows->Add(r);
		}

		System::Void initRow4(DataTable^ dt) {
			DataRow^ r = dt->NewRow();
			r["�����������"] = Rezl->rez[3][7];
			r["������"] = Rezl->rez[3][1];
			r["��������� ����"] = Rezl->rez[3][4];
			r["�������"] = Rezl->rez[3][2];
			r["��������"] = Rezl->rez[3][5];
			r["�������������"] = Rezl->rez[3][6];
			r["������������"] = Rezl->rez[3][0];
			r["����������"] = Rezl->rez[3][3];
			dt->Rows->Add(r);
		}

		System::Void initRow5(DataTable^ dt) {
			DataRow^ r = dt->NewRow();
			r["�����������"] = Rezl->rez[4][5];
			r["������"] = Rezl->rez[4][3];
			r["��������� ����"] = Rezl->rez[4][7];
			r["�������"] = Rezl->rez[4][0];
			r["��������"] = Rezl->rez[4][6];
			r["�������������"] = Rezl->rez[4][4];
			r["������������"] = Rezl->rez[4][2];
			r["����������"] = Rezl->rez[4][1];
			dt->Rows->Add(r);
		}

		System::Void initRow6(DataTable^ dt) {
			DataRow^ r = dt->NewRow();
			r["�����������"] = Rezl->rez[5][2];
			r["������"] = Rezl->rez[5][6];
			r["��������� ����"] = Rezl->rez[5][0];
			r["�������"] = Rezl->rez[5][4];
			r["��������"] = Rezl->rez[5][3];
			r["�������������"] = Rezl->rez[5][7];
			r["������������"] = Rezl->rez[5][1];
			r["����������"] = Rezl->rez[5][5];
			dt->Rows->Add(r);
		}

		System::Void initRow7(DataTable^ dt) {
			DataRow^ r = dt->NewRow();
			r["�����������"] = Rezl->rez[6][6];
			r["������"] = Rezl->rez[6][0];
			r["��������� ����"] = Rezl->rez[6][5];
			r["�������"] = Rezl->rez[6][1];
			r["��������"] = Rezl->rez[6][2];
			r["�������������"] = Rezl->rez[6][3];
			r["������������"] = Rezl->rez[6][7];
			r["����������"] = Rezl->rez[6][4];
			dt->Rows->Add(r);
		}

		System::Void initRow8(DataTable^ dt) {
			DataRow^ r = dt->NewRow();
			r["�����������"] = Rezl->rez[6][6] + Rezl->rez[5][2] + Rezl->rez[4][6] + Rezl->rez[3][6] + Rezl->rez[6][6];
			r["������"] = 0;
			r["��������� ����"] = 0;
			r["�������"] = 0;
			r["��������"] = 0;
			r["�������������"] = 0;
			r["������������"] = 0;
			r["����������"] = 0;
			dt->Rows->Add(r);
		}

	private: System::Void Rez1_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		Rezl->rez[Quest][0] = (int)Rez1->Value;
		Block();
		if (Rezl->Sum(Quest) == 10) {
			Next->Enabled = true;
		}
		else {
			Next->Enabled = false;
		}
	}
	private: System::Void Rez2_ValueChanged(System::Object^ sender, System::EventArgs^ e) {	
		Rezl->rez[Quest][1] = (int)Rez2->Value;
		Block();
		if (Rezl->Sum(Quest) == 10) {
			Next->Enabled = true;
		}
		else {
			Next->Enabled = false;
		}
	}
	private: System::Void Rez3_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		Block();
		Rezl->rez[Quest][2] = (int)Rez3->Value;
		if (Rezl->Sum(Quest) == 10) {
			Next->Enabled = true;
		}
		else {
			Next->Enabled = false;
		}
	}
	private: System::Void Rez4_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		Block();
		Rezl->rez[Quest][3] = (int)Rez4->Value;
		if (Rezl->Sum(Quest) == 10) {
			Next->Enabled = true;
		}
		else {
			Next->Enabled = false;
		}
	}
	private: System::Void Rez5_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		Block();
		Rezl->rez[Quest][4] = (int)Rez5->Value;
		if (Rezl->Sum(Quest) == 10) {
			Next->Enabled = true;
		}
		else {
			Next->Enabled = false;
		}
	}
	private: System::Void Rez6_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		Block();
		Rezl->rez[Quest][5] = (int)Rez6->Value;
		if (Rezl->Sum(Quest) == 10) {
			Next->Enabled = true;
		}
		else {
			Next->Enabled = false;
		}
	}
	private: System::Void Rez7_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		Block();
		Rezl->rez[Quest][6] = (int)Rez7->Value;
		if (Rezl->Sum(Quest) == 10) {
			Next->Enabled = true;
		}
		else {
			Next->Enabled = false;
		}
	}
	private: System::Void Rez8_ValueChanged(System::Object^ sender, System::EventArgs^ e) {
		Block();
		Rezl->rez[Quest][7] = (int)Rez8->Value;
		if (Rezl->Sum(Quest) == 10) {
			Next->Enabled = true;
		}
		else {
			Next->Enabled = false;
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		if (((MouseEventArgs^)e)->Button == System::Windows::Forms::MouseButtons::Left) {
			MessageBox::Show("���� ������� ����� �����, ���������� ������������ 10 ������ ����� 8-��� �������������. ������� ��� ��������� 7 ��� ��� ������ �����������. �� ��������� ����������� ����� ����� ���������� ���� ���� � �������, ���������� ����� ���� ��������� ����: ����������, �����������, ������, ��������� ����, �������������, �������, �������� � �����������. ", "�������");
		}
	}
};
}
