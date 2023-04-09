#pragma once
#include <windows.h>
#include <sqlite3.h>

#include "mcsv.h"
#include "AddEI.h"
#include "trans.h"
#include "paths.h"

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ EI
	/// </summary>
	public ref class EI : public System::Windows::Forms::Form
	{
	public:
		EI(void)
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
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûğåçàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîïèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàìåíèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïå÷àòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòÂÔàéëToolStripMenuItem;



	private: System::Windows::Forms::SaveFileDialog^ saveFileDialog1;
	private: System::Windows::Forms::ToolStripMenuItem^ îáíîâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ î÷èñòèòüÂñåToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ óäàëèòüToolStripMenuItem;

	private: System::ComponentModel::IContainer^ components;

	protected:

	protected:

	private:
		/// <summary>
		/// Îáÿçàòåëüíàÿ ïåğåìåííàÿ êîíñòğóêòîğà.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Òğåáóåìûé ìåòîä äëÿ ïîääåğæêè êîíñòğóêòîğà — íå èçìåíÿéòå 
		/// ñîäåğæèìîå ıòîãî ìåòîäà ñ ïîìîùüş ğåäàêòîğà êîäà.
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
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûğåçàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîïèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàìåíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->óäàëèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->äîáàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïå÷àòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->îáíîâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->î÷èñòèòüÂñåToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
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
			this->main_dg->Location = System::Drawing::Point(8, 25);
			this->main_dg->Name = L"main_dg";
			this->main_dg->Size = System::Drawing::Size(1293, 595);
			this->main_dg->StandardTab = true;
			this->main_dg->TabIndex = 0;
			this->main_dg->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &EI::dataGridView1_CellContentClick);
			// 
			// num
			// 
			this->num->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->num->HeaderText = L"¹ï/ï";
			this->num->Name = L"num";
			this->num->Width = 60;
			// 
			// name
			// 
			this->name->HeaderText = L"Íàèìåíîâàíèå";
			this->name->Name = L"name";
			this->name->Width = 110;
			// 
			// pod
			// 
			this->pod->HeaderText = L"Ïîä÷èíåíèå";
			this->pod->Name = L"pod";
			this->pod->Width = 130;
			// 
			// org
			// 
			this->org->HeaderText = L"Âûøåñòîÿùèé îğãàí";
			this->org->Name = L"org";
			this->org->Width = 140;
			// 
			// org_form
			// 
			this->org_form->HeaderText = L"Îğãàíèçàöèîííî-ïğàâîâàÿ ôîğìà";
			this->org_form->Name = L"org_form";
			this->org_form->Width = 150;
			// 
			// leader
			// 
			this->leader->HeaderText = L"Ğóêîâîäèòåëü";
			this->leader->Name = L"leader";
			this->leader->Width = 150;
			// 
			// email
			// 
			this->email->HeaderText = L"İëåêòğîííàÿ ïî÷òà";
			this->email->Name = L"email";
			this->email->Width = 110;
			// 
			// site
			// 
			this->site->HeaderText = L"Ñàéò";
			this->site->Name = L"site";
			// 
			// unp
			// 
			this->unp->HeaderText = L"ÓÍÏ";
			this->unp->Name = L"unp";
			this->unp->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::NotSortable;
			// 
			// contact
			// 
			this->contact->HeaderText = L"Êîíòàêòû";
			this->contact->Name = L"contact";
			// 
			// adress
			// 
			this->adress->HeaderText = L"Àäğåñ";
			this->adress->Name = L"adress";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(1142, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Êîë-âî çàïèñåé:";
			this->label1->Click += gcnew System::EventHandler(this, &EI::label1_Click);
			// 
			// rows_num_tb
			// 
			this->rows_num_tb->Location = System::Drawing::Point(1237, 4);
			this->rows_num_tb->Name = L"rows_num_tb";
			this->rows_num_tb->ReadOnly = true;
			this->rows_num_tb->Size = System::Drawing::Size(64, 20);
			this->rows_num_tb->TabIndex = 2;
			this->rows_num_tb->TextChanged += gcnew System::EventHandler(this, &EI::rows_num_tb_TextChanged);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->ïğàâêàToolStripMenuItem,
					this->äîáàâèòüToolStripMenuItem, this->ıêñïîğòToolStripMenuItem, this->îáíîâèòüToolStripMenuItem, this->î÷èñòèòüÂñåToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(1313, 24);
			this->menuStrip1->TabIndex = 4;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &EI::menuStrip1_ItemClicked);
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(6) {
				this->âûğåçàòüToolStripMenuItem,
					this->êîïèğîâàòüToolStripMenuItem, this->âñòàâèòüToolStripMenuItem, this->íàéòèToolStripMenuItem, this->çàìåíèòüToolStripMenuItem,
					this->óäàëèòüToolStripMenuItem
			});
			this->ïğàâêàToolStripMenuItem->Name = L"ïğàâêàToolStripMenuItem";
			this->ïğàâêàToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->ïğàâêàToolStripMenuItem->Text = L"Ïğàâêà";
			// 
			// âûğåçàòüToolStripMenuItem
			// 
			this->âûğåçàòüToolStripMenuItem->Name = L"âûğåçàòüToolStripMenuItem";
			this->âûğåçàòüToolStripMenuItem->RightToLeftAutoMirrorImage = true;
			this->âûğåçàòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Shift | System::Windows::Forms::Keys::Delete));
			this->âûğåçàòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->âûğåçàòüToolStripMenuItem->Tag = L"";
			this->âûğåçàòüToolStripMenuItem->Text = L"Âûğåçàòü";
			// 
			// êîïèğîâàòüToolStripMenuItem
			// 
			this->êîïèğîâàòüToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->êîïèğîâàòüToolStripMenuItem->Name = L"êîïèğîâàòüToolStripMenuItem";
			this->êîïèğîâàòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->êîïèğîâàòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->êîïèğîâàòüToolStripMenuItem->Text = L"Êîïèğîâàòü";
			// 
			// âñòàâèòüToolStripMenuItem
			// 
			this->âñòàâèòüToolStripMenuItem->Name = L"âñòàâèòüToolStripMenuItem";
			this->âñòàâèòüToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->âñòàâèòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->âñòàâèòüToolStripMenuItem->Text = L"Âñòàâèòü";
			// 
			// íàéòèToolStripMenuItem
			// 
			this->íàéòèToolStripMenuItem->Name = L"íàéòèToolStripMenuItem";
			this->íàéòèToolStripMenuItem->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::F));
			this->íàéòèToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->íàéòèToolStripMenuItem->Text = L"Íàéòè";
			// 
			// çàìåíèòüToolStripMenuItem
			// 
			this->çàìåíèòüToolStripMenuItem->Name = L"çàìåíèòüToolStripMenuItem";
			this->çàìåíèòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->çàìåíèòüToolStripMenuItem->Text = L"Çàìåíèòü...";
			// 
			// óäàëèòüToolStripMenuItem
			// 
			this->óäàëèòüToolStripMenuItem->Name = L"óäàëèòüToolStripMenuItem";
			this->óäàëèòüToolStripMenuItem->Size = System::Drawing::Size(181, 22);
			this->óäàëèòüToolStripMenuItem->Text = L"Óäàëèòü";
			this->óäàëèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::óäàëèòüToolStripMenuItem_Click);
			// 
			// äîáàâèòüToolStripMenuItem
			// 
			this->äîáàâèòüToolStripMenuItem->Name = L"äîáàâèòüToolStripMenuItem";
			this->äîáàâèòüToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->äîáàâèòüToolStripMenuItem->Text = L"Äîáàâèòü";
			this->äîáàâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::äîáàâèòüToolStripMenuItem_Click);
			// 
			// ıêñïîğòToolStripMenuItem
			// 
			this->ıêñïîğòToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->ïå÷àòüToolStripMenuItem,
					this->ıêñïîğòÂÔàéëToolStripMenuItem
			});
			this->ıêñïîğòToolStripMenuItem->Name = L"ıêñïîğòToolStripMenuItem";
			this->ıêñïîğòToolStripMenuItem->Size = System::Drawing::Size(64, 20);
			this->ıêñïîğòToolStripMenuItem->Text = L"İêñïîğò";
			// 
			// ïå÷àòüToolStripMenuItem
			// 
			this->ïå÷àòüToolStripMenuItem->Name = L"ïå÷àòüToolStripMenuItem";
			this->ïå÷àòüToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->ïå÷àòüToolStripMenuItem->Text = L"Ïå÷àòü";
			this->ïå÷àòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::ïå÷àòüToolStripMenuItem_Click);
			// 
			// ıêñïîğòÂÔàéëToolStripMenuItem
			// 
			this->ıêñïîğòÂÔàéëToolStripMenuItem->Name = L"ıêñïîğòÂÔàéëToolStripMenuItem";
			this->ıêñïîğòÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(159, 22);
			this->ıêñïîğòÂÔàéëToolStripMenuItem->Text = L"İêñïîğò â .bmp";
			this->ıêñïîğòÂÔàéëToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::ıêñïîğòÂÔàéëToolStripMenuItem_Click);
			// 
			// îáíîâèòüToolStripMenuItem
			// 
			this->îáíîâèòüToolStripMenuItem->Name = L"îáíîâèòüToolStripMenuItem";
			this->îáíîâèòüToolStripMenuItem->Size = System::Drawing::Size(73, 20);
			this->îáíîâèòüToolStripMenuItem->Text = L"Îáíîâèòü";
			this->îáíîâèòüToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::îáíîâèòüToolStripMenuItem_Click);
			// 
			// î÷èñòèòüÂñåToolStripMenuItem
			// 
			this->î÷èñòèòüÂñåToolStripMenuItem->Name = L"î÷èñòèòüÂñåToolStripMenuItem";
			this->î÷èñòèòüÂñåToolStripMenuItem->Size = System::Drawing::Size(92, 20);
			this->î÷èñòèòüÂñåToolStripMenuItem->Text = L"Î÷èñòèòü âñå";
			this->î÷èñòèòüÂñåToolStripMenuItem->Click += gcnew System::EventHandler(this, &EI::î÷èñòèòüÂñåToolStripMenuItem_Click);
			// 
			// EI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1313, 637);
			this->Controls->Add(this->rows_num_tb);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->main_dg);
			this->Controls->Add(this->menuStrip1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"EI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Ó÷ğåæäåíèå îáğàçîâàíèÿ";
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
		/*
		transf::setLastAddedSchoolNumber(0);
		vector<vector<string>> data = mcsv::read_csv(paths::get_path() + "\\schools.zb");
		for (int i = 0; i < data.size(); i++)
		{
			main_dg->Rows->Add(transf::getLastAddedSchoolNumber() + 1,
				msclr::interop::marshal_as<System::String^>(data[i][0]),
				msclr::interop::marshal_as<System::String^>(data[i][1]),
				msclr::interop::marshal_as<System::String^>(data[i][2]),
				msclr::interop::marshal_as<System::String^>(data[i][3]),
				msclr::interop::marshal_as<System::String^>(data[i][4]),
				msclr::interop::marshal_as<System::String^>(data[i][5]),
				msclr::interop::marshal_as<System::String^>(data[i][6]),
				msclr::interop::marshal_as<System::String^>(data[i][7]),
				msclr::interop::marshal_as<System::String^>(data[i][8]),
				msclr::interop::marshal_as<System::String^>(data[i][9])
			);
			transf::setLastAddedSchoolNumber(transf::getLastAddedSchoolNumber() + 1);
			

		}
		int rows_num = this->main_dg->Rows->Count;
		this->rows_num_tb->Text = rows_num.ToString();*/
		sqlite3* db;
		sqlite3_open("schools.db", &db);
		
	}
	private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {

	}
	private: System::Void add_button_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void rows_num_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void äîáàâèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AddEI^ form = gcnew AddEI;
		form->ShowDialog();
		if (transf::isAddedSchool()) {
			vector<vector<string>> data = mcsv::read_csv(paths::get_path() + "\\schools.zb");
			main_dg->Rows->Add(transf::getLastAddedSchoolNumber() + 1,
				msclr::interop::marshal_as<System::String^>(data[data.size() - 1][0]),
				msclr::interop::marshal_as<System::String^>(data[data.size() - 1][1]),
				msclr::interop::marshal_as<System::String^>(data[data.size() - 1][2]),
				msclr::interop::marshal_as<System::String^>(data[data.size() - 1][3]),
				msclr::interop::marshal_as<System::String^>(data[data.size() - 1][4]),
				msclr::interop::marshal_as<System::String^>(data[data.size() - 1][5]),
				msclr::interop::marshal_as<System::String^>(data[data.size() - 1][6]),
				msclr::interop::marshal_as<System::String^>(data[data.size() - 1][7]),
				msclr::interop::marshal_as<System::String^>(data[data.size() - 1][8]),
				msclr::interop::marshal_as<System::String^>(data[data.size() - 1][9])
			);
			transf::setLastAddedSchoolNumber(transf::getLastAddedSchoolNumber() + 1);
			rows_num_tb->Text = (Int32::Parse(rows_num_tb->Text) + 1).ToString();
			transf::setAddedSchool(false);
		}

	}
	private: System::Void printDocument1_PrintPage(System::Object^ sender, System::Drawing::Printing::PrintPageEventArgs^ e) {
	}
	private: System::Void ïå÷àòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Bitmap^ bmp = gcnew Bitmap(main_dg->Size.Width + 10, main_dg->Size.Height + 10);
		main_dg->DrawToBitmap(bmp, main_dg->Bounds);
		bmp->Save(msclr::interop::marshal_as<System::String^>(paths::get_path()) + "\\export\\temp.bmp");

	}

	private: System::Void ıêñïîğòÂÔàéëToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		saveFileDialog1->Filter = "Ìîíîõğîìíûé ğèñóíîê (*.bmp)|*.bmp|Âñå ôàéëû (*.*)|*.*";
		saveFileDialog1->InitialDirectory = msclr::interop::marshal_as<System::String^>(paths::get_path() + "\\export");
		saveFileDialog1->RestoreDirectory = true;
		saveFileDialog1->ShowDialog();
		saveFileDialog1->AddExtension = ".bmp";
		System::String^ path = saveFileDialog1->FileName;
		Bitmap^ bmp = gcnew Bitmap(main_dg->Size.Width + 10, main_dg->Size.Height + 10);
		main_dg->DrawToBitmap(bmp, main_dg->Bounds);
		bmp->Save(path);
	}
	private: System::Void îáíîâèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		main_dg->Rows->Clear();
		transf::setLastAddedSchoolNumber(0);
		vector<vector<string>> data = mcsv::read_csv(paths::get_path() + "\\schools.zb");
		for (int i = 0; i < data.size(); i++)
		{
			main_dg->Rows->Add(transf::getLastAddedSchoolNumber() + 1,
				msclr::interop::marshal_as<System::String^>(data[i][0]),
				msclr::interop::marshal_as<System::String^>(data[i][1]),
				msclr::interop::marshal_as<System::String^>(data[i][2]),
				msclr::interop::marshal_as<System::String^>(data[i][3]),
				msclr::interop::marshal_as<System::String^>(data[i][4]),
				msclr::interop::marshal_as<System::String^>(data[i][5]),
				msclr::interop::marshal_as<System::String^>(data[i][6]),
				msclr::interop::marshal_as<System::String^>(data[i][7]),
				msclr::interop::marshal_as<System::String^>(data[i][8]),
				msclr::interop::marshal_as<System::String^>(data[i][9])
			);
			transf::setLastAddedSchoolNumber(transf::getLastAddedSchoolNumber() + 1);
		}
		int rows_num = this->main_dg->Rows->Count;
		this->rows_num_tb->Text = rows_num.ToString();
	}
	private: System::Void î÷èñòèòüÂñåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		std::ofstream ofs;
		ofs.open(paths::get_path() + "\\schools.zb", std::ofstream::out | std::ofstream::trunc);
		ofs.close();

		main_dg->Rows->Clear();
		transf::setLastAddedSchoolNumber(0);
		vector<vector<string>> data = mcsv::read_csv(paths::get_path() + "\\schools.zb");
		for (int i = 0; i < data.size(); i++)
		{
			main_dg->Rows->Add(transf::getLastAddedSchoolNumber() + 1,
				msclr::interop::marshal_as<System::String^>(data[i][0]),
				msclr::interop::marshal_as<System::String^>(data[i][1]),
				msclr::interop::marshal_as<System::String^>(data[i][2]),
				msclr::interop::marshal_as<System::String^>(data[i][3]),
				msclr::interop::marshal_as<System::String^>(data[i][4]),
				msclr::interop::marshal_as<System::String^>(data[i][5]),
				msclr::interop::marshal_as<System::String^>(data[i][6]),
				msclr::interop::marshal_as<System::String^>(data[i][7]),
				msclr::interop::marshal_as<System::String^>(data[i][8]),
				msclr::interop::marshal_as<System::String^>(data[i][9])
			);
			transf::setLastAddedSchoolNumber(transf::getLastAddedSchoolNumber() + 1);
		}
		int rows_num = this->main_dg->Rows->Count;
		this->rows_num_tb->Text = rows_num.ToString();
	}
	private: System::Void EI_Resize(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void óäàëèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		if (main_dg->Rows->Count == 0)
		{
			MessageBox::Show("Ñòğîêà äëÿ óäàëåíèÿ íå íàéäåíà");
			return;
		}

		System::String^ name_to_del = main_dg->CurrentRow->Cells[1]->Value->ToString();
		main_dg->Rows->RemoveAt(main_dg->CurrentRow->Index);
		main_dg->Refresh();
		main_dg->Rows->Clear();

		transf::setLastAddedSchoolNumber(0);
		std::string stdname = msclr::interop::marshal_as<std::string>(name_to_del);

		vector<vector<string>> data = mcsv::read_csv(paths::get_path() + "\\schools.zb");

		for (int i = 0; i < data.size(); i++) {
			if (stdname == data[i][0]) {
				data.erase(data.begin() + i);
				break;
			}
		}
		rows_num_tb->Text = (Int32::Parse(rows_num_tb->Text) - 1).ToString();
		mcsv::write_csv(paths::get_path() + "\\schools.zb", data);
	}
	private: System::Void menuStrip1_ItemClicked(System::Object^ sender, System::Windows::Forms::ToolStripItemClickedEventArgs^ e) {
	}
};
}

ref class EI
{
};

