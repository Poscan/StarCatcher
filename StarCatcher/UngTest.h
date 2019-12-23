#pragma once

namespace StarCatcher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для UngTest
	/// </summary>
	public ref class UngTest : public System::Windows::Forms::Form
	{
	public:
		int Level;
		int** uRez;
	private: System::Windows::Forms::CheckBox^ Check1;
	private: System::Windows::Forms::CheckBox^ Check2;

	public:


		UngTest(void)
		{
			InitializeComponent();
			MessageBox::Show("На каждый вопрос имеется два варианта ответа, необходимо выбрать ответ, который подходит вам больше.Если, в вашем представлении, вам присуще нечто среднее, то и тогда вам все - таки следует склониться к одной из представленных альтернатив.", "Правила");
			Level = 0;
			uRez = new int* [20];
			for (int i = 0; i < 20; i++) uRez[i] = new int[2];
			for (int i = 0; i < 20; i++) for (int j = 0; j < 2; j++) uRez[i][j] = 0;
			Assot1();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~UngTest()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:

	protected:
	private: System::Windows::Forms::Label^ Close;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Panel^ panel5;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Panel^ panel6;
	public: System::Windows::Forms::Label^ Title;
	private:




	private: System::Windows::Forms::Button^ Next;

	private: System::Windows::Forms::Button^ Prev;


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
			this->Close = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->Title = (gcnew System::Windows::Forms::Label());
			this->Next = (gcnew System::Windows::Forms::Button());
			this->Prev = (gcnew System::Windows::Forms::Button());
			this->Check1 = (gcnew System::Windows::Forms::CheckBox());
			this->Check2 = (gcnew System::Windows::Forms::CheckBox());
			this->panel5->SuspendLayout();
			this->SuspendLayout();
			// 
			// Close
			// 
			this->Close->AutoSize = true;
			this->Close->Cursor = System::Windows::Forms::Cursors::Hand;
			this->Close->Dock = System::Windows::Forms::DockStyle::Right;
			this->Close->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Close->Location = System::Drawing::Point(428, 0);
			this->Close->Name = L"Close";
			this->Close->Padding = System::Windows::Forms::Padding(0, 3, 3, 0);
			this->Close->Size = System::Drawing::Size(21, 20);
			this->Close->TabIndex = 0;
			this->Close->Text = L"X";
			this->Close->Click += gcnew System::EventHandler(this, &UngTest::Close_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(451, 1);
			this->panel1->TabIndex = 1;
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel2->Dock = System::Windows::Forms::DockStyle::Left;
			this->panel2->Location = System::Drawing::Point(0, 1);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1, 269);
			this->panel2->TabIndex = 2;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel3->Dock = System::Windows::Forms::DockStyle::Right;
			this->panel3->Location = System::Drawing::Point(450, 1);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(1, 269);
			this->panel3->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::SystemColors::ControlDark;
			this->panel4->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel4->Location = System::Drawing::Point(1, 269);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(449, 1);
			this->panel4->TabIndex = 4;
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->label1);
			this->panel5->Controls->Add(this->Close);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel5->Location = System::Drawing::Point(1, 1);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(449, 25);
			this->panel5->TabIndex = 5;
			this->panel5->MouseDown += gcnew System::Windows::Forms::MouseEventHandler(this, &UngTest::Pos_MouseDown);
			this->panel5->MouseMove += gcnew System::Windows::Forms::MouseEventHandler(this, &UngTest::Pos_MouseMove);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(11, 0);
			this->label1->Name = L"label1";
			this->label1->Padding = System::Windows::Forms::Padding(0, 3, 0, 0);
			this->label1->Size = System::Drawing::Size(87, 20);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Тест Юнга";
			// 
			// panel6
			// 
			this->panel6->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel6->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->panel6->Location = System::Drawing::Point(1, 225);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(449, 44);
			this->panel6->TabIndex = 6;
			// 
			// Title
			// 
			this->Title->AutoEllipsis = true;
			this->Title->AutoSize = true;
			this->Title->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Title->Location = System::Drawing::Point(15, 33);
			this->Title->Name = L"Title";
			this->Title->Size = System::Drawing::Size(171, 17);
			this->Title->TabIndex = 7;
			this->Title->Text = L"Что вы предпочтете\?";
			// 
			// Next
			// 
			this->Next->Location = System::Drawing::Point(364, 196);
			this->Next->Name = L"Next";
			this->Next->Size = System::Drawing::Size(75, 23);
			this->Next->TabIndex = 10;
			this->Next->Text = L"Далее";
			this->Next->UseVisualStyleBackColor = true;
			this->Next->Click += gcnew System::EventHandler(this, &UngTest::Next_Click);
			// 
			// Prev
			// 
			this->Prev->Location = System::Drawing::Point(283, 196);
			this->Prev->Name = L"Prev";
			this->Prev->Size = System::Drawing::Size(75, 23);
			this->Prev->TabIndex = 11;
			this->Prev->Text = L"Назад";
			this->Prev->UseVisualStyleBackColor = true;
			this->Prev->Click += gcnew System::EventHandler(this, &UngTest::Prev_Click);
			// 
			// Check1
			// 
			this->Check1->AutoSize = true;
			this->Check1->Location = System::Drawing::Point(37, 78);
			this->Check1->Name = L"Check1";
			this->Check1->Size = System::Drawing::Size(80, 17);
			this->Check1->TabIndex = 12;
			this->Check1->Text = L"checkBox1";
			this->Check1->UseVisualStyleBackColor = true;
			this->Check1->CheckedChanged += gcnew System::EventHandler(this, &UngTest::Check1_CheckedChanged);
			// 
			// Check2
			// 
			this->Check2->AutoSize = true;
			this->Check2->Location = System::Drawing::Point(37, 126);
			this->Check2->Name = L"Check2";
			this->Check2->Size = System::Drawing::Size(80, 17);
			this->Check2->TabIndex = 13;
			this->Check2->Text = L"checkBox1";
			this->Check2->UseVisualStyleBackColor = true;
			this->Check2->CheckedChanged += gcnew System::EventHandler(this, &UngTest::Check2_CheckedChanged);
			// 
			// UngTest
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->ClientSize = System::Drawing::Size(451, 270);
			this->Controls->Add(this->Check2);
			this->Controls->Add(this->Check1);
			this->Controls->Add(this->Prev);
			this->Controls->Add(this->Next);
			this->Controls->Add(this->Title);
			this->Controls->Add(this->panel6);
			this->Controls->Add(this->panel5);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"UngTest";
			this->Text = L"UngTest";
			this->panel5->ResumeLayout(false);
			this->panel5->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Close_Click(System::Object^ sender, System::EventArgs^ e) {
		if (((MouseEventArgs^)e)->Button == System::Windows::Forms::MouseButtons::Left) {
			Application::Exit();
		}
	}

	private:
		void Assot1() {
			Title->Text = "1. Что вы предпочитаете:";
			Check1->Text = "Немного близких друзей;";
			Check2->Text = "Большую товарищескую компанию.";
			Prev->Visible = false;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];

		}

		void Assot2() {
			Title->Text = "2. Какие книги вы предпочитаете читать:";
			Check1->Text = "C занимательным сюжетом;";
			Check2->Text = "C раскрытием переживаний героев.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot3() {
			Title->Text = "3. Что вы скорее можете допустить в разговоре:";
			Check1->Text = "Oпоздание;";
			Check2->Text = "Oшибки.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot4() {
			Title->Text = "4. Если вы совершаете дурной поступок, то:";
			Check1->Text = "Oстро переживаете;";
			Check2->Text = "Oстрых переживаний нет.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot5() {
			Title->Text = "5. Как вы сходитесь с людьми:";
			Check1->Text = "Быстро, легко;";
			Check2->Text = "Медленно, осторожно.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot6() {
			Title->Text = "6. Считаете ли вы себя обидчивым:";
			Check1->Text = "Да;";
			Check2->Text = "Нет.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot7() {
			Title->Text = "7. Склонны ли вы хохотать, смеяться от души:";
			Check1->Text = "Да;";
			Check2->Text = "Нет.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot8() {
			Title->Text = "8. Считаете ли вы себя:";
			Check1->Text = "Молчаливым;";
			Check2->Text = "Разговорчивым.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot9() {
			Title->Text = "9. Откровенны ли вы или скрытны:";
			Check1->Text = "Oткровенен;";
			Check2->Text = "Cкрытен.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot10() {
			Title->Text = "10. Любите ли вы заниматься анализом\nсвоих переживаний:";
			Check1->Text = "Да;";
			Check2->Text = "Нет.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot11() {
			Title->Text = "11. Находясь в обществе, вы предпочитаете:";
			Check1->Text = "Говорить;";
			Check2->Text = "Слушать.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot12() {
			Title->Text = "12. Часто ли вы переживаете недовольство собой:";
			Check1->Text = "Да;";
			Check2->Text = "Нет.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot13() {
			Title->Text = "13. Любите ли вы что-нибудь организовывать:";
			Check1->Text = "Да;";
			Check2->Text = "Нет.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot14() {
			Title->Text = "14. Хотелось бы вам вести интимный дневник:";
			Check1->Text = "Да;";
			Check2->Text = "Нет.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot15() {
			Title->Text = "15. Быстро ли вы переходите от решения к\nисполнению:";
			Check1->Text = "Да;";
			Check2->Text = "Нет.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot16() {
			Title->Text = "16. Легко ли меняется ваше настроение:";
			Check1->Text = "Да;";
			Check2->Text = "Нет.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot17() {
			Title->Text = "17. Любите ли вы убеждать других, навязывать\nсвои взгляды:";
			Check1->Text = "Да;";
			Check2->Text = "Нет.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot18() {
			Title->Text = "18. Ваши движения:";
			Check1->Text = "Быстры;";
			Check2->Text = "Замедленны.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

		void Assot19() {
			Title->Text = "19. Вы сильно беспокоитесь о возможных\nнеприятностях:";
			Check1->Text = "Часто;";
			Check2->Text = "Редко.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}
		
		void Assot20() {
			Title->Text = "20. В затруднительных случаях:";
			Check1->Text = "Cпешите обратиться за помощью к другим;";
			Check2->Text = "Не любите обращаться.";
			Prev->Visible = true;
			Check1->Checked = uRez[Level][0];
			Check2->Checked = uRez[Level][1];
			Next->Enabled = uRez[Level][0] + uRez[Level][1];
		}

	private:
		Point* lastPoint;
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
		switch (Level)
		{
		case 1:
			this->Level--;
			Assot1();
			break;
		case 2:
			this->Level--;
			Assot2();
			break;
		case 3:
			this->Level--;
			Assot3();
			break;
		case 4:
			this->Level--;
			Assot4();
			break;
		case 5:
			this->Level--;
			Assot5();
			break;
		case 6:
			this->Level--;
			Assot6();
			break;
		case 7:
			this->Level--;
			Assot7();
			break;
		case 8:
			this->Level--;
			Assot8();
			break;
		case 9:
			this->Level--;
			Assot9();
			break;
		case 10:
			this->Level--;
			Assot10();
			break;
		case 11:
			this->Level--;
			Assot11();
			break;
		case 12:
			this->Level--;
			Assot12();
			break;
		case 13:
			this->Level--;
			Assot13();
			break;
		case 14:
			this->Level--;
			Assot14();
			break;
		case 15:
			this->Level--;
			Assot15();
			break;
		case 16:
			this->Level--;
			Assot16();
			break;
		case 17:
			this->Level--;
			Assot17();
			break;
		case 18:
			this->Level--;
			Assot18();
			break;
		case 19:
			this->Level--;
			Assot19();
			break;
		default:
			break;
		}
	}
		   private: int Type;
private: System::Void Next_Click(System::Object^ sender, System::EventArgs^ e) {
	switch (Level)
	{
	case 0:
		this->Level++;
		Assot2();
		Prev->Visible = true;
		break;
	case 1:
		this->Level++;
		Assot3();
		Prev->Visible = true;
		break;
	case 2:
		this->Level++;
		Assot4();
		Prev->Visible = true;
		break;
	case 3:
		this->Level++;
		Assot5();
		Prev->Visible = true;
		break;
	case 4:
		this->Level++;
		Assot6();
		Prev->Visible = true;
		break;
	case 5:
		this->Level++;
		Assot7();
		Prev->Visible = true;
		break;
	case 6:
		this->Level++;
		Assot8();
		Prev->Visible = true;
		break;
	case 7:
		this->Level++;
		Assot9();
		Prev->Visible = true;
		break;
	case 8:
		this->Level++;
		Assot10();
		Prev->Visible = true;
		break;
	case 9:
		this->Level++;
		Assot11();
		Prev->Visible = true;
		break;
	case 10:
		this->Level++;
		Assot12();
		Prev->Visible = true;
		break;
	case 11:
		this->Level++;
		Assot13();
		Prev->Visible = true;
		break;
	case 12:
		this->Level++;
		Assot14();
		Prev->Visible = true;
		break;
	case 13:
		this->Level++;
		Assot15();
		Prev->Visible = true;
		break;
	case 14:
		this->Level++;
		Assot16();
		Prev->Visible = true;
		break;
	case 15:
		this->Level++;
		Assot17();
		Prev->Visible = true;
		break;
	case 16:
		this->Level++;
		Assot18();
		Prev->Visible = true;
		break;
	case 17:
		this->Level++;
		Assot19();
		Prev->Visible = true;
		break;
	case 18:
		this->Level++;
		Assot20();
		Prev->Visible = true;
		break;
	case 19:
		this->Level++;
		Type = uRez[0][1] + uRez[1][0] + uRez[2][1] + uRez[3][1] + uRez[4][0] + uRez[5][1] + uRez[6][0] + uRez[7][1] + uRez[8][0] + 
			uRez[9][1] + uRez[10][0] + uRez[11][1] + uRez[12][0] + uRez[13][1] + uRez[14][0] + uRez[15][0] + uRez[16][0] + 
			uRez[17][0] + uRez[18][1] + uRez[19][0];
		Type *= 5;
		Check1->Visible = false;
		Check2->Visible = false;
		if (Type < 36) {
			Title->Text =     "Интроверсия: сосредоточены на собственных\n" +
							  "переживаниях, малоконтактны, молчаливы, с\n" +
							  "трудом заводят новые знакомства, не любят\n" +
							  "рисковать, переживают разрыв старых связей,\n" +
							  "нет вариантов проигрыша и выигрыша, высокий\n" +
							  "уровень тревожности и регидности; флегматики,\n" +
							  "меланхолики.";
		}
		else {
			if (Type > 65) {
				Title->Text = "Экстраверсия: легки в общении, у них высокий\n" +
							  "уровень агрессивности, имеют тенденцию к лидерству,\n" + 
							  "любят быть в центре внимания, легко завязывают\n" +
							  "знакомства, импульсивны, открыты и общительны,\n" +
							  "среди их знакомых могут быть и полезные люди; судят\n" +
							  "о людях «по внешности», не заглядывают внутрь;\n" +
							  "холерики, сангвиники. Экстраверт может быть\n" +
							  "превосходным тамадой, организатором (часто на\n" +
							  "общественных началах), чиновником, управляющим\n" +
							  "людьми, артистом или конферансье.";
			}
			else {
				Title->Text = "Амбиверсия: личности, в которых присутствуют\nслабовыраженные черты обоих типов.";
			}
		}
		Prev->Visible = false;
		break;
	default:
		break;
	}
}
	private: System::Void Check1_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Check1->Checked == true) {
			Check2->Enabled = false;
			uRez[Level][0] = 1;
			uRez[Level][1] = 0;
			Next->Enabled = true;
		}
		else {
			Check2->Enabled = true;
			uRez[Level][0] = 0;
			Next->Enabled = false;
		}
	}	
	private: System::Void Check2_CheckedChanged(System::Object^ sender, System::EventArgs^ e) {
		if (Check2->Checked == true) {
			Check1->Enabled = false;
			uRez[Level][1] = 1;
			uRez[Level][0] = 0;
			Next->Enabled = true;
		}
		else {
			Check1->Enabled = true;
			uRez[Level][1] = 0;
			Next->Enabled = false;
		}
	}
};
}
