#pragma once
#include "Header.h"
#include "Lvl1.h"
#include "Lvl2.h"
#include "Lvl3.h"
namespace Pusher {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Lvl4
	/// </summary>
	public ref class Lvl4 : public System::Windows::Forms::Form
	{
	public:
		Lvl4(Lvl3^ parent)
		{
			InitializeComponent();
			parentForm = parent;
		}
	private: System::Windows::Forms::PictureBox^  Mark6;
	public:
	private: System::Windows::Forms::PictureBox^  Box2;
	private: System::Windows::Forms::PictureBox^  pictureBox8;
	private: System::Windows::Forms::PictureBox^  pictureBox6;

	private: System::Windows::Forms::PictureBox^  pictureBox7;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::PictureBox^  Mark1;
	private: System::Windows::Forms::PictureBox^  Man1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  Box1;

	private: System::Windows::Forms::PictureBox^  Mark3;
	private: System::Windows::Forms::PictureBox^  Mark4;
	private: System::Windows::Forms::PictureBox^  Mark2;
	private: System::Windows::Forms::PictureBox^  Box3;
	private: System::Windows::Forms::PictureBox^  Box4;
	private: System::Windows::Forms::PictureBox^  Box5;
	private: System::Windows::Forms::PictureBox^  Mark5;
	private: System::Windows::Forms::PictureBox^  Box6;
	private: Lvl3^ parentForm;
	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~Lvl4()
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Lvl4::typeid));
			this->Mark6 = (gcnew System::Windows::Forms::PictureBox());
			this->Box2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox8 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox7 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->Mark1 = (gcnew System::Windows::Forms::PictureBox());
			this->Man1 = (gcnew System::Windows::Forms::PictureBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->Box1 = (gcnew System::Windows::Forms::PictureBox());
			this->Mark3 = (gcnew System::Windows::Forms::PictureBox());
			this->Mark4 = (gcnew System::Windows::Forms::PictureBox());
			this->Mark2 = (gcnew System::Windows::Forms::PictureBox());
			this->Box3 = (gcnew System::Windows::Forms::PictureBox());
			this->Box4 = (gcnew System::Windows::Forms::PictureBox());
			this->Box5 = (gcnew System::Windows::Forms::PictureBox());
			this->Mark5 = (gcnew System::Windows::Forms::PictureBox());
			this->Box6 = (gcnew System::Windows::Forms::PictureBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Man1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark5))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box6))->BeginInit();
			this->SuspendLayout();
			// 
			// Mark6
			// 
			this->Mark6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mark6.Image")));
			this->Mark6->Location = System::Drawing::Point(50, 200);
			this->Mark6->Name = L"Mark6";
			this->Mark6->Size = System::Drawing::Size(50, 50);
			this->Mark6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Mark6->TabIndex = 57;
			this->Mark6->TabStop = false;
			// 
			// Box2
			// 
			this->Box2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box2.Image")));
			this->Box2->Location = System::Drawing::Point(200, 150);
			this->Box2->Name = L"Box2";
			this->Box2->Size = System::Drawing::Size(50, 50);
			this->Box2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box2->TabIndex = 56;
			this->Box2->TabStop = false;
			// 
			// pictureBox8
			// 
			this->pictureBox8->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox8->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox8.BackgroundImage")));
			this->pictureBox8->Location = System::Drawing::Point(150, 200);
			this->pictureBox8->Name = L"pictureBox8";
			this->pictureBox8->Size = System::Drawing::Size(50, 50);
			this->pictureBox8->TabIndex = 55;
			this->pictureBox8->TabStop = false;
			// 
			// pictureBox6
			// 
			this->pictureBox6->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox6->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox6.BackgroundImage")));
			this->pictureBox6->Location = System::Drawing::Point(100, 150);
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->Size = System::Drawing::Size(50, 150);
			this->pictureBox6->TabIndex = 54;
			this->pictureBox6->TabStop = false;
			// 
			// pictureBox7
			// 
			this->pictureBox7->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox7->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox7.BackgroundImage")));
			this->pictureBox7->Location = System::Drawing::Point(50, 150);
			this->pictureBox7->Name = L"pictureBox7";
			this->pictureBox7->Size = System::Drawing::Size(100, 50);
			this->pictureBox7->TabIndex = 53;
			this->pictureBox7->TabStop = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox5->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox5.BackgroundImage")));
			this->pictureBox5->Location = System::Drawing::Point(300, 0);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(50, 450);
			this->pictureBox5->TabIndex = 52;
			this->pictureBox5->TabStop = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox4->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox4.BackgroundImage")));
			this->pictureBox4->Location = System::Drawing::Point(100, 0);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(250, 50);
			this->pictureBox4->TabIndex = 50;
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox3->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox3.BackgroundImage")));
			this->pictureBox3->Location = System::Drawing::Point(0, 50);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(50, 400);
			this->pictureBox3->TabIndex = 49;
			this->pictureBox3->TabStop = false;
			// 
			// pictureBox2
			// 
			this->pictureBox2->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox2->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox2.BackgroundImage")));
			this->pictureBox2->Location = System::Drawing::Point(0, 400);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(350, 50);
			this->pictureBox2->TabIndex = 48;
			this->pictureBox2->TabStop = false;
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::SystemColors::ControlText;
			this->pictureBox1->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.BackgroundImage")));
			this->pictureBox1->Location = System::Drawing::Point(0, 50);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(150, 50);
			this->pictureBox1->TabIndex = 47;
			this->pictureBox1->TabStop = false;
			// 
			// Mark1
			// 
			this->Mark1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mark1.Image")));
			this->Mark1->Location = System::Drawing::Point(50, 100);
			this->Mark1->Name = L"Mark1";
			this->Mark1->Size = System::Drawing::Size(50, 50);
			this->Mark1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Mark1->TabIndex = 42;
			this->Mark1->TabStop = false;
			// 
			// Man1
			// 
			this->Man1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Man1.Image")));
			this->Man1->Location = System::Drawing::Point(100, 100);
			this->Man1->Name = L"Man1";
			this->Man1->Size = System::Drawing::Size(50, 50);
			this->Man1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Man1->TabIndex = 43;
			this->Man1->TabStop = false;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 25.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->ForeColor = System::Drawing::Color::Red;
			this->label1->Location = System::Drawing::Point(85, 453);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(165, 39);
			this->label1->TabIndex = 46;
			this->label1->Text = L"You win!!!";
			this->label1->Visible = false;
			// 
			// Box1
			// 
			this->Box1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box1.Image")));
			this->Box1->Location = System::Drawing::Point(150, 100);
			this->Box1->Name = L"Box1";
			this->Box1->Size = System::Drawing::Size(50, 50);
			this->Box1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box1->TabIndex = 44;
			this->Box1->TabStop = false;
			// 
			// Mark3
			// 
			this->Mark3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mark3.Image")));
			this->Mark3->Location = System::Drawing::Point(200, 250);
			this->Mark3->Name = L"Mark3";
			this->Mark3->Size = System::Drawing::Size(50, 50);
			this->Mark3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Mark3->TabIndex = 58;
			this->Mark3->TabStop = false;
			// 
			// Mark4
			// 
			this->Mark4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mark4.Image")));
			this->Mark4->Location = System::Drawing::Point(200, 350);
			this->Mark4->Name = L"Mark4";
			this->Mark4->Size = System::Drawing::Size(50, 50);
			this->Mark4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Mark4->TabIndex = 59;
			this->Mark4->TabStop = false;
			// 
			// Mark2
			// 
			this->Mark2->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mark2.Image")));
			this->Mark2->Location = System::Drawing::Point(250, 150);
			this->Mark2->Name = L"Mark2";
			this->Mark2->Size = System::Drawing::Size(50, 50);
			this->Mark2->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Mark2->TabIndex = 60;
			this->Mark2->TabStop = false;
			// 
			// Box3
			// 
			this->Box3->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box3.Image")));
			this->Box3->Location = System::Drawing::Point(200, 200);
			this->Box3->Name = L"Box3";
			this->Box3->Size = System::Drawing::Size(50, 50);
			this->Box3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box3->TabIndex = 62;
			this->Box3->TabStop = false;
			// 
			// Box4
			// 
			this->Box4->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box4.Image")));
			this->Box4->Location = System::Drawing::Point(200, 300);
			this->Box4->Name = L"Box4";
			this->Box4->Size = System::Drawing::Size(50, 50);
			this->Box4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box4->TabIndex = 63;
			this->Box4->TabStop = false;
			// 
			// Box5
			// 
			this->Box5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box5.Image")));
			this->Box5->Location = System::Drawing::Point(150, 300);
			this->Box5->Name = L"Box5";
			this->Box5->Size = System::Drawing::Size(50, 50);
			this->Box5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box5->TabIndex = 64;
			this->Box5->TabStop = false;
			// 
			// Mark5
			// 
			this->Mark5->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Mark5.Image")));
			this->Mark5->Location = System::Drawing::Point(150, 300);
			this->Mark5->Name = L"Mark5";
			this->Mark5->Size = System::Drawing::Size(50, 50);
			this->Mark5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->Mark5->TabIndex = 65;
			this->Mark5->TabStop = false;
			// 
			// Box6
			// 
			this->Box6->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"Box6.Image")));
			this->Box6->Location = System::Drawing::Point(50, 300);
			this->Box6->Name = L"Box6";
			this->Box6->Size = System::Drawing::Size(50, 50);
			this->Box6->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->Box6->TabIndex = 66;
			this->Box6->TabStop = false;
			// 
			// Lvl4
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(350, 495);
			this->Controls->Add(this->Box6);
			this->Controls->Add(this->Box4);
			this->Controls->Add(this->Box3);
			this->Controls->Add(this->Box2);
			this->Controls->Add(this->pictureBox8);
			this->Controls->Add(this->pictureBox6);
			this->Controls->Add(this->pictureBox7);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->Man1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->Box1);
			this->Controls->Add(this->Mark3);
			this->Controls->Add(this->Mark2);
			this->Controls->Add(this->Mark4);
			this->Controls->Add(this->Mark6);
			this->Controls->Add(this->Mark1);
			this->Controls->Add(this->Box5);
			this->Controls->Add(this->Mark5);
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Lvl4";
			this->Text = L"Lvl4";
			this->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &Lvl4::Lvl4_KeyDown);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox8))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox7))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Man1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Mark5))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->Box6))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Restart()
	{
		Box2->Location = System::Drawing::Point(200, 150);
		Man1->Location = System::Drawing::Point(100, 100);
		Box1->Location = System::Drawing::Point(150, 100);
		Box3->Location = System::Drawing::Point(200, 200);
		Box4->Location = System::Drawing::Point(200, 300);
		Box5->Location = System::Drawing::Point(150, 300);
		Box6->Location = System::Drawing::Point(50, 300);
	}
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

	private: System::Boolean CheckMoveRightBox(System::Windows::Forms::PictureBox^  moving)
	{
		bool t = false;
		// можно ли двигатья вверх = нет НИКАКИХ стен вверху
		if (CheckMoveRight(moving))
		{
			if (CheckBorderRight(moving, Box1))
			{
				if (CheckBorderRight(moving, Box2))
				{
					if (CheckBorderRight(moving, Box3))
					{
						if (CheckBorderRight(moving, Box4))
						{
							if (CheckBorderRight(moving, Box5))
							{
								if (CheckBorderRight(moving, Box6))
									t = true;
							}
						}
					}
				}
			}
		}
		return t;
	}
	private: System::Boolean CheckMoveLeftBox(System::Windows::Forms::PictureBox^  moving)
	{
		bool t = false;
		// можно ли двигатья вверх = нет НИКАКИХ стен вверху
		if (CheckMoveLeft(moving))
		{
			if (CheckBorderLeft(moving, Box1))
			{
				if (CheckBorderLeft(moving, Box2))
				{
					if (CheckBorderLeft(moving, Box3))
					{
						if (CheckBorderLeft(moving, Box4))
						{
							if (CheckBorderLeft(moving, Box5))
							{
								if (CheckBorderLeft(moving, Box6))
									t = true;
							}
						}
					}
				}
			}
		}
		return t;
	}
	private: System::Boolean CheckMoveDownBox(System::Windows::Forms::PictureBox^  moving)
	{
		bool t = false;
		// можно ли двигатья вверх = нет НИКАКИХ стен вверху
		if (CheckMoveDown(moving))
		{
			if (CheckBorderDown(moving, Box1))
			{
				if (CheckBorderDown(moving, Box2))
				{
					if (CheckBorderDown(moving, Box3))
					{
						if (CheckBorderDown(moving, Box4))
						{
							if (CheckBorderDown(moving, Box5))
							{
								if (CheckBorderDown(moving, Box6))
									t = true;
							}
						}
					}
				}
			}
		}
		return t;
	}
	private: System::Boolean CheckMoveUpBox(System::Windows::Forms::PictureBox^  moving)
	{
		bool t = false;
		// можно ли двигатья вверх = нет НИКАКИХ стен вверху
		if (CheckMoveUp(moving))
		{
			if (CheckBorderUp(moving, Box1))
			{
				if (CheckBorderUp(moving, Box2))
				{
					if (CheckBorderUp(moving, Box3))
					{
						if (CheckBorderUp(moving, Box4))
						{
							if (CheckBorderUp(moving, Box5))
							{
								if (CheckBorderUp(moving, Box6))
									t = true;
							}
						}
					}
				}
			}
		}
		return t;
	}
	private: System::Void Lvl4_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e)
	{

		if (e->KeyCode == Keys::Right)
		{
			if (CheckMoveRight(Man1))
			{
				if (IsOnRight(Man1, Box1))
				{
					if (CheckMoveRightBox(Box1))
					{
						Box1->Location = System::Drawing::Point(Move1(Box1, 'r'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'r'));
					}
				}
				else if (IsOnRight(Man1, Box2))
				{
					if (CheckMoveRightBox(Box2))
					{
						Box2->Location = System::Drawing::Point(Move1(Box2, 'r'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'r'));
					}
				}
				else if (IsOnRight(Man1, Box3))
				{
					if (CheckMoveRightBox(Box3))
					{
						Box3->Location = System::Drawing::Point(Move1(Box3, 'r'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'r'));
					}
				}
				else if (IsOnRight(Man1, Box4))
				{
					if (CheckMoveRightBox(Box4))
					{
						Box4->Location = System::Drawing::Point(Move1(Box4, 'r'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'r'));
					}
				}
				else if (IsOnRight(Man1, Box5))
				{
					if (CheckMoveRightBox(Box5))
					{
						Box5->Location = System::Drawing::Point(Move1(Box5, 'r'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'r'));
					}
				}
				else if (IsOnRight(Man1, Box6))
				{
					if (CheckMoveRightBox(Box6))
					{
						Box6->Location = System::Drawing::Point(Move1(Box6, 'r'));
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
					if (CheckMoveLeftBox(Box1))
					{
						Box1->Location = System::Drawing::Point(Move1(Box1, 'l'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'l'));
					}
				}
				else if (IsOnLeft(Man1, Box2))
				{
					if (CheckMoveLeftBox(Box2))
					{
						Box2->Location = System::Drawing::Point(Move1(Box2, 'l'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'l'));
					}
				}
				else if (IsOnLeft(Man1, Box3))
				{
					if (CheckMoveLeftBox(Box3))
					{
						Box3->Location = System::Drawing::Point(Move1(Box3, 'l'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'l'));
					}
				}
				else if (IsOnLeft(Man1, Box4))
				{
					if (CheckMoveLeftBox(Box4))
					{
						Box4->Location = System::Drawing::Point(Move1(Box4, 'l'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'l'));
					}
				}
				else if (IsOnLeft(Man1, Box5))
				{
					if (CheckMoveLeftBox(Box5))
					{
						Box5->Location = System::Drawing::Point(Move1(Box5, 'l'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'l'));
					}
				}
				else if (IsOnLeft(Man1, Box6))
				{
					if (CheckMoveLeftBox(Box6))
					{
						Box6->Location = System::Drawing::Point(Move1(Box6, 'l'));
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
					if (CheckMoveUpBox(Box1))
					{
						Box1->Location = System::Drawing::Point(Move1(Box1, 'u'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'u'));

					}
				}
				else if (IsOnUp(Man1, Box2))
				{
					if (CheckMoveUpBox(Box2))
					{
						Box2->Location = System::Drawing::Point(Move1(Box2, 'u'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'u'));

					}
				}
				else if (IsOnUp(Man1, Box3))
				{
					if (CheckMoveUpBox(Box3))
					{
						Box3->Location = System::Drawing::Point(Move1(Box3, 'u'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'u'));
					}
				}
				else if (IsOnUp(Man1, Box4))
				{
					if (CheckMoveUpBox(Box4))
					{
						Box4->Location = System::Drawing::Point(Move1(Box4, 'u'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'u'));
					}
				}
				else if (IsOnUp(Man1, Box5))
				{
					if (CheckMoveUpBox(Box5))
					{
						Box5->Location = System::Drawing::Point(Move1(Box5, 'u'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'u'));
					}
				}
				else if (IsOnUp(Man1, Box6))
				{
					if (CheckMoveUpBox(Box6))
					{
						Box6->Location = System::Drawing::Point(Move1(Box6, 'u'));
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
					if (CheckMoveDownBox(Box1))
					{
						Box1->Location = System::Drawing::Point(Move1(Box1, 'd'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
					}
				}
				else if (IsOnDown(Man1, Box2))
				{
					if (CheckMoveDownBox(Box2))
					{
						Box2->Location = System::Drawing::Point(Move1(Box2, 'd'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
					}
				}
				else if (IsOnDown(Man1, Box3))
				{
					if (CheckMoveDownBox(Box3))
					{
						Box3->Location = System::Drawing::Point(Move1(Box3, 'd'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
					}
				}
				else if (IsOnDown(Man1, Box4))
				{
					if (CheckMoveDownBox(Box4))
					{
						Box4->Location = System::Drawing::Point(Move1(Box4, 'd'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
					}
				}
				else if (IsOnDown(Man1, Box5))
				{
					if (CheckMoveDownBox(Box5))
					{
						Box5->Location = System::Drawing::Point(Move1(Box5, 'd'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
					}
				}
				else if (IsOnDown(Man1, Box6))
				{
					if (CheckMoveDownBox(Box6))
					{
						Box6->Location = System::Drawing::Point(Move1(Box6, 'd'));
						Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
					}
				}
				else Man1->Location = System::Drawing::Point(Move1(Man1, 'd'));
			}
		}
		else if (e->KeyCode == Keys::R)
		{
			Restart();
		}
		if (CheckOnMark(Box1, Mark1)&CheckOnMark(Box2, Mark2)&CheckOnMark(Box3, Mark3)&CheckOnMark(Box4, Mark4)&CheckOnMark(Box5, Mark5)&CheckOnMark(Box6, Mark6))
		{
			label1->Visible = true;
		}
	}

	};
}

