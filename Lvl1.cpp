#include "Lvl1.h"
#include "Lvl2.h"
#include "Lvl3.h"
#include "Lvl4.h"
#include "Header.h"
using namespace System;
using namespace System::Windows::Forms;

namespace Pusher
{
	System::Void Lvl1::button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Lvl2^ f2 = gcnew Lvl2(this);
		f2->Show();
		this->Hide();
	}
	System::Void Lvl2::button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Lvl3^ f3 = gcnew Lvl3(this);
		f3->Show();
		this->Hide();
	}
	System::Void Lvl3::button1_Click(System::Object^  sender, System::EventArgs^  e)
	{
		Lvl4^ f4 = gcnew Lvl4(this);
		f4->Show();
		this->Hide();
	}

}
[STAThread]
void main()
{
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Pusher::Lvl1 form;
	Application::Run(%form);
}