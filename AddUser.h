#pragma once
#include <string>
#include <msclr\marshal_cppstd.h>
#include "paths.h"
#include "crypt.h"
#include <unordered_map>
#include <sqlite3.h>
#include "convert.h"

extern std::vector<std::vector<std::string>> usernames_f;

namespace DBa {

	static int ulx_callback(void* data, int argc, char** argv, char** azColName)
	{
		std::vector<string> result;
		for (int i = 0; i < argc; i++)
		{
			result.push_back(azColName[i]);
			result.push_back(argv[i]);
		}
		usernames_f.push_back(result);
		return 0;
	}

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddUser
	/// </summary>
	public ref class AddUser : public System::Windows::Forms::Form
	{
	public:
		AddUser(void)
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
		~AddUser()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ name_tb;
	protected:
	private: System::Windows::Forms::TextBox^ pass_tb;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ save_button;

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
			this->name_tb = (gcnew System::Windows::Forms::TextBox());
			this->pass_tb = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// name_tb
			// 
			this->name_tb->Location = System::Drawing::Point(12, 25);
			this->name_tb->Name = L"name_tb";
			this->name_tb->Size = System::Drawing::Size(295, 20);
			this->name_tb->TabIndex = 0;
			// 
			// pass_tb
			// 
			this->pass_tb->Location = System::Drawing::Point(12, 64);
			this->pass_tb->Name = L"pass_tb";
			this->pass_tb->Size = System::Drawing::Size(295, 20);
			this->pass_tb->TabIndex = 1;
			this->pass_tb->UseSystemPasswordChar = true;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(103, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Имя пользователя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(45, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Пароль";
			// 
			// save_button
			// 
			this->save_button->Location = System::Drawing::Point(12, 90);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(295, 23);
			this->save_button->TabIndex = 4;
			this->save_button->Text = L"Сохранить";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &AddUser::save_button_Click);
			// 
			// AddUser
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(319, 120);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->pass_tb);
			this->Controls->Add(this->name_tb);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"AddUser";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление пользователя";
			this->Load += gcnew System::EventHandler(this, &AddUser::AddUser_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ password = pass_tb->Text;
		System::String^ login = name_tb->Text;

		sqlite3* db;
		std::string temp = paths::get_path();
		temp += "\\datab.zb";
		sqlite3_open(temp.c_str(), &db);
		std::string sql = "SELECT name FROM Users; ";
		char* errMsg;
		usernames_f.clear();
		if (sqlite3_exec(db, sql.c_str(), ulx_callback, NULL, &errMsg) != SQLITE_OK)
		{
			std::string temp = "Error parsing users from table: ";
			temp += errMsg;
			MessageBox::Show(convert(temp));
			return;
		}

		for (int i = 0; i < usernames_f.size(); i++)
		{
			if (usernames_f[i][1] == convert(login))
			{
				MessageBox::Show("Error: this user is already exists. ");
				return;
			}
		}

		if (password == "" || login == "")
		{
			MessageBox::Show("Введены неверные данные! ");
			return;
		}

		std::string pth = paths::get_path().c_str();
		pth += "\\datab.zb";
		sqlite3_open(pth.c_str(), &db);
		sql = "INSERT INTO Users VALUES(\"";

		sql += convert(login);
		sql += "\", \"";
		std::hash<std::string> hasher;

		sql += convert(hasher(convert(password)).ToString());
		sql += "\");";

		char* msgErr;
		if (sqlite3_exec(db, sql.c_str(), NULL, NULL, &msgErr) != SQLITE_OK)
		{
			std::string temp = "";
			temp += "Error while adding user: ";
			temp += msgErr;
			MessageBox::Show(convert(temp));
		}
		else
		{
			MessageBox::Show("Пользователь добавлен. ");
			this->Close();
		}
	}
	private: System::Void AddUser_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
