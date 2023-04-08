#pragma once

#include <string>
#include <vector>
#include <fstream>
#include <string>
#include <stdlib.h>
#include <msclr\marshal_cppstd.h>

#include "Main.h"
#include "exts.h"
#include "split.h"
#include "trans.h"
#include "crypt.h"
#include "paths.h"
#include "Logger.h"
#include "DBError.h"
#include "LoginError.h"

extern std::string username;

using std::ifstream;
using std::string;

std::vector<string> split(string text, char delimeter);

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ Login
	/// </summary>
	public ref class Login : public System::Windows::Forms::Form
	{
	public:
		Login(void)
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
		~Login()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ login_tb;
	private: System::Windows::Forms::TextBox^ pass_tb;

	private: System::Windows::Forms::Button^ auth_butt;
	private: System::Windows::Forms::Label^ label2;

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->login_tb = (gcnew System::Windows::Forms::TextBox());
			this->pass_tb = (gcnew System::Windows::Forms::TextBox());
			this->auth_butt = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label1->Location = System::Drawing::Point(12, 7);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(41, 16);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ћогин";
			// 
			// login_tb
			// 
			this->login_tb->BackColor = System::Drawing::Color::White;
			this->login_tb->Location = System::Drawing::Point(16, 25);
			this->login_tb->Name = L"login_tb";
			this->login_tb->Size = System::Drawing::Size(256, 20);
			this->login_tb->TabIndex = 1;
			// 
			// pass_tb
			// 
			this->pass_tb->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pass_tb->Location = System::Drawing::Point(16, 64);
			this->pass_tb->Name = L"pass_tb";
			this->pass_tb->Size = System::Drawing::Size(256, 20);
			this->pass_tb->TabIndex = 3;
			this->pass_tb->UseSystemPasswordChar = true;
			// 
			// auth_butt
			// 
			this->auth_butt->BackColor = System::Drawing::Color::White;
			this->auth_butt->ForeColor = System::Drawing::SystemColors::Control;
			this->auth_butt->Location = System::Drawing::Point(16, 90);
			this->auth_butt->Name = L"auth_butt";
			this->auth_butt->Size = System::Drawing::Size(256, 23);
			this->auth_butt->TabIndex = 4;
			this->auth_butt->Text = L"јвторизаци€";
			this->auth_butt->UseVisualStyleBackColor = false;
			this->auth_butt->Click += gcnew System::EventHandler(this, &Login::auth_butt_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Segoe MDL2 Assets", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::SystemColors::ButtonHighlight;
			this->label2->Location = System::Drawing::Point(13, 45);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(51, 16);
			this->label2->TabIndex = 5;
			this->label2->Text = L"ѕароль";
			// 
			// Login
			// 
			this->AcceptButton = this->auth_butt;
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(24)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->ClientSize = System::Drawing::Size(284, 126);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->auth_butt);
			this->Controls->Add(this->pass_tb);
			this->Controls->Add(this->login_tb);
			this->Controls->Add(this->label1);
			this->ForeColor = System::Drawing::SystemColors::AppWorkspace;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->MaximizeBox = false;
			this->MinimizeBox = false;
			this->Name = L"Login";
			this->Opacity = 0.8;
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"¬ход в систему";
			this->Load += gcnew System::EventHandler(this, &Login::Login_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void auth_butt_Click(System::Object^ sender, System::EventArgs^ e) {
		bool is_skipping_auth = false;
		if (pass_tb->Text == "" && login_tb->Text == "") {
			transf::setName("$UNSET");
			Main^ mf = gcnew Main;
			mf->Show();
			this->Hide();
			is_skipping_auth = true;
		
			Event skipped_auth(MID_T, "Auth skipped... ");
			transf::add_event(skipped_auth);
		}
		ifstream db(paths::get_path() + "\\usr.zb");
		if (!db.is_open())
		{
			DBError^ dbe = gcnew DBError;
			dbe->ShowDialog();

			Event db_error_ev(CRIT_T, "Error while opening database... ");
			transf::add_event(db_error_ev);
		}
		string data;
		std::vector<std::vector<string>> datas;
		while (!db.eof()) {
			getline(db, data);
			std::vector<string> data_v = split(sdecrypt(data), '-');
			datas.push_back(data_v);
		}

		String^ login_ = login_tb->Text;
		String^ passw_ = pass_tb->Text;

		bool auth = false;
		for (int i = 0; i < datas.size(); i++) {
			System::String^ login_sys = msclr::interop::marshal_as<System::String^>(datas[i][0]);
			System::String^ pass_sys = msclr::interop::marshal_as<System::String^>(datas[i][1]);

			if (login_sys == login_ && pass_sys == passw_)
			{
				auth = true;
				Event auth_done(INFO_T, "User " + msclr::interop::marshal_as<std::string>(login_sys) + " login done");
				transf::add_event(auth_done);
			}

		}
		if (!auth && !is_skipping_auth) {

			LoginError^ lef = gcnew LoginError;
			lef->ShowDialog();

			Event incorrent_login(WARN_T, "Login data incorrect: \"" +
				msclr::interop::marshal_as<std::string>(login_tb->Text) +
				"\" with pass \"" +
				msclr::interop::marshal_as<std::string>(pass_tb->Text)+
			"\"");
			transf::add_event(incorrent_login);
			transf::flush_l();

		}
		else
		{

			transf::setName(msclr::interop::marshal_as<std::string>(login_));
			Main^ mf = gcnew Main;
			mf->Show();
			this->Hide();

			push_event(INFO_T, "Main window prepaing...");
		}
	}

	private: System::Void Login_Load(System::Object^ sender, System::EventArgs^ e) {
		paths::load_path();
		push_event(INFO_T, "Login window load");
	}
	};
}


