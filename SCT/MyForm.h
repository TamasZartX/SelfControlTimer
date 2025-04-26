#pragma once

namespace SCT {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Media;

	/// <summary>
	/// —водка дл€ MyForm
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
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ h_decrease;
	protected:


	private: System::Windows::Forms::Button^ h_increase;
	private: System::Windows::Forms::Button^ m_decrease;
	private: System::Windows::Forms::Button^ m_increase;
	private: System::Windows::Forms::Button^ s_decrease;





	private: System::Windows::Forms::Button^ s_increase;
	private: System::Windows::Forms::Button^ play_but;
	private: System::Windows::Forms::Button^ set_but;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ control_res;
	private: System::Windows::Forms::Timer^ timer1;
	private: System::Windows::Forms::Button^ button1;
	
	





	private: System::ComponentModel::IContainer^ components;









	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->h_decrease = (gcnew System::Windows::Forms::Button());
			this->h_increase = (gcnew System::Windows::Forms::Button());
			this->m_decrease = (gcnew System::Windows::Forms::Button());
			this->m_increase = (gcnew System::Windows::Forms::Button());
			this->s_decrease = (gcnew System::Windows::Forms::Button());
			this->s_increase = (gcnew System::Windows::Forms::Button());
			this->play_but = (gcnew System::Windows::Forms::Button());
			this->set_but = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->control_res = (gcnew System::Windows::Forms::Button());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->Font = (gcnew System::Drawing::Font(L"Times New Roman", 72, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label1->Location = System::Drawing::Point(0, 140);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(405, 102);
			this->label1->TabIndex = 0;
			this->label1->Text = L"00:00:00";
			// 
			// h_decrease
			// 
			this->h_decrease->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->h_decrease->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->h_decrease->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->h_decrease->Location = System::Drawing::Point(44, 240);
			this->h_decrease->Name = L"h_decrease";
			this->h_decrease->Size = System::Drawing::Size(50, 24);
			this->h_decrease->TabIndex = 2;
			this->h_decrease->Text = L"-";
			this->h_decrease->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->h_decrease->UseVisualStyleBackColor = true;
			this->h_decrease->Click += gcnew System::EventHandler(this, &MyForm::h_decrease_Click);
			// 
			// h_increase
			// 
			this->h_increase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->h_increase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->h_increase->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->h_increase->Location = System::Drawing::Point(44, 128);
			this->h_increase->Name = L"h_increase";
			this->h_increase->Size = System::Drawing::Size(50, 24);
			this->h_increase->TabIndex = 3;
			this->h_increase->Text = L"+";
			this->h_increase->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->h_increase->UseVisualStyleBackColor = true;
			this->h_increase->Click += gcnew System::EventHandler(this, &MyForm::h_increase_Click);
			// 
			// m_decrease
			// 
			this->m_decrease->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_decrease->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->m_decrease->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->m_decrease->Location = System::Drawing::Point(169, 240);
			this->m_decrease->Name = L"m_decrease";
			this->m_decrease->Size = System::Drawing::Size(50, 24);
			this->m_decrease->TabIndex = 4;
			this->m_decrease->Text = L"-";
			this->m_decrease->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->m_decrease->UseVisualStyleBackColor = true;
			this->m_decrease->Click += gcnew System::EventHandler(this, &MyForm::m_decrease_Click);
			// 
			// m_increase
			// 
			this->m_increase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->m_increase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->m_increase->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->m_increase->Location = System::Drawing::Point(169, 128);
			this->m_increase->Name = L"m_increase";
			this->m_increase->Size = System::Drawing::Size(50, 24);
			this->m_increase->TabIndex = 5;
			this->m_increase->Text = L"+";
			this->m_increase->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->m_increase->UseVisualStyleBackColor = true;
			this->m_increase->Click += gcnew System::EventHandler(this, &MyForm::m_increase_Click);
			// 
			// s_decrease
			// 
			this->s_decrease->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->s_decrease->Font = (gcnew System::Drawing::Font(L"Showcard Gothic", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->s_decrease->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->s_decrease->Location = System::Drawing::Point(298, 240);
			this->s_decrease->Name = L"s_decrease";
			this->s_decrease->Size = System::Drawing::Size(50, 24);
			this->s_decrease->TabIndex = 6;
			this->s_decrease->Text = L"-";
			this->s_decrease->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->s_decrease->UseVisualStyleBackColor = true;
			this->s_decrease->Click += gcnew System::EventHandler(this, &MyForm::s_decrease_Click);
			// 
			// s_increase
			// 
			this->s_increase->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->s_increase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->s_increase->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->s_increase->Location = System::Drawing::Point(298, 128);
			this->s_increase->Name = L"s_increase";
			this->s_increase->Size = System::Drawing::Size(50, 24);
			this->s_increase->TabIndex = 7;
			this->s_increase->Text = L"+";
			this->s_increase->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->s_increase->UseVisualStyleBackColor = true;
			this->s_increase->Click += gcnew System::EventHandler(this, &MyForm::s_increase_Click);
			// 
			// play_but
			// 
			this->play_but->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->play_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->play_but->Location = System::Drawing::Point(94, 284);
			this->play_but->Name = L"play_but";
			this->play_but->Size = System::Drawing::Size(68, 73);
			this->play_but->TabIndex = 8;
			this->play_but->Text = L"Start";
			this->play_but->UseVisualStyleBackColor = false;
			this->play_but->Click += gcnew System::EventHandler(this, &MyForm::play_but_Click);
			// 
			// set_but
			// 
			this->set_but->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->set_but->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->set_but->Location = System::Drawing::Point(230, 284);
			this->set_but->Name = L"set_but";
			this->set_but->Size = System::Drawing::Size(68, 73);
			this->set_but->TabIndex = 9;
			this->set_but->Text = L"Set";
			this->set_but->UseVisualStyleBackColor = false;
			this->set_but->Click += gcnew System::EventHandler(this, &MyForm::set_but_Click);
			// 
			// label2
			// 
			this->label2->Font = (gcnew System::Drawing::Font(L"Times New Roman", 48, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->label2->Location = System::Drawing::Point(62, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(182, 70);
			this->label2->TabIndex = 10;
			this->label2->Text = L"20:00";
			// 
			// control_res
			// 
			this->control_res->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->control_res->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			this->control_res->Location = System::Drawing::Point(230, 37);
			this->control_res->Name = L"control_res";
			this->control_res->Size = System::Drawing::Size(60, 65);
			this->control_res->TabIndex = 11;
			this->control_res->UseVisualStyleBackColor = false;
			this->control_res->Click += gcnew System::EventHandler(this, &MyForm::control_res_Click);
			// 
			// timer1
			// 
			this->timer1->Interval = 50;
			this->timer1->Tick += gcnew System::EventHandler(this, &MyForm::Screen_Update);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::ControlLightLight;
			this->button1->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->button1->ImageAlign = System::Drawing::ContentAlignment::BottomCenter;
			this->button1->Location = System::Drawing::Point(343, 11);
			this->button1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(30, 32);
			this->button1->TabIndex = 12;
			this->button1->Text = L"Pin";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->ClientSize = System::Drawing::Size(384, 392);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->control_res);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->set_but);
			this->Controls->Add(this->play_but);
			this->Controls->Add(this->s_increase);
			this->Controls->Add(this->s_decrease);
			this->Controls->Add(this->m_increase);
			this->Controls->Add(this->m_decrease);
			this->Controls->Add(this->h_increase);
			this->Controls->Add(this->h_decrease);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Name = L"MyForm";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	
		private: System::Void HideButtons();
		private: System::Void ShowButtons();
		private: System::Void Control_Check();

		private: System::Void Time_Finish();

private: System::Void s_increase_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void s_decrease_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void m_increase_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void m_decrease_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void h_increase_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void h_decrease_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void play_but_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void set_but_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void control_res_Click(System::Object^ sender, System::EventArgs^ e);

	   private: Void Screen_Update(Object^ object, EventArgs^ e);



private: System::Void MyForm_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	if (!this->TopMost) { 
		this->TopMost = true; 
	}
	else {
		this->TopMost = false;
	}
}

};
}
