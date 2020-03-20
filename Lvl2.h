#pragma once
#include "Header.h"
#include "Lvl1.h"
namespace Pusher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lvl2
	/// </summary>
	public ref class Lvl2 : public System::Windows::Forms::Form
	{
	public:
		Lvl2(Lvl1^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}
	private: Lvl1^ parentForm;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	public:
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  Mark1;
	private: System::Windows::Forms::PictureBox^  Man1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  Box1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox5;



	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Lvl2()
		{
			if (components)
			{
				delete components;
			}
		}

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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Lvl2::typeid));
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Mark1 = (gcnew System::Windows::Forms::PictureBox());
			this->Man1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Box1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Man1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(1050, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 300);
			this->pictureBox4->TabIndex = 21;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 300);
			this->pictureBox3->TabIndex = 20;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(0, 250);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(1100, 50);
			this->pictureBox2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::CenterImage;
			this->pictureBox2->TabIndex = 19;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(1100, 50);
			this->pictureBox1->TabIndex = 18;
			this->pictureBox1->TabStop = false;
			// 
			// Mark1
			// 
			this->Mark1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mark1.Image")));
			this->Mark1->Location = System::Drawing::Point(1000, 50);
			this->Mark1->Name = L"Mark1";
			this->Mark1->Size = System::Drawing::Size(50, 50);
			this->Mark1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Mark1->TabIndex = 13;
			this->Mark1->TabStop = false;
			// 
			// Man1
			// 
			this->Man1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Man1.Image")));
			this->Man1->Location = System::Drawing::Point(250, 50);
			this->Man1->Name = L"Man1";
			this->Man1->Size = System::Drawing::Size(50, 50);
			this->Man1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Man1->TabIndex = 14;
			this->Man1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(437, 318);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 39);
			this->label1->TabIndex = 17;
			this->label1->Text = L"Level Complete!";
			this->label1->Visible = false;
			// 
			// Box1
			// 
			this->Box1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box1.Image")));
			this->Box1->Location = System::Drawing::Point(250, 150);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(50, 50);
			this->Box1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box1->TabIndex = 15;
			this->Box1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(519, 360);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 35);
			this->button1->TabIndex = 16;
			this->button1->Text = L"Start Next Level";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Lvl2::button1_Click);
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(500, 50);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(500, 50);
			this->pictureBox6->TabIndex = 23;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(500, 150);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(500, 50);
			this->pictureBox5->TabIndex = 24;
			this->pictureBox5->TabStop = false;
			// 
			// Lvl2
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1116, 401);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Man1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Box1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->Mark1);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Lvl2";
			this->Text = L"Lvl2";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Lvl2::Lvl2_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Man1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Boolean CheckMoveRight(System::Windows::Forms::PictureBox^  moving)
	{
		// можно ли двигатья вправо = нет НИКАКИХ стен справа
		if (CheckBorderRight(moving, pictureBox1))
		{
			if (CheckBorderRight(moving, pictureBox2))
			{
				if (CheckBorderRight(moving, pictureBox3))
				{
					if (CheckBorderRight(moving, pictureBox4))
					{
						if (CheckBorderRight(moving, pictureBox5))
						{
							if (CheckBorderRight(moving, pictureBox6))
								return true;
							else return false;
						}
						else return false;
					}
					else return false;
				}
				else return false;
			}
			else return false;
		}
		else return false;
	}
	private: System::Boolean CheckMoveLeft(System::Windows::Forms::PictureBox^  moving)
	{
		// можно ли двигатья влево = нет НИКАКИХ стен слева
		if (CheckBorderLeft(moving, pictureBox1))
		{
			if (CheckBorderLeft(moving, pictureBox2))
			{
				if (CheckBorderLeft(moving, pictureBox3))
				{
					if (CheckBorderLeft(moving, pictureBox4))
					{
						if (CheckBorderLeft(moving, pictureBox5))
						{
							if (CheckBorderLeft(moving, pictureBox6))
								return true;
							else return false;
						}
						else return false;
					}
					else return false;
				}
				else return false;
			}
			else return false;
		}
		else return false;
	}
	private: System::Boolean CheckMoveDown(System::Windows::Forms::PictureBox^  moving)
	{
		// можно ли двигатья вниз = нет НИКАКИХ стен внизу
		if (CheckBorderDown(moving, pictureBox1))
		{
			if (CheckBorderDown(moving, pictureBox2))
			{
				if (CheckBorderDown(moving, pictureBox3))
				{
					if (CheckBorderDown(moving, pictureBox4))
					{
						if (CheckBorderDown(moving, pictureBox5))
						{
							if (CheckBorderDown(moving, pictureBox6))
								return true;
							else return false;
						}
						else return false;
					}
					else return false;
				}
				else return false;
			}
			else return false;
		}
		else return false;
	}
	private: System::Boolean CheckMoveUp(System::Windows::Forms::PictureBox^  moving)
	{
		// можно ли двигатья вверх = нет НИКАКИХ стен вверху
		if (CheckBorderUp(moving, pictureBox1))
		{
			if (CheckBorderUp(moving, pictureBox2))
			{
				if (CheckBorderUp(moving, pictureBox3))
				{
					if (CheckBorderUp(moving, pictureBox4))
					{
						if (CheckBorderUp(moving, pictureBox5))
						{
							if (CheckBorderUp(moving, pictureBox6))
								return true;
							else return false;
						}
						else return false;
					}
					else return false;
				}
				else return false;
			}
			else return false;
		}
		else return false;
	}


	private: System::Void Lvl2_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{
		Mark1->Visible = true;
		if (e->KeyCode == Keys::Right)
		{
			if (CheckMoveRight(Man1))
			{
				if (IsOnRight(Man1, Box1))
				{
					if (CheckMoveRight(Box1))
					{
						Box1->Location = System::Drawing::Point(Move1(Box1, 'r'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'r'));
					}
				}
				else Man1->Location = System::Drawing::Point(Move1(Man1, 'r'));
			}
		}
		else if (e->KeyCode == Keys::Left)
		{
			if (CheckMoveLeft(Man1))
			{
				if (IsOnLeft(Man1, Box1))
				{

					if (CheckMoveLeft(Box1))
					{
						Box1->Location = System::Drawing::Point(Move1(Box1, 'l'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'l'));
					}
				}
				else Man1->Location = System::Drawing::Point(Move1(Man1, 'l'));
			}
		}
		else if (e->KeyCode == Keys::Up)
		{
			if (CheckMoveUp(Man1))
			{

				if (IsOnUp(Man1, Box1))
				{

					if (CheckMoveUp(Box1))
					{
						Box1->Location = System::Drawing::Point(Move1(Box1, 'u'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'u'));

					}
				}
				else Man1->Location = System::Drawing::Point(Move1(Man1, 'u'));
			}
		}
		else if (e->KeyCode == Keys::Down)
		{
			if (CheckMoveDown(Man1))
			{
				if (IsOnDown(Man1, Box1))
				{
					if (CheckMoveDown(Box1))
					{
						Box1->Location = System::Drawing::Point(Move1(Box1, 'd'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
					}
				}
				else Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
			}
		}
		else if (e->KeyCode == Keys::R)
		{
			Box1->Location = System::Drawing::Point(250, 150);
			Man1->Location = System::Drawing::Point(250, 50);
		}
		if (CheckOnMark(Box1, Mark1))
		{
			button1->Visible = true;
			label1->Visible = true;
			Mark1->Visible = false;
		}
		if (CheckOnMark(Man1, Mark1)) Mark1->Visible = false;
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	};
}






