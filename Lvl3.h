#pragma once
#include "Header.h"
#include "Lvl1.h"
#include "Lvl2.h"
namespace Pusher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lvl3
	/// </summary>
	public ref class Lvl3 : public System::Windows::Forms::Form
	{
	public:
		Lvl3(Lvl2^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	public:
	private: System::Windows::Forms::PictureBox^  pictureBox6;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  Mark1;
	private: System::Windows::Forms::PictureBox^  Man1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  Box1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox9;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  Box2;
	private: System::Windows::Forms::PictureBox^  Mark2;

	public:










	private: Lvl2^ parentForm;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Lvl3()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Lvl3::typeid));
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Mark1 = (gcnew System::Windows::Forms::PictureBox());
			this->Man1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Box1 = (gcnew System::Windows::Forms::PictureBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox9 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->Box2 = (gcnew System::Windows::Forms::PictureBox());
			this->Mark2 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Man1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark2))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(300, 50);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(50, 150);
			this->pictureBox5->TabIndex = 35;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(400, 150);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(250, 50);
			this->pictureBox6->TabIndex = 34;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(750, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(50, 350);
			this->pictureBox4->TabIndex = 33;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(0, 0);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 350);
			this->pictureBox3->TabIndex = 32;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(0, 300);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(750, 50);
			this->pictureBox2->TabIndex = 31;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(750, 50);
			this->pictureBox1->TabIndex = 30;
			this->pictureBox1->TabStop = false;
			// 
			// Mark1
			// 
			this->Mark1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mark1.Image")));
			this->Mark1->Location = System::Drawing::Point(150, 50);
			this->Mark1->Name = L"Mark1";
			this->Mark1->Size = System::Drawing::Size(50, 50);
			this->Mark1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Mark1->TabIndex = 25;
			this->Mark1->TabStop = false;
			// 
			// Man1
			// 
			this->Man1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Man1.Image")));
			this->Man1->Location = System::Drawing::Point(250, 50);
			this->Man1->Name = L"Man1";
			this->Man1->Size = System::Drawing::Size(50, 50);
			this->Man1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Man1->TabIndex = 26;
			this->Man1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(243, 353);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 39);
			this->label1->TabIndex = 29;
			this->label1->Text = L"Level Complete!";
			this->label1->Visible = false;
			// 
			// Box1
			// 
			this->Box1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box1.Image")));
			this->Box1->Location = System::Drawing::Point(400, 100);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(50, 50);
			this->Box1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box1->TabIndex = 27;
			this->Box1->TabStop = false;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(325, 395);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(111, 35);
			this->button1->TabIndex = 28;
			this->button1->Text = L"Start Next Level";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &Lvl3::button1_Click);
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(200, 100);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 50);
			this->pictureBox7->TabIndex = 36;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox9
			// 
			this->pictureBox9->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox9->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox9.BackgroundImage")));
			this->pictureBox9->Location = System::Drawing::Point(500, 100);
			this->pictureBox9->Name = L"pictureBox9";
			this->pictureBox9->Size = System::Drawing::Size(50, 150);
			this->pictureBox9->TabIndex = 38;
			this->pictureBox9->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Location = System::Drawing::Point(350, 250);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(50, 50);
			this->pictureBox8->TabIndex = 39;
			this->pictureBox8->TabStop = false;
			// 
			// Box2
			// 
			this->Box2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box2.Image")));
			this->Box2->Location = System::Drawing::Point(600, 100);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(50, 50);
			this->Box2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box2->TabIndex = 40;
			this->Box2->TabStop = false;
			// 
			// Mark2
			// 
			this->Mark2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mark2.Image")));
			this->Mark2->Location = System::Drawing::Point(500, 250);
			this->Mark2->Name = L"Mark2";
			this->Mark2->Size = System::Drawing::Size(50, 50);
			this->Mark2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Mark2->TabIndex = 41;
			this->Mark2->TabStop = false;
			// 
			// Lvl3
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 437);
			this->Controls->Add(this->Box2);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox9);
			this->Controls->Add(this->pictureBox7);
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
			this->Controls->Add(this->Mark2);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Lvl3";
			this->Text = L"Lvl3";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Lvl3::Lvl3_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Man1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox9))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark2))->EndInit();
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
							{
								if (CheckBorderRight(moving, pictureBox7))
								{
									if (CheckBorderRight(moving, pictureBox8))
									{
										if (CheckBorderRight(moving, pictureBox9))
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
							{
								if (CheckBorderLeft(moving, pictureBox7))
								{
									if (CheckBorderLeft(moving, pictureBox8))
									{
										if (CheckBorderLeft(moving, pictureBox9))
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
							{
								if (CheckBorderDown(moving, pictureBox7))
								{
									if (CheckBorderDown(moving, pictureBox8))
									{
										if (CheckBorderDown(moving, pictureBox9))
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
							{
								if (CheckBorderUp(moving, pictureBox7))
								{
									if (CheckBorderUp(moving, pictureBox8))
									{
										if (CheckBorderUp(moving, pictureBox9))
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
				else return false;
			}
			else return false;
		}
		else return false;
	}


	private: System::Void Lvl3_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
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
				else if (IsOnRight(Man1, Box2))
				{
					if (CheckMoveRight(Box2))
					{
						Box2->Location = System::Drawing::Point(Move1(Box2, 'r'));
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
				else if (IsOnLeft(Man1, Box2))
				{
					if (CheckMoveLeft(Box2))
					{
						Box2->Location = System::Drawing::Point(Move1(Box2, 'l'));
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
				else if (IsOnUp(Man1, Box2))
				{
					if (CheckMoveUp(Box2))
					{
						Box2->Location = System::Drawing::Point(Move1(Box2, 'u'));
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
				else if (IsOnDown(Man1, Box2))
				{
					if (CheckMoveDown(Box2))
					{
						Box2->Location = System::Drawing::Point(Move1(Box2, 'd'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
					}
				}
				else Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
			}
		}
		else if (e->KeyCode == Keys::R)
		{
			Box1->Location = System::Drawing::Point(400, 100);
			Box2->Location = System::Drawing::Point(600, 100);
			Man1->Location = System::Drawing::Point(250, 50);
		}
		if (CheckOnMark(Box1, Mark1)&CheckOnMark(Box2, Mark2))
		{
			button1->Visible = true;
			label1->Visible = true;
		}
	}
	private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e);
	};
}
