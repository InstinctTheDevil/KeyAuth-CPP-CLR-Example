#pragma once
namespace KeyAuthCCLRExample {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login()
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: Guna::UI2::WinForms::Guna2HtmlLabel^ lbl_Status;
	private: Guna::UI2::WinForms::Guna2HtmlLabel^ lbl_CSVS;

	protected:


	private: Guna::UI2::WinForms::Guna2Button^ btn_License;
	private: Guna::UI2::WinForms::Guna2Button^ btn_Upgrade;
	private: Guna::UI2::WinForms::Guna2Button^ btn_Login;
	private: Guna::UI2::WinForms::Guna2Button^ btn_Register;
	private: Guna::UI2::WinForms::Guna2TextBox^ txt_License;

	private: Guna::UI2::WinForms::Guna2TextBox^ txt_Password;

	private: Guna::UI2::WinForms::Guna2TextBox^ txt_Username;

	private: Guna::UI2::WinForms::Guna2ControlBox^ guna2ControlBox1;
	private: Guna::UI2::WinForms::Guna2ControlBox^ guna2ControlBox2;
	private: Guna::UI2::WinForms::Guna2HtmlLabel^ guna2HtmlLabel1;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lbl_Status = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
			this->lbl_CSVS = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
			this->btn_License = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btn_Upgrade = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btn_Login = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->btn_Register = (gcnew Guna::UI2::WinForms::Guna2Button());
			this->txt_License = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->txt_Password = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->txt_Username = (gcnew Guna::UI2::WinForms::Guna2TextBox());
			this->guna2ControlBox1 = (gcnew Guna::UI2::WinForms::Guna2ControlBox());
			this->guna2ControlBox2 = (gcnew Guna::UI2::WinForms::Guna2ControlBox());
			this->guna2HtmlLabel1 = (gcnew Guna::UI2::WinForms::Guna2HtmlLabel());
			this->SuspendLayout();
			// 
			// lbl_Status
			// 
			this->lbl_Status->AutoSize = false;
			this->lbl_Status->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->lbl_Status->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lbl_Status->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12, System::Drawing::FontStyle::Bold));
			this->lbl_Status->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_Status->Location = System::Drawing::Point(0, 302);
			this->lbl_Status->Name = L"lbl_Status";
			this->lbl_Status->Size = System::Drawing::Size(332, 42);
			this->lbl_Status->TabIndex = 1;
			this->lbl_Status->Text = L"Status: Awaiting Login";
			this->lbl_Status->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// lbl_CSVS
			// 
			this->lbl_CSVS->AutoSize = false;
			this->lbl_CSVS->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->lbl_CSVS->Dock = System::Windows::Forms::DockStyle::Bottom;
			this->lbl_CSVS->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->lbl_CSVS->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lbl_CSVS->Location = System::Drawing::Point(0, 260);
			this->lbl_CSVS->Name = L"lbl_CSVS";
			this->lbl_CSVS->Size = System::Drawing::Size(332, 42);
			this->lbl_CSVS->TabIndex = 2;
			this->lbl_CSVS->Text = L"Current Session Validation Status: ";
			this->lbl_CSVS->TextAlignment = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// btn_License
			// 
			this->btn_License->Animated = true;
			this->btn_License->AutoRoundedCorners = true;
			this->btn_License->BorderColor = System::Drawing::Color::DodgerBlue;
			this->btn_License->BorderRadius = 14;
			this->btn_License->BorderThickness = 1;
			this->btn_License->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btn_License->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btn_License->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btn_License->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btn_License->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->btn_License->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->btn_License->ForeColor = System::Drawing::Color::White;
			this->btn_License->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->btn_License->Location = System::Drawing::Point(169, 209);
			this->btn_License->Name = L"btn_License";
			this->btn_License->Size = System::Drawing::Size(153, 31);
			this->btn_License->TabIndex = 3;
			this->btn_License->TabStop = false;
			this->btn_License->Text = L"License";
			this->btn_License->Click += gcnew System::EventHandler(this, &Login::btn_License_Click);
			// 
			// btn_Upgrade
			// 
			this->btn_Upgrade->Animated = true;
			this->btn_Upgrade->AutoRoundedCorners = true;
			this->btn_Upgrade->BorderColor = System::Drawing::Color::DodgerBlue;
			this->btn_Upgrade->BorderRadius = 14;
			this->btn_Upgrade->BorderThickness = 1;
			this->btn_Upgrade->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btn_Upgrade->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btn_Upgrade->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btn_Upgrade->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btn_Upgrade->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->btn_Upgrade->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->btn_Upgrade->ForeColor = System::Drawing::Color::White;
			this->btn_Upgrade->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->btn_Upgrade->Location = System::Drawing::Point(10, 209);
			this->btn_Upgrade->Name = L"btn_Upgrade";
			this->btn_Upgrade->Size = System::Drawing::Size(153, 31);
			this->btn_Upgrade->TabIndex = 4;
			this->btn_Upgrade->TabStop = false;
			this->btn_Upgrade->Text = L"Upgrade";
			this->btn_Upgrade->Click += gcnew System::EventHandler(this, &Login::btn_Upgrade_Click);
			// 
			// btn_Login
			// 
			this->btn_Login->Animated = true;
			this->btn_Login->AutoRoundedCorners = true;
			this->btn_Login->BorderColor = System::Drawing::Color::DodgerBlue;
			this->btn_Login->BorderRadius = 14;
			this->btn_Login->BorderThickness = 1;
			this->btn_Login->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btn_Login->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btn_Login->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btn_Login->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btn_Login->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->btn_Login->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->btn_Login->ForeColor = System::Drawing::Color::White;
			this->btn_Login->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->btn_Login->Location = System::Drawing::Point(10, 172);
			this->btn_Login->Name = L"btn_Login";
			this->btn_Login->Size = System::Drawing::Size(153, 31);
			this->btn_Login->TabIndex = 5;
			this->btn_Login->TabStop = false;
			this->btn_Login->Text = L"Login";
			this->btn_Login->Click += gcnew System::EventHandler(this, &Login::btn_Login_Click);
			// 
			// btn_Register
			// 
			this->btn_Register->Animated = true;
			this->btn_Register->AutoRoundedCorners = true;
			this->btn_Register->BorderColor = System::Drawing::Color::DodgerBlue;
			this->btn_Register->BorderRadius = 14;
			this->btn_Register->BorderThickness = 1;
			this->btn_Register->DisabledState->BorderColor = System::Drawing::Color::DarkGray;
			this->btn_Register->DisabledState->CustomBorderColor = System::Drawing::Color::DarkGray;
			this->btn_Register->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(169)),
				static_cast<System::Int32>(static_cast<System::Byte>(169)), static_cast<System::Int32>(static_cast<System::Byte>(169)));
			this->btn_Register->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(141)),
				static_cast<System::Int32>(static_cast<System::Byte>(141)), static_cast<System::Int32>(static_cast<System::Byte>(141)));
			this->btn_Register->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->btn_Register->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->btn_Register->ForeColor = System::Drawing::Color::White;
			this->btn_Register->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(213)),
				static_cast<System::Int32>(static_cast<System::Byte>(218)), static_cast<System::Int32>(static_cast<System::Byte>(223)));
			this->btn_Register->Location = System::Drawing::Point(169, 172);
			this->btn_Register->Name = L"btn_Register";
			this->btn_Register->Size = System::Drawing::Size(153, 31);
			this->btn_Register->TabIndex = 6;
			this->btn_Register->TabStop = false;
			this->btn_Register->Text = L"Register";
			this->btn_Register->Click += gcnew System::EventHandler(this, &Login::btn_Register_Click);
			// 
			// txt_License
			// 
			this->txt_License->Animated = true;
			this->txt_License->AutoRoundedCorners = true;
			this->txt_License->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->txt_License->BorderRadius = 14;
			this->txt_License->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_License->DefaultText = L"";
			this->txt_License->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_License->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_License->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_License->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_License->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->txt_License->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_License->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->txt_License->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_License->Location = System::Drawing::Point(48, 126);
			this->txt_License->Name = L"txt_License";
			this->txt_License->PasswordChar = '\0';
			this->txt_License->PlaceholderText = L"Key";
			this->txt_License->SelectedText = L"";
			this->txt_License->Size = System::Drawing::Size(236, 30);
			this->txt_License->TabIndex = 7;
			this->txt_License->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_Password
			// 
			this->txt_Password->Animated = true;
			this->txt_Password->AutoRoundedCorners = true;
			this->txt_Password->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->txt_Password->BorderRadius = 14;
			this->txt_Password->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_Password->DefaultText = L"";
			this->txt_Password->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_Password->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_Password->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_Password->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_Password->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->txt_Password->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_Password->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->txt_Password->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_Password->Location = System::Drawing::Point(48, 90);
			this->txt_Password->Name = L"txt_Password";
			this->txt_Password->PasswordChar = '*';
			this->txt_Password->PlaceholderText = L"Password";
			this->txt_Password->SelectedText = L"";
			this->txt_Password->Size = System::Drawing::Size(236, 30);
			this->txt_Password->TabIndex = 8;
			this->txt_Password->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// txt_Username
			// 
			this->txt_Username->Animated = true;
			this->txt_Username->AutoRoundedCorners = true;
			this->txt_Username->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(127)),
				static_cast<System::Int32>(static_cast<System::Byte>(243)));
			this->txt_Username->BorderRadius = 14;
			this->txt_Username->Cursor = System::Windows::Forms::Cursors::IBeam;
			this->txt_Username->DefaultText = L"";
			this->txt_Username->DisabledState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(208)),
				static_cast<System::Int32>(static_cast<System::Byte>(208)), static_cast<System::Int32>(static_cast<System::Byte>(208)));
			this->txt_Username->DisabledState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(226)),
				static_cast<System::Int32>(static_cast<System::Byte>(226)), static_cast<System::Int32>(static_cast<System::Byte>(226)));
			this->txt_Username->DisabledState->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_Username->DisabledState->PlaceholderForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(138)),
				static_cast<System::Int32>(static_cast<System::Byte>(138)), static_cast<System::Int32>(static_cast<System::Byte>(138)));
			this->txt_Username->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->txt_Username->FocusedState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_Username->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->txt_Username->HoverState->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(94)),
				static_cast<System::Int32>(static_cast<System::Byte>(148)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->txt_Username->Location = System::Drawing::Point(48, 54);
			this->txt_Username->Name = L"txt_Username";
			this->txt_Username->PasswordChar = '\0';
			this->txt_Username->PlaceholderText = L"Username";
			this->txt_Username->SelectedText = L"";
			this->txt_Username->Size = System::Drawing::Size(236, 30);
			this->txt_Username->TabIndex = 9;
			this->txt_Username->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// guna2ControlBox1
			// 
			this->guna2ControlBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->guna2ControlBox1->Animated = true;
			this->guna2ControlBox1->BorderRadius = 10;
			this->guna2ControlBox1->FillColor = System::Drawing::Color::Transparent;
			this->guna2ControlBox1->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->guna2ControlBox1->HoverState->IconColor = System::Drawing::Color::White;
			this->guna2ControlBox1->IconColor = System::Drawing::Color::White;
			this->guna2ControlBox1->Location = System::Drawing::Point(283, 4);
			this->guna2ControlBox1->Name = L"guna2ControlBox1";
			this->guna2ControlBox1->Size = System::Drawing::Size(45, 29);
			this->guna2ControlBox1->TabIndex = 10;
			// 
			// guna2ControlBox2
			// 
			this->guna2ControlBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->guna2ControlBox2->Animated = true;
			this->guna2ControlBox2->BorderRadius = 10;
			this->guna2ControlBox2->FillColor = System::Drawing::Color::Transparent;
			this->guna2ControlBox2->HoverState->FillColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(232)),
				static_cast<System::Int32>(static_cast<System::Byte>(17)), static_cast<System::Int32>(static_cast<System::Byte>(35)));
			this->guna2ControlBox2->HoverState->IconColor = System::Drawing::Color::White;
			this->guna2ControlBox2->IconColor = System::Drawing::Color::White;
			this->guna2ControlBox2->Location = System::Drawing::Point(237, 4);
			this->guna2ControlBox2->Name = L"guna2ControlBox2";
			this->guna2ControlBox2->Size = System::Drawing::Size(45, 29);
			this->guna2ControlBox2->TabIndex = 11;
			// 
			// guna2HtmlLabel1
			// 
			this->guna2HtmlLabel1->BackColor = System::Drawing::Color::Transparent;
			this->guna2HtmlLabel1->Font = (gcnew System::Drawing::Font(L"Segoe UI Semibold", 10.2F, System::Drawing::FontStyle::Bold));
			this->guna2HtmlLabel1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->guna2HtmlLabel1->Location = System::Drawing::Point(10, 11);
			this->guna2HtmlLabel1->Name = L"guna2HtmlLabel1";
			this->guna2HtmlLabel1->Size = System::Drawing::Size(84, 21);
			this->guna2HtmlLabel1->TabIndex = 12;
			this->guna2HtmlLabel1->Text = L"Loader Login";
			// 
			// Login
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(35)), static_cast<System::Int32>(static_cast<System::Byte>(39)),
				static_cast<System::Int32>(static_cast<System::Byte>(42)));
			this->ClientSize = System::Drawing::Size(332, 344);
			this->Controls->Add(this->guna2HtmlLabel1);
			this->Controls->Add(this->guna2ControlBox2);
			this->Controls->Add(this->guna2ControlBox1);
			this->Controls->Add(this->txt_Username);
			this->Controls->Add(this->txt_Password);
			this->Controls->Add(this->txt_License);
			this->Controls->Add(this->btn_Register);
			this->Controls->Add(this->btn_Login);
			this->Controls->Add(this->btn_Upgrade);
			this->Controls->Add(this->btn_License);
			this->Controls->Add(this->lbl_CSVS);
			this->Controls->Add(this->lbl_Status);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Login";
			this->Text = L"Login";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_Login_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_Register_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_Upgrade_Click(System::Object^ sender, System::EventArgs^ e);
private: System::Void btn_License_Click(System::Object^ sender, System::EventArgs^ e);
};
}
