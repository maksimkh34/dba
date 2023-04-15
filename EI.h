#pragma once
#include <windows.h>
#include <sqlite3.h>
#include "Confirm.h"
#include "mcsv.h"
#include "convert.h"
#include "Event.h"
#include "AddEI.h"
#include "trans.h"
#include "paths.h"

namespace DBa {

	static int callback(void* data, int argc, char** argv, char** azColName)
	{
		std::vector<string> result;
		for (int i = 0; i < argc; i++)
		{
			result.push_back(azColName[i]);
			result.push_back(argv[i]);
		}
		transf::data_callback.push_back(result);
		return 0;
	}

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// ������ ��� EI
	/// </summary>
	public ref class EI : public System::Windows::Forms::Form
	{
	public:
		EI(void)
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
		~EI()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ main_dg;

	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ rows_num_tb;












	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ������������ToolStripMenuItem;



	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ ��������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �����������ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ �������ToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ pod;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ org;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ org_form;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ leader;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ email;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ site;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ unp;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ contact;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ adress;

	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(EI::typeid));
			this->main_dg = (gcnew System::Windows::Forms::DataGridView());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->pod = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->org = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->org_form = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->leader = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->email = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->site = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->unp = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->contact = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->adress = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->rows_num_tb = (gcnew System::Windows::Forms::TextBox());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->������������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->��������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->�����������ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->saveFileDialog1 = (gcnew System::Windows::Forms::SaveFileDialog());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_dg))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_dg
			// 
			this->main_dg->AllowUserToAddRows = false;
			this->main_dg->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->main_dg->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(11) {
				this->num, this->name,
					this->pod, this->org, this->org_form, this->leader, this->email, this->site, this->unp, this->contact, this->adress
			});
			this->main_dg->Location = System::Drawing::Point(8, 27);
			this->main_dg->Name = L"main_dg";
			this->main_dg->RowHeadersVisible = false;
			this->main_dg->Size = System::Drawing::Size(1254, 593);
			this->main_dg->StandardTab = true;
			this->main_dg->TabIndex = 0;
			this->main_dg->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EI::dataGridView1_CellContentClick);
			// 
			// num
			// 
			this->num->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->num->HeaderText = L"��/�";
			this->num->Name = L"num";
			this->num->Width = 60;
			// 
			// name
			// 
			this->name->HeaderText = L"������������";
			this->name->Name = L"name";
			this->name->Width = 110;
			// 
			// pod
			// 
			this->pod->HeaderText = L"����������";
			this->pod->Name = L"pod";
			this->pod->Width = 130;
			// 
			// org
			// 
			this->org->HeaderText = L"����������� �����";
			this->org->Name = L"org";
			this->org->Width = 140;
			// 
			// org_form
			// 
			this->org_form->HeaderText = L"��������������-�������� �����";
			this->org_form->Name = L"org_form";
			this->org_form->Width = 150;
			// 
			// leader
			// 
			this->leader->HeaderText = L"������������";
			this->leader->Name = L"leader";
			this->leader->Width = 150;
			// 
			// email
			// 
			this->email->HeaderText = L"����������� �����";
			this->email->Name = L"email";
			this->email->Width = 110;
			// 
			// site
			// 
			this->site->HeaderText = L"����";
			this->site->Name = L"site";
			// 
			// unp
			// 
			this->unp->HeaderText = L"���";
			this->unp->Name = L"unp";
			this->unp->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// contact
			// 
			this->contact->HeaderText = L"��������";
			this->contact->Name = L"contact";
			// 
			// adress
			// 
			this->adress->HeaderText = L"�����";
			this->adress->Name = L"adress";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1102, 11);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"���-�� �������:";
			this->label1->Click += gcnew System::EventHandler(this, &EI::label1_Click);
			// 
			// rows_num_tb
			// 
			this->rows_num_tb->Location = System::Drawing::Point(1197, 6);
			this->rows_num_tb->Name = L"rows_num_tb";
			this->rows_num_tb->ReadOnly = true;
			this->rows_num_tb->Size = System::Drawing::Size(64, 20);
			this->rows_num_tb->TabIndex = 2;
			this->rows_num_tb->TextChanged += gcnew System::EventHandler(this, &EI::rows_num_tb_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->������ToolStripMenuItem,
					this->��������ToolStripMenuItem, this->�������ToolStripMenuItem, this->��������ToolStripMenuItem, this->�����������ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1273, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &EI::menuStrip1_ItemClicked);
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->��������ToolStripMenuItem,
					this->����������ToolStripMenuItem, this->��������ToolStripMenuItem, this->�����ToolStripMenuItem, this->��������ToolStripMenuItem,
					this->�������ToolStripMenuItem
			});
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->������ToolStripMenuItem->Text = L"������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->RightToLeftAutoMirrorImage = true;
			this->��������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Shift | System::Windows::Forms::Keys::Delete));
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->��������ToolStripMenuItem->Tag = L"";
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// ����������ToolStripMenuItem
			// 
			this->����������ToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->����������ToolStripMenuItem->Name = L"����������ToolStripMenuItem";
			this->����������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->����������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->����������ToolStripMenuItem->Text = L"����������";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->��������ToolStripMenuItem->Text = L"��������";
			// 
			// �����ToolStripMenuItem
			// 
			this->�����ToolStripMenuItem->Name = L"�����ToolStripMenuItem";
			this->�����ToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->�����ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->�����ToolStripMenuItem->Text = L"�����";
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->��������ToolStripMenuItem->Text = L"��������...";
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->�������ToolStripMenuItem->Text = L"�������";
			this->�������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::�������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::��������ToolStripMenuItem_Click);
			// 
			// �������ToolStripMenuItem
			// 
			this->�������ToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->������ToolStripMenuItem,
					this->������������ToolStripMenuItem
			});
			this->�������ToolStripMenuItem->Name = L"�������ToolStripMenuItem";
			this->�������ToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->�������ToolStripMenuItem->Text = L"�������";
			// 
			// ������ToolStripMenuItem
			// 
			this->������ToolStripMenuItem->Name = L"������ToolStripMenuItem";
			this->������ToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->������ToolStripMenuItem->Text = L"������";
			this->������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::������ToolStripMenuItem_Click);
			// 
			// ������������ToolStripMenuItem
			// 
			this->������������ToolStripMenuItem->Name = L"������������ToolStripMenuItem";
			this->������������ToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->������������ToolStripMenuItem->Text = L"������� � .bmp";
			this->������������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::������������ToolStripMenuItem_Click);
			// 
			// ��������ToolStripMenuItem
			// 
			this->��������ToolStripMenuItem->Name = L"��������ToolStripMenuItem";
			this->��������ToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->��������ToolStripMenuItem->Text = L"��������";
			this->��������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::��������ToolStripMenuItem_Click);
			// 
			// �����������ToolStripMenuItem
			// 
			this->�����������ToolStripMenuItem->Name = L"�����������ToolStripMenuItem";
			this->�����������ToolStripMenuItem->Size = System::Drawing::Size(92, 20);
			this->�����������ToolStripMenuItem->Text = L"�������� ���";
			this->�����������ToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::�����������ToolStripMenuItem_Click);
			// 
			// EI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1273, 637);
			this->Controls->Add(this->rows_num_tb);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->main_dg);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"EI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"���������� �����������";
			this->Load += gcnew System::EventHandler(this, &EI::EI_Load);
			this->Resize += gcnew System::EventHandler(this, &EI::EI_Resize);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_dg))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void EI_Load(System::Object^ sender, System::EventArgs^ e) {
		main_dg->Rows->Clear();

		sqlite3* db;
		string path = paths::get_path() + string("\\datab.zb");
		int res = sqlite3_open(path.c_str(), &db);
		if (res != SQLITE_OK)
		{
			Event event__(CRIT_T, "Error while opening SQLite DB. ");
		}
		
		char* msg_error;
		string query = "SELECT name, subordination, management, form, supervisor, mail, site, PAN, contacts, address FROM Schools; ";
		transf::data_callback.clear();
		res = sqlite3_exec(db, query.c_str(), callback, NULL, &msg_error);

		vector<vector<string>> _ndata = transf::data_callback;

		for (int i = 0; i < _ndata.size(); i++)
		{
			main_dg->Rows->Add(
				i+1,
				convert(_ndata[i][1]),
				convert(_ndata[i][3]),
				convert(_ndata[i][5]),
				convert(_ndata[i][7]),
				convert(_ndata[i][9]),
				convert(_ndata[i][11]),
				convert(_ndata[i][13]),
				convert(_ndata[i][19]),
				convert(_ndata[i][17]),
				convert(_ndata[i][15])
			);
		}
		if (_ndata.size() >= 1) rows_num_tb->Text = convert(std::to_string(_ndata.size()));
		else rows_num_tb->Text = "0";
		
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void rows_num_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AddEI^ form = gcnew AddEI;
		form->ShowDialog();
		EI_Load(sender, e);
	}
	private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	}
	private: System::Void ������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ bmp = gcnew Bitmap(main_dg->Size.Width + 10, main_dg->Size.Height + 10);
		main_dg->DrawToBitmap(bmp, main_dg->Bounds);
		bmp->Save(msclr::interop::marshal_as<System::String^>(paths::get_path()) + "\\export\\temp.bmp");

	}

	private: System::Void ������������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		try {
			saveFileDialog1->Filter = "����������� ������� (*.bmp)|*.bmp|��� ����� (*.*)|*.*";
			saveFileDialog1->InitialDirectory = msclr::interop::marshal_as<System::String^>(paths::get_path() + "\\export");
			saveFileDialog1->RestoreDirectory = true;
			saveFileDialog1->ShowDialog();
			saveFileDialog1->AddExtension = ".bmp";
			System::String^ path = saveFileDialog1->FileName;
			Bitmap^ bmp = gcnew Bitmap(main_dg->Size.Width + 10, main_dg->Size.Height + 10);
			main_dg->DrawToBitmap(bmp, main_dg->Bounds);
			bmp->Save(path);
		}
		catch (...)
		{
			MessageBox::Show("���� �� ��� ��������. ");
		}
	}
	private: System::Void ��������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		EI_Load(sender, e);
	}
	private: System::Void �����������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Confirm^ form = gcnew Confirm;
		form->ShowDialog();
		EI_Load(sender, e);
	}
	private: System::Void EI_Resize(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void �������ToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (main_dg->Rows->Count == 0)
		{
			MessageBox::Show("������ ��� �������� �� �������");
			return;
		}

		System::String^ name_to_del = main_dg->CurrentRow->Cells[1]->Value->ToString();
		main_dg->Rows->RemoveAt(main_dg->CurrentRow->Index);

		sqlite3* db;
		string path = paths::get_path() + string("\\datab.zb");
		sqlite3_open(path.c_str(), &db);
		string sql_r = "DELETE FROM Schools WHERE name='" + convert(name_to_del) + "'";

		char* msg_error;

		if (sqlite3_exec(db, sql_r.c_str(), NULL, 0, &msg_error) == SQLITE_OK)
		MessageBox::Show("������ �������. ");
		else MessageBox::Show("Error while deleting row. ");

		sqlite3_exec(db, sql_r.c_str(), NULL, 0, &msg_error);

		EI_Load(sender, e);
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
};
}