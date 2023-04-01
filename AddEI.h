#pragma once
#include <vector>
#include <msclr\marshal_cppstd.h>

#include "mcsv.h"
#include "Paths.h"
#include "trans.h"
#include "EIClass.h"
#include "LoginError.h"

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для AddEI
	/// </summary>
	public ref class AddEI : public System::Windows::Forms::Form
	{
	public:
		AddEI(void)
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
		~AddEI()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ shortname_tb;
	private: System::Windows::Forms::TextBox^ x_tb;


	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::ComboBox^ form_selector;

	private: System::Windows::Forms::TextBox^ org_tb;


	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::TextBox^ leader_tb;

	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::TextBox^ email_tb;

	private: System::Windows::Forms::Label^ label9;
	private: System::Windows::Forms::TextBox^ site_tb;

	private: System::Windows::Forms::Label^ label10;
	private: System::Windows::Forms::TextBox^ adress_tb;

	private: System::Windows::Forms::Label^ label11;
	private: System::Windows::Forms::TextBox^ phone_tb;


	private: System::Windows::Forms::Label^ label12;
	private: System::Windows::Forms::Button^ save_button;
	private: System::Windows::Forms::TextBox^ unp_tb;

	private: System::Windows::Forms::Label^ label13;

	protected:

	private: System::ComponentModel::IContainer^ components;

	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddEI::typeid));
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->shortname_tb = (gcnew System::Windows::Forms::TextBox());
			this->x_tb = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->form_selector = (gcnew System::Windows::Forms::ComboBox());
			this->org_tb = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->leader_tb = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->email_tb = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->site_tb = (gcnew System::Windows::Forms::TextBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->adress_tb = (gcnew System::Windows::Forms::TextBox());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->phone_tb = (gcnew System::Windows::Forms::TextBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->save_button = (gcnew System::Windows::Forms::Button());
			this->unp_tb = (gcnew System::Windows::Forms::TextBox());
			this->label13 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(11, 31);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 13);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Наименование УО: ";
			// 
			// shortname_tb
			// 
			this->shortname_tb->Location = System::Drawing::Point(123, 28);
			this->shortname_tb->Name = L"shortname_tb";
			this->shortname_tb->Size = System::Drawing::Size(509, 20);
			this->shortname_tb->TabIndex = 3;
			// 
			// x_tb
			// 
			this->x_tb->Location = System::Drawing::Point(91, 54);
			this->x_tb->Name = L"x_tb";
			this->x_tb->Size = System::Drawing::Size(541, 20);
			this->x_tb->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(11, 57);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(74, 13);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Подчинение: ";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(11, 83);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(186, 13);
			this->label4->TabIndex = 6;
			this->label4->Text = L"Организационно-правовая форма: ";
			// 
			// form_selector
			// 
			this->form_selector->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->form_selector->FormattingEnabled = true;
			this->form_selector->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->form_selector->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Государственная", L"Частная" });
			this->form_selector->Location = System::Drawing::Point(197, 80);
			this->form_selector->Name = L"form_selector";
			this->form_selector->Size = System::Drawing::Size(435, 21);
			this->form_selector->TabIndex = 7;
			// 
			// org_tb
			// 
			this->org_tb->Location = System::Drawing::Point(135, 107);
			this->org_tb->Name = L"org_tb";
			this->org_tb->Size = System::Drawing::Size(497, 20);
			this->org_tb->TabIndex = 9;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(11, 110);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(118, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Вышестоящий орган: ";
			// 
			// leader_tb
			// 
			this->leader_tb->Location = System::Drawing::Point(98, 133);
			this->leader_tb->Name = L"leader_tb";
			this->leader_tb->Size = System::Drawing::Size(534, 20);
			this->leader_tb->TabIndex = 11;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(11, 136);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(81, 13);
			this->label6->TabIndex = 10;
			this->label6->Text = L"Руководитель:";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(12, 9);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(83, 13);
			this->label7->TabIndex = 12;
			this->label7->Text = L"Информация";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(12, 161);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 13);
			this->label8->TabIndex = 13;
			this->label8->Text = L"Контакты";
			// 
			// email_tb
			// 
			this->email_tb->Location = System::Drawing::Point(123, 176);
			this->email_tb->Name = L"email_tb";
			this->email_tb->Size = System::Drawing::Size(509, 20);
			this->email_tb->TabIndex = 15;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 179);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(107, 13);
			this->label9->TabIndex = 14;
			this->label9->Text = L"Электронная почта:";
			// 
			// site_tb
			// 
			this->site_tb->Location = System::Drawing::Point(52, 202);
			this->site_tb->Name = L"site_tb";
			this->site_tb->Size = System::Drawing::Size(580, 20);
			this->site_tb->TabIndex = 17;
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(12, 205);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 16;
			this->label10->Text = L"Сайт:";
			// 
			// adress_tb
			// 
			this->adress_tb->Location = System::Drawing::Point(60, 280);
			this->adress_tb->Name = L"adress_tb";
			this->adress_tb->Size = System::Drawing::Size(573, 20);
			this->adress_tb->TabIndex = 19;
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(13, 283);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(41, 13);
			this->label11->TabIndex = 18;
			this->label11->Text = L"Адрес:";
			// 
			// phone_tb
			// 
			this->phone_tb->Location = System::Drawing::Point(74, 254);
			this->phone_tb->Name = L"phone_tb";
			this->phone_tb->Size = System::Drawing::Size(559, 20);
			this->phone_tb->TabIndex = 21;
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(13, 257);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(55, 13);
			this->label12->TabIndex = 20;
			this->label12->Text = L"Телефон:";
			this->label12->Click += gcnew System::EventHandler(this, &AddEI::label12_Click);
			// 
			// save_button
			// 
			this->save_button->AutoSize = true;
			this->save_button->Location = System::Drawing::Point(11, 306);
			this->save_button->Name = L"save_button";
			this->save_button->Size = System::Drawing::Size(621, 23);
			this->save_button->TabIndex = 22;
			this->save_button->Text = L"Сохранить";
			this->save_button->UseVisualStyleBackColor = true;
			this->save_button->Click += gcnew System::EventHandler(this, &AddEI::save_button_Click);
			// 
			// unp_tb
			// 
			this->unp_tb->Location = System::Drawing::Point(52, 228);
			this->unp_tb->Name = L"unp_tb";
			this->unp_tb->Size = System::Drawing::Size(580, 20);
			this->unp_tb->TabIndex = 24;
			this->unp_tb->TextChanged += gcnew System::EventHandler(this, &AddEI::unp_tb_TextChanged);
			// 
			// label13
			// 
			this->label13->AutoSize = true;
			this->label13->Location = System::Drawing::Point(12, 231);
			this->label13->Name = L"label13";
			this->label13->Size = System::Drawing::Size(34, 13);
			this->label13->TabIndex = 23;
			this->label13->Text = L"УНП:";
			// 
			// AddEI
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(645, 342);
			this->Controls->Add(this->unp_tb);
			this->Controls->Add(this->label13);
			this->Controls->Add(this->save_button);
			this->Controls->Add(this->phone_tb);
			this->Controls->Add(this->label12);
			this->Controls->Add(this->adress_tb);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->site_tb);
			this->Controls->Add(this->label10);
			this->Controls->Add(this->email_tb);
			this->Controls->Add(this->label9);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->leader_tb);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->org_tb);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->form_selector);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->x_tb);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->shortname_tb);
			this->Controls->Add(this->label2);
			this->Cursor = System::Windows::Forms::Cursors::SizeAll;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"AddEI";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Добавление информации об УО";
			this->Load += gcnew System::EventHandler(this, &AddEI::AddEI_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private: System::Void save_button_Click(System::Object^ sender, System::EventArgs^ e) {

		if (shortname_tb->Text != ""
			&& x_tb->Text != ""
			&& form_selector->Text != ""
			&& org_tb->Text != ""
			&& leader_tb->Text != ""
			&& email_tb->Text != ""
			&& site_tb->Text != ""
			&& adress_tb->Text != ""
			&& unp_tb->Text != ""
			&& phone_tb->Text != "")
		{

			std::string name, x, form, org, leader, email, site, adress, unp, phone;

			name = msclr::interop::marshal_as<std::string>(shortname_tb->Text);
			x = msclr::interop::marshal_as<std::string>(x_tb->Text);
			form = msclr::interop::marshal_as<std::string>(form_selector->Text);
			org = msclr::interop::marshal_as<std::string>(org_tb->Text);
			leader = msclr::interop::marshal_as<std::string>(leader_tb->Text);
			email = msclr::interop::marshal_as<std::string>(email_tb->Text);
			site = msclr::interop::marshal_as<std::string>(site_tb->Text);
			adress = msclr::interop::marshal_as<std::string>(adress_tb->Text);
			phone = msclr::interop::marshal_as<std::string>(phone_tb->Text);
			unp = msclr::interop::marshal_as<std::string>(unp_tb->Text);

			std::vector<std::string> data;
			data.push_back(name);
			data.push_back(x);
			data.push_back(org);
			data.push_back(form);
			data.push_back(leader);
			data.push_back(email);
			data.push_back(site);
			data.push_back(unp);
			data.push_back(phone);
			data.push_back(adress);

			mcsv::append_csv(paths::get_path() + "\\schools.zb", data);
			transf::setAddedSchool(true);

			push_event(INFO_T, "New EI added! ");

			this->Close();
		}
		else
		{
			LoginError^ form = gcnew LoginError;
			form->ShowDialog();
		}


	}
	private: System::Void label12_Click(System::Object^ sender, System::EventArgs^ e) {
	}

	private: System::Void unp_tb_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void AddEI_Load(System::Object^ sender, System::EventArgs^ e) {
		push_event(INFO_T, "AddEI load");
	}
	};
}
