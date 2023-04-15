#pragma once
#include <vector>

#include "AddUser.h"
#include "ChangePassword.h"
#include "paths.h"
#include "trans.h"
#include "split.h"
#include <sqlite3.h>
#include "convert.h"

extern std::vector<std::vector<std::string>> usernames;

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	static int ul_callback(void* data, int argc, char** argv, char** azColName)
	{
		std::vector<string> result;
		for (int i = 0; i < argc; i++)
		{
			result.push_back(azColName[i]);
			result.push_back(argv[i]);
		}
		usernames.push_back(result);
		return 0;
	}

	/// <summary>
	/// ������ ��� AdminsList
	/// </summary>
	public ref class AdminsList : public System::Windows::Forms::Form
	{
	public:
		AdminsList(void)
		{
			InitializeComponent();
			//
			//TODO: �������� ��� ������������
			//
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~AdminsList()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:


	private: System::Windows::Forms::ToolStripMenuItem^ ��������������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ users_dg;


	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem1;

	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;








	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->users_dg = (gcnew System::Windows::Forms::DataGridView());
			this->Column1 = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->users_dg))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������ToolStripMenuItem,
					this->��������������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(200, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->��������ToolStripMenuItem1,
					this->�������ToolStripMenuItem
			});
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->��������ToolStripMenuItem->Text = L"������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminsList::��������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem1
			// 
			this->��������ToolStripMenuItem1->Name = L"��������ToolStripMenuItem1";
			this->��������ToolStripMenuItem1->Size = System::Drawing::Size(180, 22);
			this->��������ToolStripMenuItem1->Text = L"��������";
			this->��������ToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminsList::��������ToolStripMenuItem1_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminsList::�������ToolStripMenuItem_Click);
			// 
			// ��������������ToolStripMenuItem
			// 
			this->��������������ToolStripMenuItem->Name = L"��������������ToolStripMenuItem";
			this->��������������ToolStripMenuItem->Size = System::Drawing::Size(116, 20);
			this->��������������ToolStripMenuItem->Text = L"�������� ������";
			this->��������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminsList::��������������ToolStripMenuItem_Click);
			// 
			// users_dg
			// 
			this->users_dg->AllowUserToAddRows = false;
			this->users_dg->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->users_dg->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->Column1, this->name });
			this->users_dg->EditMode = System::Windows::Forms::DataGridViewEditMode::EditProgrammatically;
			this->users_dg->Location = System::Drawing::Point(13, 28);
			this->users_dg->Name = L"users_dg";
			this->users_dg->ReadOnly = true;
			this->users_dg->RowHeadersVisible = false;
			this->users_dg->Size = System::Drawing::Size(174, 278);
			this->users_dg->TabIndex = 9;
			this->users_dg->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminsList::users_dg_CellContentClick);
			// 
			// Column1
			// 
			this->Column1->HeaderText = L"� �/�";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 45;
			// 
			// name
			// 
			this->name->HeaderText = L"��� ";
			this->name->Name = L"name";
			this->name->ReadOnly = true;
			this->name->Width = 125;
			// 
			// AdminsList
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(200, 318);
			this->Controls->Add(this->users_dg);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"AdminsList";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"������������";
			this->Load += gcnew System::EventHandler(this, &AdminsList::AdminsList_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->users_dg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void ��������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangePassword^ f = gcnew ChangePassword;
		f->ShowDialog();
	}
	private: System::Void AdminsList_Load(System::Object^ sender, System::EventArgs^ e) {
		usernames.clear();
		users_dg->Rows->Clear();
		sqlite3* db;
		std::string temp = paths::get_path();
		temp += "\\datab.zb";
		sqlite3_open(temp.c_str(), &db);
		std::string sql = "SELECT name FROM Users; ";
		char* errMsg;
		if (sqlite3_exec(db, sql.c_str(), ul_callback, NULL, &errMsg) != SQLITE_OK)
		{
			std::string temp = "Error parsing users from table: ";
			temp += errMsg;
			MessageBox::Show(convert(temp));
			return;
		}
		for (int i = 0; i < usernames.size(); i++)
		{
			users_dg->Rows->Add(
				i+1,
				convert(usernames[i][1])
				);
		}
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

		sqlite3* db;
		string path = paths::get_path() + string("\\datab.zb");
		sqlite3_open(path.c_str(), &db);

		System::String^ name_to_del = users_dg->CurrentRow->Cells[1]->Value->ToString();
		if (transf::getName() == convert(name_to_del))
		{
			MessageBox::Show("Error: you can't delete yourself. Login as other user");
			return;
		}
		if (users_dg->Rows->Count <= 1)
		{
			MessageBox::Show("Error: do not delete last user. You wouldn't login later");
			return;
		}
		std::string sql = "DELETE FROM Users WHERE name='" + convert(name_to_del) + "'";

		char* errMsg;
		if (sqlite3_exec(db, sql.c_str(), NULL, NULL, &errMsg) != SQLITE_OK)
		{
			std::string temp = "Error deleting user: ";
			temp += errMsg;
			MessageBox::Show(convert(temp));
		}
		AdminsList_Load(sender, e);
	}
	private: System::Void users_dg_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	private: System::Void ��������ToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		AddUser^ f = gcnew AddUser;
		f->ShowDialog();
		AdminsList_Load(sender, e);
	}
};
}
