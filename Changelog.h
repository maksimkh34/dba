#pragma once
#include <string>
#include <stdio.h>
#include "trans.h"
#include <filesystem>
#include "convert.h"
#include "paths.h"
using std::string;

#include "convert.h"

namespace DBa {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Changelog
	/// </summary>
	public ref class Changelog : public System::Windows::Forms::Form
	{
	public:
		Changelog(void)
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
		~Changelog()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::RichTextBox^ richTextBox1;
	private: System::Windows::Forms::Button^ button1;

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
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Список изменений для версии";
			// 
			// richTextBox1
			// 
			this->richTextBox1->Location = System::Drawing::Point(12, 25);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->Size = System::Drawing::Size(368, 204);
			this->richTextBox1->TabIndex = 1;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(12, 232);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(368, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Закрыть";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Changelog::button1_Click);
			// 
			// Changelog
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(392, 263);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			this->Name = L"Changelog";
			this->Text = L"Список изменений";
			this->Load += gcnew System::EventHandler(this, &Changelog::Changelog_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Changelog_Load(System::Object^ sender, System::EventArgs^ e) {
		label1->Text += " " + convert(transf::data_changelog[0]) + ":";
		vector<string> s = transf::data_changelog;
		for (int i = 1; i < s.size(); i++)
		{
			richTextBox1->Text += convert(s[i]) + Environment::NewLine;
		}
		std::string f = "";
		f += paths::get_path();
		f += "\\changelog.tc";
		
		std::ofstream ofs;
		ofs.open(f, std::ofstream::out | std::ofstream::trunc);
		ofs.close();
	}
		
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
	};
}