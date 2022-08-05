#include "Login.h"
#include "pch.h"
#include <msclr\marshal_cppstd.h>

 System::Void KeyAuthCCLRExample::Login::Login_Load(System::Object^ sender, System::EventArgs^ e)
	{
	 KeyAuthApp.init();
	 KeyAuthApp.check();
	 String^ Response = gcnew String(KeyAuthApp.data.success.ToString());
	 lbl_CSVS->Text = "Current Session Validation Status: " + Response;
	}
 System::Void KeyAuthCCLRExample::Login::btn_Login_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 std::string Username = msclr::interop::marshal_as<std::string>(txt_Username->Text);
	 std::string Password = msclr::interop::marshal_as<std::string>(txt_Password->Text);

	 KeyAuthApp.login(Username, Password);
	 if (KeyAuthApp.data.success)
	 {
		 lbl_Status->Text = "Success";
	 }
	 else
	 {
		 String^ Response = gcnew String(KeyAuthApp.data.message.c_str());
		 lbl_Status->Text = Response;
	 }
 }

 System::Void KeyAuthCCLRExample::Login::btn_Register_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 std::string Username = msclr::interop::marshal_as<std::string>(txt_Username->Text);
	 std::string Password = msclr::interop::marshal_as<std::string>(txt_Password->Text);
	 std::string License = msclr::interop::marshal_as<std::string>(txt_License->Text);

	 KeyAuthApp.regstr(Username, Password, License);
	if (KeyAuthApp.data.success)
	{
		lbl_Status->Text = "Success";
	}
	else
	{
		String^ Response = gcnew String(KeyAuthApp.data.message.c_str());
		lbl_Status->Text = Response;
	}

 }
 System::Void KeyAuthCCLRExample::Login::btn_Upgrade_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 std::string Username = msclr::interop::marshal_as<std::string>(txt_Username->Text);
	 std::string License = msclr::interop::marshal_as<std::string>(txt_License->Text);

	 KeyAuthApp.upgrade(Username, License);
	 if (KeyAuthApp.data.success)
	 {
		 lbl_Status->Text = "Success";
	 }
	 else
	 {
		 String^ Response = gcnew String(KeyAuthApp.data.message.c_str());
		 lbl_Status->Text = Response;
	 }
 }
 System::Void KeyAuthCCLRExample::Login::btn_License_Click(System::Object^ sender, System::EventArgs^ e)
 {
	 std::string License = msclr::interop::marshal_as<std::string>(txt_License->Text);

	 KeyAuthApp.license(License);
	 if (KeyAuthApp.data.success)
	 {
		 lbl_Status->Text = "Success";
	 }
	 else
	 {
		 String^ Response = gcnew String(KeyAuthApp.data.message.c_str());
		 lbl_Status->Text = Response;
	 }
 }
