#include "MyForm.h"
#include <windows.h>
#include "resource.h"
#include "utility"



#define long long long


[System::STAThreadAttribute]
int main(array<System::String^>^ args) {
	System::Windows::Forms::Application::EnableVisualStyles();
	System::Windows::Forms::Application::SetCompatibleTextRenderingDefault(false);
	SCT::MyForm form;
	System::Windows::Forms::Application::Run(% form);
}

long cnt = 0;
long ccnt = 20 * 60;
bool pause = true;
bool menu = true;
bool control = false;
bool alarm = false;
bool modem = false;





void SCT::MyForm::HideButtons() {
	s_increase->Visible = false;
	s_decrease->Visible = false;
	m_increase->Visible = false;
	m_decrease->Visible = false;
	h_increase->Visible = false;
	h_decrease->Visible = false;
}

void SCT::MyForm::ShowButtons() {
	s_increase->Visible = true;
	s_decrease->Visible = true;
	m_increase->Visible = true;
	m_decrease->Visible = true;
	h_increase->Visible = true;
	h_decrease->Visible = true;
}

void SCT::MyForm::Control_Check() {
	if (!control) {
		label2->ForeColor = System::Drawing::Color::DarkRed;
		if (!modem && !alarm) {
			modem = true; 
			PlaySound(MAKEINTRESOURCE(IDR_WAVE2), NULL, SND_RESOURCE | SND_ASYNC);
		}
	}
	else {
		control = false;
		ccnt = 20 * 60;
		control_res->BackColor = System::Drawing::SystemColors::ControlLightLight;
	}
}

void SCT::MyForm::Time_Finish() {
	label1->ForeColor = System::Drawing::Color::DarkRed;
	if (!alarm) {
		alarm = true;
		PlaySound(MAKEINTRESOURCE(IDR_WAVE1), NULL, SND_RESOURCE | SND_ASYNC);
	}
}


System::Void SCT::MyForm::s_increase_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Start();
	if (cnt + 1 < 360000) { cnt += 1; }
	return System::Void();
}

System::Void SCT::MyForm::s_decrease_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Start();
	if (cnt >= 1) {
		cnt -= 1;
	}
	return System::Void();
}

System::Void SCT::MyForm::m_increase_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Start();
	if (cnt + 60 < 360000)cnt += 60;
	return System::Void();
}

System::Void SCT::MyForm::m_decrease_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Start();
	if (cnt >= 60) {
		cnt -= 60;
	}
	return System::Void();
}

System::Void SCT::MyForm::h_increase_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Start();
	if (cnt < (3600 * 99)) {
		cnt += 3600;
	}
	return System::Void();
}

System::Void SCT::MyForm::h_decrease_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Start();
	if (cnt >= 3600) {
		cnt -= 3600;
	}
	return System::Void();
}

System::Void SCT::MyForm::play_but_Click(System::Object^ sender, System::EventArgs^ e)
{
	timer1->Start();
	if (pause) {
		timer1->Interval = 1000;
		play_but->Text = "Stop";
		pause = false;
		menu = false;
		HideButtons();
	}
	else {
		PlaySound(MAKEINTRESOURCE(IDR_WAVE3), NULL, SND_RESOURCE | SND_ASYNC);
		play_but->Text = "Go on";
		pause = true;
		menu = false;
	}
	return System::Void();
}

System::Void SCT::MyForm::set_but_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!menu && pause || cnt == 0) {
		PlaySound(MAKEINTRESOURCE(IDR_WAVE3), NULL, SND_RESOURCE | SND_ASYNC);
		alarm = false;
		modem = false;
		play_but->Text = "Start";
		label1->ForeColor = System::Drawing::SystemColors::ControlLightLight;
		menu = true;
		pause = true;
		ShowButtons();
		cnt = 0;
		ccnt = 20 * 60;
		control = false;
		control_res->BackColor = System::Drawing::SystemColors::ControlLightLight;
		label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
		timer1->Interval = 50;
	}
	if (menu) {
		cnt = 0;
	}
	return System::Void();
}

System::Void SCT::MyForm::control_res_Click(System::Object^ sender, System::EventArgs^ e)
{
	if (!menu) {
		if (!control) {
			//player2->Stop();
			modem = false;
			control = true;
			if (ccnt <= 0) {
				ccnt = 20 * 60;
				control = false;
				control_res->BackColor = System::Drawing::SystemColors::ControlLightLight;
				label2->ForeColor = System::Drawing::SystemColors::ControlLightLight;
			}
			control_res->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			PlaySound(MAKEINTRESOURCE(IDR_WAVE3), NULL, SND_RESOURCE | SND_ASYNC);
		} 
		
	}
	return System::Void();
}

System::Void SCT::MyForm::Screen_Update(Object^ object, EventArgs^ e)
{
	
	// time going
	if (!pause) {
		cnt--;
		ccnt--;
		if (cnt <= 0) {
			Time_Finish();
			cnt = 0;
		}
		if (ccnt < 0) {
			ccnt = 0;
		}
	}
	// main timer
	long h = cnt / 3600;
	long min = ((cnt % 3600) - (cnt % 60)) / 60;
	long sec = cnt % 60;
	label1->Text =  "" + h / 10 + h % 10 + ":" + min / 10 + min % 10 + ":" + sec / 10 + sec % 10;
	// control timer
	min = ((ccnt % 3600) - (ccnt % 60)) / 60;
	sec = ccnt % 60;
	label2->Text = "" + min / 10 + min % 10 + ":" + sec / 10 + sec % 10;
	if (ccnt <= 0) {
		Control_Check();
	}
	return Void();
}


