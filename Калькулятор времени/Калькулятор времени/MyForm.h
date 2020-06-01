#pragma once
int hours, minute, second;
int count;
namespace Калькуляторвремени {

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
	private: System::Windows::Forms::Label^  label1;
	protected:
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;


	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label4;





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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(40, 21);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(72, 26);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Часы";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(178, 21);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(105, 26);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Минуты";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(311, 21);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 26);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Секунды";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->ImeMode = System::Windows::Forms::ImeMode::Alpha;
			this->textBox1->Location = System::Drawing::Point(5, 48);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(154, 70);
			this->textBox1->TabIndex = 3;
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox2->Location = System::Drawing::Point(160, 48);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(139, 70);
			this->textBox2->TabIndex = 4;
			// 
			// textBox3
			// 
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox3->Location = System::Drawing::Point(302, 49);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(131, 70);
			this->textBox3->TabIndex = 5;
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->ForeColor = System::Drawing::Color::Black;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button1.Image")));
			this->button1->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button1->Location = System::Drawing::Point(5, 127);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(107, 107);
			this->button1->TabIndex = 6;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button2.Image")));
			this->button2->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button2->Location = System::Drawing::Point(112, 126);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(107, 107);
			this->button2->TabIndex = 7;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->button3->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->button3->Font = (gcnew System::Drawing::Font(L"Times New Roman", 16.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button3.Image")));
			this->button3->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button3->Location = System::Drawing::Point(219, 127);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(107, 107);
			this->button3->TabIndex = 8;
			this->button3->TextAlign = System::Drawing::ContentAlignment::TopRight;
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// button4
			// 
			this->button4->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->button4->BackColor = System::Drawing::Color::Black;
			this->button4->BackgroundImageLayout = System::Windows::Forms::ImageLayout::None;
			this->button4->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button4.Image")));
			this->button4->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button4->Location = System::Drawing::Point(5, 236);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(428, 107);
			this->button4->TabIndex = 9;
			this->button4->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button5->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button5.Image")));
			this->button5->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button5->Location = System::Drawing::Point(5, 340);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(428, 107);
			this->button5->TabIndex = 10;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(192)));
			this->button6->Font = (gcnew System::Drawing::Font(L"Times New Roman", 13.8F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button6.Image")));
			this->button6->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button6->Location = System::Drawing::Point(5, 447);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(428, 107);
			this->button6->TabIndex = 11;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button8->Font = (gcnew System::Drawing::Font(L"Cooper Black", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button8->ForeColor = System::Drawing::Color::Black;
			this->button8->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"button8.Image")));
			this->button8->ImageAlign = System::Drawing::ContentAlignment::TopLeft;
			this->button8->Location = System::Drawing::Point(326, 126);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(107, 107);
			this->button8->TabIndex = 14;
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(9, 3);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"label4";
			// 
			// MyForm
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->AutoScroll = true;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(224)), static_cast<System::Int32>(static_cast<System::Byte>(224)),
				static_cast<System::Int32>(static_cast<System::Byte>(224)));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Center;
			this->ClientSize = System::Drawing::Size(439, 558);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::Color::Black;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->Name = L"MyForm";
			this->RightToLeftLayout = true;
			this->Text = L"MyForm";
			this->TransparencyKey = System::Drawing::Color::Black;
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		//Кнопка сложения 
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	hours = Convert::ToInt32(textBox1->Text);
	minute = Convert::ToInt32(textBox2->Text);
	second = Convert::ToInt32(textBox3->Text);                 
	if (hours > 24 || minute > 60 || second > 60)
	{
		label4->Text = "Неправильный формат времени";
	}
	else
	{
		count = 1;
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
	}
}
		 //кнопка вычитания
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	hours = Convert::ToInt32(textBox1->Text);
	minute = Convert::ToInt32(textBox2->Text);
	second = Convert::ToInt32(textBox3->Text);
	if (hours > 24 || minute > 60 || second > 60)
	{
		label4->Text = "Неправильный формат времени";
	}
	else
	{
		count = 2;
		textBox1->Clear();
		textBox2->Clear();
		textBox3->Clear();
	}
}
		 //перевод в часы
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	hours = Convert::ToInt32(textBox1->Text);
	minute = Convert::ToInt32(textBox2->Text);
	second = Convert::ToInt32(textBox3->Text);
	count = 3;
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
}
		 //перевод в минуты
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	hours = Convert::ToInt32(textBox1->Text);
	minute = Convert::ToInt32(textBox2->Text);
	second = Convert::ToInt32(textBox3->Text);
	count = 4;
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
}
		 //перевод  в секунды
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
	hours = Convert::ToInt32(textBox1->Text);
	minute = Convert::ToInt32(textBox2->Text);
	second = Convert::ToInt32(textBox3->Text);
	count = 5;
	textBox1->Clear();
	textBox2->Clear();
	textBox3->Clear();
}
		 //кнопка равно
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	switch (count)
		{
		case 1://результат работы сложения
			if (Convert::ToInt32(textBox1->Text) > 24 || Convert::ToInt32(textBox2->Text) > 60 || Convert::ToInt32(textBox3->Text) > 60)
			{
				label4->Text = "Неправильный формат времени";
			}
			else
			{
				hours += Convert::ToInt32(textBox1->Text);
				minute += Convert::ToInt32(textBox2->Text);
				second += Convert::ToInt32(textBox3->Text);
				second += hours * 3600 + minute * 60;
				hours = second / 3600; second = second - hours * 3600;
				minute = second / 60;
				second = second - minute * 60;
				textBox1->Text = hours.ToString();
				textBox2->Text = minute.ToString();
				textBox3->Text = second.ToString();
			}
			label4->Text = "";
			break;
		case 2://результат работы вычитания
			if (Convert::ToInt32(textBox1->Text) > 24 || Convert::ToInt32(textBox2->Text) > 60 || Convert::ToInt32(textBox3->Text) > 60)
			{
				label4->Text = "Неправильный формат времени";
			}
			else
			{
				second = hours * 3600 + minute * 60 + second - Convert::ToInt32(textBox1->Text) * 3600 - Convert::ToInt32(textBox2->Text) * 60 - Convert::ToInt32(textBox3->Text);
				hours = second / 3600; second = second - hours * 3600;
				minute = second / 60;
				second = second - minute * 60;
				textBox1->Text = hours.ToString();
				textBox2->Text = minute.ToString();
				textBox3->Text = second.ToString();
			}
			label4->Text = "";
			break;
		case 3://результат перевода в часы
			second = hours * 3600 + minute * 60 + second;
			hours = second / 3600;
			textBox1->Text = hours.ToString();
			break;
		case 4://результат перевода в минуты
			second = hours * 3600 + minute * 60 + second;
			minute = second / 60;
			textBox2->Text = minute.ToString();
			break;
		case 5://результат перевода в секунды
			second = hours * 3600 + minute * 60 + second;
			textBox3->Text = second.ToString();
			break;
	    default:
		  break;
    }
}
		 //кнопка удаления 
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	textBox1->Text = "";
	textBox2->Text = "";
	textBox3->Text = "";
	label4->Text = "";
}
};
}
