#pragma once
#include <math.h>

namespace lab8task1and2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TabControl^ tabControl1;
	protected:
	private: System::Windows::Forms::TabPage^ tabPage1;
	private: System::Windows::Forms::TabPage^ tabPage2;

	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::ListBox^ listBox1;




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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->tabControl1 = (gcnew System::Windows::Forms::TabControl());
			this->tabPage1 = (gcnew System::Windows::Forms::TabPage());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->tabPage2 = (gcnew System::Windows::Forms::TabPage());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->tabControl1->SuspendLayout();
			this->tabPage1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->tabPage2->SuspendLayout();
			this->SuspendLayout();
			// 
			// tabControl1
			// 
			this->tabControl1->Controls->Add(this->tabPage1);
			this->tabControl1->Controls->Add(this->tabPage2);
			this->tabControl1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tabControl1->Location = System::Drawing::Point(0, 0);
			this->tabControl1->Name = L"tabControl1";
			this->tabControl1->RightToLeft = System::Windows::Forms::RightToLeft::No;
			this->tabControl1->SelectedIndex = 0;
			this->tabControl1->Size = System::Drawing::Size(605, 524);
			this->tabControl1->TabIndex = 0;
			// 
			// tabPage1
			// 
			this->tabPage1->Controls->Add(this->pictureBox1);
			this->tabPage1->Controls->Add(this->button2);
			this->tabPage1->Controls->Add(this->button1);
			this->tabPage1->Controls->Add(this->textBox2);
			this->tabPage1->Controls->Add(this->textBox1);
			this->tabPage1->Controls->Add(this->label2);
			this->tabPage1->Controls->Add(this->label1);
			this->tabPage1->Location = System::Drawing::Point(4, 25);
			this->tabPage1->Name = L"tabPage1";
			this->tabPage1->Padding = System::Windows::Forms::Padding(3);
			this->tabPage1->Size = System::Drawing::Size(597, 495);
			this->tabPage1->TabIndex = 0;
			this->tabPage1->Text = L"Завд. 1";
			this->tabPage1->UseVisualStyleBackColor = true;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(261, 115);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(316, 110);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(347, 365);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(156, 44);
			this->button2->TabIndex = 5;
			this->button2->Text = L"Очистити";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(87, 365);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(156, 44);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Обрахувати ";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(87, 203);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(138, 22);
			this->textBox2->TabIndex = 3;
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(87, 115);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(138, 22);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(37, 200);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(44, 25);
			this->label2->TabIndex = 1;
			this->label2->Text = L"y = ";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(37, 111);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(44, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"x = ";
			// 
			// tabPage2
			// 
			this->tabPage2->Controls->Add(this->textBox3);
			this->tabPage2->Controls->Add(this->listBox1);
			this->tabPage2->Controls->Add(this->label6);
			this->tabPage2->Controls->Add(this->label5);
			this->tabPage2->Controls->Add(this->label4);
			this->tabPage2->Location = System::Drawing::Point(4, 25);
			this->tabPage2->Name = L"tabPage2";
			this->tabPage2->Padding = System::Windows::Forms::Padding(3);
			this->tabPage2->Size = System::Drawing::Size(597, 495);
			this->tabPage2->TabIndex = 1;
			this->tabPage2->Text = L"Завд. 2";
			this->tabPage2->UseVisualStyleBackColor = true;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(355, 158);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(140, 22);
			this->textBox3->TabIndex = 10;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->ItemHeight = 16;
			this->listBox1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"1", L"2", L"3", L"4", L"5", L"6", L"7", L"8",
					L"9", L"10", L"11", L"12"
			});
			this->listBox1->Location = System::Drawing::Point(89, 158);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(164, 196);
			this->listBox1->TabIndex = 9;
			this->listBox1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::listBox1_SelectedIndexChanged);
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(211, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(0, 32);
			this->label6->TabIndex = 8;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(375, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(104, 25);
			this->label5->TabIndex = 1;
			this->label5->Text = L"Пора року";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(97, 110);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(145, 25);
			this->label4->TabIndex = 0;
			this->label4->Text = L"Номер місяця";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(605, 524);
			this->Controls->Add(this->tabControl1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->tabControl1->ResumeLayout(false);
			this->tabPage1->ResumeLayout(false);
			this->tabPage1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->tabPage2->ResumeLayout(false);
			this->tabPage2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x, y;
		x = Convert::ToDouble(textBox1->Text);
		if (x < 0) {
			y = sin(pow(x, 2));
		}
		else {
			y = log(x + 1);
		}
		textBox2->Text = Convert::ToString(y);
	}

private: System::Void listBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	int number;
	number = listBox1->SelectedIndex;
	switch (number) 
	{
	case 0:textBox3->Text="Зима"; 
		break;
	case 1:textBox3->Text = "Зима";
		break;
	case 2:textBox3->Text = "Весна";
		break;
	case 3:textBox3->Text = "Весна";
		break;
	case 4:textBox3->Text = "Весна";
		break;
	case 5:textBox3->Text = "Літо";
		break;
	case 6:textBox3->Text = "Літо";
		break;
	case 7:textBox3->Text = "Літо";
		break;
	case 8:textBox3->Text = "Осінь";
		break;
	case 9:textBox3->Text = "Осінь";
		break;
	case 10:textBox3->Text = "Осінь";
		break;
	case 11:textBox3->Text = "Зима";
		break;
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	textBox1->Clear();
	textBox2->Clear();
}
};
}
