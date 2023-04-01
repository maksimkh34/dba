#pragma once

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Ñâîäêà äëÿ groups
	/// </summary>
	public ref class groups : public System::Windows::Forms::Form
	{
	public:
		groups(void)
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
		~groups()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::DataGridView^ main_dg;


	private: System::Windows::Forms::TextBox^ rows_num_tb;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïå÷àòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ıêñïîğòÂÔàéëToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ excelToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ wordToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ äîáàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ ïğàâêàToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âûğåçàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ êîïèğîâàòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ âñòàâèòüToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ íàéòèToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ çàìåíèòüToolStripMenuItem;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ num;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ group;
	protected:












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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(groups::typeid));
			this->main_dg = (gcnew System::Windows::Forms::DataGridView());
			this->rows_num_tb = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->äîáàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïğàâêàToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âûğåçàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->êîïèğîâàòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->âñòàâèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->íàéòèToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->çàìåíèòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ïå÷àòüToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->ıêñïîğòÂÔàéëToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->excelToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->wordToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->num = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->group = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_dg))->BeginInit();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_dg
			// 
			this->main_dg->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->main_dg->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(2) { this->num, this->group });
			this->main_dg->Location = System::Drawing::Point(12, 51);
			this->main_dg->Name = L"main_dg";
			this->main_dg->Size = System::Drawing::Size(339, 515);
			this->main_dg->TabIndex = 4;
			this->main_dg->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &groups::main_dg_CellContentClick);
			// 
			// rows_num_tb
			// 
			this->rows_num_tb->Location = System::Drawing::Point(107, 24);
			this->rows_num_tb->Name = L"rows_num_tb";
			this->rows_num_tb->ReadOnly = true;
			this->rows_num_tb->Size = System::Drawing::Size(64, 20);
			this->rows_num_tb->TabIndex = 6;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 27);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(89, 13);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Êîë-âî çàïèñåé:";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->äîáàâèòüToolStripMenuItem,
					this->ïğàâêàToolStripMenuItem, this->ıêñïîğòToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(357, 24);
			this->menuStrip1->TabIndex = 7;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// äîáàâèòüToolStripMenuItem
			// 
			this->äîáàâèòüToolStripMenuItem->Name = L"äîáàâèòüToolStripMenuItem";
			this->äîáàâèòüToolStripMenuItem->Size = System::Drawing::Size(71, 20);
			this->äîáàâèòüToolStripMenuItem->Text = L"Äîáàâèòü";
			// 
			// ïğàâêàToolStripMenuItem
			// 
			this->ïğàâêàToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->âûğåçàòüToolStripMenuItem,
					this->êîïèğîâàòüToolStripMenuItem, this->âñòàâèòüToolStripMenuItem, this->íàéòèToolStripMenuItem, this->çàìåíèòüToolStripMenuItem
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
			this->ïå÷àòüToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->ïå÷àòüToolStripMenuItem->Text = L"Ïå÷àòü";
			// 
			// ıêñïîğòÂÔàéëToolStripMenuItem
			// 
			this->ıêñïîğòÂÔàéëToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->excelToolStripMenuItem,
					this->wordToolStripMenuItem
			});
			this->ıêñïîğòÂÔàéëToolStripMenuItem->Name = L"ıêñïîğòÂÔàéëToolStripMenuItem";
			this->ıêñïîğòÂÔàéëToolStripMenuItem->Size = System::Drawing::Size(160, 22);
			this->ıêñïîğòÂÔàéëToolStripMenuItem->Text = L"İêñïîğò â ôàéë";
			// 
			// excelToolStripMenuItem
			// 
			this->excelToolStripMenuItem->Name = L"excelToolStripMenuItem";
			this->excelToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->excelToolStripMenuItem->Text = L"MS Excel";
			// 
			// wordToolStripMenuItem
			// 
			this->wordToolStripMenuItem->Name = L"wordToolStripMenuItem";
			this->wordToolStripMenuItem->Size = System::Drawing::Size(123, 22);
			this->wordToolStripMenuItem->Text = L"MS Word";
			// 
			// num
			// 
			this->num->AutoSizeMode = System::Windows::Forms::DataGridViewAutoSizeColumnMode::ColumnHeader;
			this->num->HeaderText = L"¹ï/ï";
			this->num->Name = L"num";
			this->num->Width = 60;
			// 
			// group
			// 
			this->group->HeaderText = L"Îòğÿä";
			this->group->Name = L"group";
			this->group->Width = 235;
			// 
			// groups
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(357, 578);
			this->Controls->Add(this->rows_num_tb);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->main_dg);
			this->Controls->Add(this->menuStrip1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"groups";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Îòğÿäû";
			this->Load += gcnew System::EventHandler(this, &groups::groups_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->main_dg))->EndInit();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void groups_Load(System::Object^ sender, System::EventArgs^ e) {
		int rows_num = this->main_dg->Rows->Count;
		this->rows_num_tb->Text = rows_num.ToString();
	}
	private: System::Void main_dg_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
	}
	};
}
