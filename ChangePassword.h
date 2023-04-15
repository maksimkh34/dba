#pragma once
#include <vector>
#include <fstream>
#include <sqlite3.h>
#include <unordered_map>
#include <windows.h>
#include <msclr/marshal_cppstd.h>

#include "paths.h"
#include "convert.h"
#include "split.h"
#include "trans.h"
#include "crypt.h"
#include "LoginError.h"
#include "UsrNotFound.h"

#define sst System::String^

using std::ifstream;
using std::ofstream;
using std::vector;

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для ChangePassword
	/// </summary>
	public ref class ChangePassword : public System::Windows::Forms::Form
	{
	public:
		ChangePassword(void)
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
		~ChangePassword()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ pass1_tb;
	private: System::Windows::Forms::TextBox^ pass2_tb;



	private: System::Windows::Forms::Button^ save_button;
	protected:

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->pass1_tb = (gcnew System::Windows::Forms::TextBox());
			this->pass2_tb = (gcnew System::Windows::Forms::TextBox());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(202, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Изменение пароля для пользователя ";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(12, 26);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(83, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Новый пароль:";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(12, 66);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(128, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Новый пароль еще раз:";
			// 
			// pass1_tb
			// 
			this->pass1_tb->Location = System::Drawing::Point(13, 43);
			this->pass1_tb->Name = L"pass1_tb";
			this->pass1_tb->Size = System::Drawing::Size(259, 20);
			this->pass1_tb->TabIndex = 3;
			this->pass1_tb->UseSystemPasswordChar = true;
			// 
			// pass2_tb
			// 
			this->pass2_tb->Location = System::Drawing::Point(13, 82);
			this->pass2_tb->Name = L"pass2_tb";
			this->pass2_tb->Size = System::Drawing::Size(259, 20);
			this->pass2_tb->TabIndex = 4;
			this->pass2_tb->UseSystemPasswordChar = true;
			// 
			// save_button
			// 
			this->save_button->Location = System::Drawing::Point(12, 108);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(260, 23);
			this->save_button->TabIndex = 5;
			this->save_button->Text = L"Сохранить";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &ChangePassword::save_button_Click);
			// 
			// ChangePassword
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 145);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->pass2_tb);
			this->Controls->Add(this->pass1_tb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"ChangePassword";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Изменение пароля";
			this->Load += gcnew System::EventHandler(this, &ChangePassword::ChangePassword_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ChangePassword_Load(System::Object^ sender, System::EventArgs^ e) {
		System::String^ name = msclr::interop::marshal_as<System::String^>(transf::getName());
		if (transf::getName() == "$UNSET$")
		{
			MessageBox::Show("Login was skipped. You can't change password logged out.");
			this->Close();
		}
		this->label1->Text += name + ":";
	}

	private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e) {
		
		sst pass = pass1_tb->Text;
		sst pass2 = pass2_tb->Text;
		std::string pwd = msclr::interop::marshal_as<std::string>(pass);
		std::string pwd2 = msclr::interop::marshal_as<std::string>(pass2);
		if (pwd != pwd2) {
			LoginError^ form = gcnew LoginError;
			form->ShowDialog();
			return;
		}
		sqlite3* db;
		std::string path = paths::get_path();
		path += "\\datab.zb";
		sqlite3_open(path.c_str(), &db);
		
		std::string sql = "";
		sql += "UPDATE Users SET hashpass=\"";
		std::hash<std::string> hasher;
		sql += convert(hasher(convert(pass)).ToString());
		sql += "\" WHERE name=\"";
		sql += transf::getName();
		sql += "\";";

		char* errMsg;

		if (sqlite3_exec(db, sql.c_str(), NULL, NULL, &errMsg) != SQLITE_OK)
		{
			std::string temp = "Error changing password: ";
			temp += errMsg;
			MessageBox::Show(convert(temp));
		}
		else
		{
			MessageBox::Show("Пароль обновлен! ");
			this->Close();
		}
	}
	};
}
