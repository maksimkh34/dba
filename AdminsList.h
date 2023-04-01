#pragma once
#include "RemoveUser.h"
#include "AddUser.h"
#include "ChangePassword.h"
#include "paths.h"
#include "trans.h"
#include "split.h"

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ AdminsList
	/// </summary>
	public ref class AdminsList : public System::Windows::Forms::Form
	{
	public:
		AdminsList(void)
		{
			InitializeComponent();
			//
			//TODO: äîáàâüòå êîä êîíñòğóêòîğà
			//
		}

	protected:
		/// <summary>
		/// Îñâîáîäèòü âñå èñïîëüçóåìûå ğåñóğñû.
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


	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüÏàğîëüToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ users_dg;


	private: System::Windows::Forms::ToolStripMenuItem^ èçìåíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ íàéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ Column1;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;








	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
		/// </summary>
		void InitializeComponent(void)
		{
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->èçìåíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->èçìåíèòüÏàğîëüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
				this->èçìåíèòüToolStripMenuItem,
					this->èçìåíèòüÏàğîëüToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(200, 24);
			this->menuStrip1->TabIndex = 8;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// èçìåíèòüToolStripMenuItem
			// 
			this->èçìåíèòüToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äîáàâèòüToolStripMenuItem1,
					this->íàéòèToolStripMenuItem, this->óäàëèòüToolStripMenuItem
			});
			this->èçìåíèòüToolStripMenuItem->Name = L"èçìåíèòüToolStripMenuItem";
			this->èçìåíèòüToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->èçìåíèòüToolStripMenuItem->Text = L"Ñåğâèñ";
			this->èçìåíèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminsList::èçìåíèòüToolStripMenuItem_Click);
			// 
			// äîáàâèòüToolStripMenuItem1
			// 
			this->äîáàâèòüToolStripMenuItem1->Name = L"äîáàâèòüToolStripMenuItem1";
			this->äîáàâèòüToolStripMenuItem1->Size = System::Drawing::Size(126, 22);
			this->äîáàâèòüToolStripMenuItem1->Text = L"Äîáàâèòü";
			this->äîáàâèòüToolStripMenuItem1->Click += gcnew System::EventHandler(this, &AdminsList::äîáàâèòüToolStripMenuItem1_Click);
			// 
			// íàéòèToolStripMenuItem
			// 
			this->íàéòèToolStripMenuItem->Name = L"íàéòèToolStripMenuItem";
			this->íàéòèToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->íàéòèToolStripMenuItem->Text = L"Íàéòè";
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(126, 22);
			this->óäàëèòüToolStripMenuItem->Text = L"Óäàëèòü";
			this->óäàëèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminsList::óäàëèòüToolStripMenuItem_Click);
			// 
			// èçìåíèòüÏàğîëüToolStripMenuItem
			// 
			this->èçìåíèòüÏàğîëüToolStripMenuItem->Name = L"èçìåíèòüÏàğîëüToolStripMenuItem";
			this->èçìåíèòüÏàğîëüToolStripMenuItem->Size = System::Drawing::Size(116, 20);
			this->èçìåíèòüÏàğîëüToolStripMenuItem->Text = L"Èçìåíèòü ïàğîëü";
			this->èçìåíèòüÏàğîëüToolStripMenuItem->Click += gcnew System::EventHandler(this, &AdminsList::èçìåíèòüÏàğîëüToolStripMenuItem_Click);
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
			this->Column1->HeaderText = L"¹ ï/ï";
			this->Column1->Name = L"Column1";
			this->Column1->ReadOnly = true;
			this->Column1->Width = 45;
			// 
			// name
			// 
			this->name->HeaderText = L"Èìÿ ";
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
			this->Text = L"Ïîëüçîâàòåëè";
			this->Load += gcnew System::EventHandler(this, &AdminsList::AdminsList_Load);
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->users_dg))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void äîáàâèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {


	}
	private: System::Void èçìåíèòüÏàğîëüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangePassword^ f = gcnew ChangePassword;
		f->ShowDialog();
	}
	private: System::Void AdminsList_Load(System::Object^ sender, System::EventArgs^ e) {
		ifstream inp(paths::get_path() + "\\usr.zb");
		vector<std::string>* __datas = new vector<std::string>;
		std::string* temp = new std::string;
		while (!inp.eof()) {
			getline(inp, *temp);
			__datas->push_back(*temp);
		}
		delete temp;
		vector<vector<std::string>> data;
		for (int i = 0; i < __datas->size(); i++) {
			data.push_back(split(__datas->at(i), '-'));
		}
		delete __datas;
		for (int i = 0; i < data.size(); i++)
		{
			users_dg->Rows->Add(i + 1, msclr::interop::marshal_as<System::String^>(data[i][0]));
			transf::setLastAddedUserNumber(i + 1);
		}
	}
	private: System::Void äîáàâèòüToolStripMenuItem1_Click(System::Object^ sender, System::EventArgs^ e) {
		AddUser^ f = gcnew AddUser;
		f->ShowDialog();
		ifstream inp(paths::get_path() + "\\usr.zb");
		vector<std::string> __datas;
		std::string* temp = new std::string;
		while (!inp.eof()) {
			getline(inp, *temp);
			__datas.push_back(*temp);
		}
		delete temp;
		std::string lastAddedName = split(__datas[__datas.size() - 1], '-')[0];
		users_dg->Rows->Add(transf::getLastAddedUserNumber(), msclr::interop::marshal_as<System::String^>(lastAddedName));
	}
	private: System::Void èçìåíèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void óäàëèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		//
		RemoveUser^ form = gcnew RemoveUser;
		form->ShowDialog();
		users_dg->Rows->Clear();
		ifstream inp(paths::get_path() + "\\usr.zb");
		vector<std::string>* __datas = new vector<std::string>;
		std::string* temp = new std::string;
		while (!inp.eof()) {
			getline(inp, *temp);
			__datas->push_back(*temp);
		}
		delete temp;
		vector<vector<std::string>> data;
		for (int i = 0; i < __datas->size(); i++) {
			data.push_back(split(__datas->at(i), '-'));
		}
		delete __datas;
		for (int i = 0; i < data.size(); i++)
		{
			users_dg->Rows->Add(i + 1, msclr::interop::marshal_as<System::String^>(data[i][0]));
			transf::setLastAddedUserNumber(i + 1);
		}

	}
	private: System::Void users_dg_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
