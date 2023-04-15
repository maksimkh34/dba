#pragma once

#include <Windows.h>
#include <shellapi.h>
#include <fstream>
#include <string>
#include "split.h"
#include <vector>
#include "Changelog.h"
#include "EI.h"
#include "Help_f.h"
#include "Groups.h"
#include "AddUser.h"
#include "AdminsList.h"
#include "ChangePassword.h"

namespace DBa {
	
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			Application::Exit();
			if (components)
			{
				delete components;
			}
		}

	private: System::Windows::Forms::MenuStrip^ main_strip;
	private: System::Windows::Forms::ToolStripMenuItem^ справочникиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ воспитанникиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ отрядыToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ учреждениеОбразованияToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ всеToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ повторноПрибывшиеToolStripMenuItem;




	private: System::Windows::Forms::ToolStripMenuItem^ поВозрастуToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ изВыбранныхОтрядовToolStripMenuItem;


	private: System::Windows::Forms::ToolStripMenuItem^ справкаToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ пользователиToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ добавитьToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ редактироватьToolStripMenuItem;






	private: System::Windows::Forms::ToolStripMenuItem^ повторноПрибывшиеToolStripMenuItem1;
	private: System::Windows::Forms::ToolStripMenuItem^ социальнопедагогическийПаспортToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ сервисToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ изменитьПарольToolStripMenuItem;








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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Main::typeid));
			this->main_strip = (gcnew System::Windows::Forms::MenuStrip());
			this->справочникиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->воспитанникиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->отрядыToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->всеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->повторноПрибывшиеToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->поВозрастуToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изВыбранныхОтрядовToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->повторноПрибывшиеToolStripMenuItem1 = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->учреждениеОбразованияToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->социальнопедагогическийПаспортToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->пользователиToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->добавитьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->редактироватьToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->сервисToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->изменитьПарольToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->справкаToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->main_strip->SuspendLayout();
			this->SuspendLayout();
			// 
			// main_strip
			// 
			this->main_strip->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->справочникиToolStripMenuItem,
					this->пользователиToolStripMenuItem, this->сервисToolStripMenuItem, this->справкаToolStripMenuItem
			});
			this->main_strip->Location = System::Drawing::Point(0, 0);
			this->main_strip->Name = L"main_strip";
			this->main_strip->Size = System::Drawing::Size(1170, 24);
			this->main_strip->TabIndex = 1;
			this->main_strip->Text = L"menuStrip2";
			// 
			// справочникиToolStripMenuItem
			// 
			this->справочникиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->воспитанникиToolStripMenuItem,
					this->отрядыToolStripMenuItem, this->учреждениеОбразованияToolStripMenuItem, this->социальнопедагогическийПаспортToolStripMenuItem
			});
			this->справочникиToolStripMenuItem->Name = L"справочникиToolStripMenuItem";
			this->справочникиToolStripMenuItem->Size = System::Drawing::Size(94, 20);
			this->справочникиToolStripMenuItem->Text = L"Справочники";
			this->справочникиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::справочникиToolStripMenuItem_Click);
			// 
			// воспитанникиToolStripMenuItem
			// 
			this->воспитанникиToolStripMenuItem->Name = L"воспитанникиToolStripMenuItem";
			this->воспитанникиToolStripMenuItem->Size = System::Drawing::Size(277, 22);
			this->воспитанникиToolStripMenuItem->Text = L"Учреждение образования";
			this->воспитанникиToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::воспитанникиToolStripMenuItem_Click);
			// 
			// отрядыToolStripMenuItem
			// 
			this->отрядыToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->всеToolStripMenuItem,
					this->повторноПрибывшиеToolStripMenuItem, this->поВозрастуToolStripMenuItem, this->изВыбранныхОтрядовToolStripMenuItem, this->повторноПрибывшиеToolStripMenuItem1
			});
			this->отрядыToolStripMenuItem->Name = L"отрядыToolStripMenuItem";
			this->отрядыToolStripMenuItem->Size = System::Drawing::Size(277, 22);
			this->отрядыToolStripMenuItem->Text = L"Воспитанники";
			this->отрядыToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::отрядыToolStripMenuItem_Click);
			// 
			// всеToolStripMenuItem
			// 
			this->всеToolStripMenuItem->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9, System::Drawing::FontStyle::Bold));
			this->всеToolStripMenuItem->Name = L"всеToolStripMenuItem";
			this->всеToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->всеToolStripMenuItem->Text = L"ВСЕ за весь период";
			// 
			// повторноПрибывшиеToolStripMenuItem
			// 
			this->повторноПрибывшиеToolStripMenuItem->Name = L"повторноПрибывшиеToolStripMenuItem";
			this->повторноПрибывшиеToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->повторноПрибывшиеToolStripMenuItem->Text = L"ВСЕ на текущей смене";
			this->повторноПрибывшиеToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::повторноПрибывшиеToolStripMenuItem_Click);
			// 
			// поВозрастуToolStripMenuItem
			// 
			this->поВозрастуToolStripMenuItem->Name = L"поВозрастуToolStripMenuItem";
			this->поВозрастуToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->поВозрастуToolStripMenuItem->Text = L"По возрасту";
			// 
			// изВыбранныхОтрядовToolStripMenuItem
			// 
			this->изВыбранныхОтрядовToolStripMenuItem->Name = L"изВыбранныхОтрядовToolStripMenuItem";
			this->изВыбранныхОтрядовToolStripMenuItem->Size = System::Drawing::Size(202, 22);
			this->изВыбранныхОтрядовToolStripMenuItem->Text = L"Из выбранных отрядов";
			// 
			// повторноПрибывшиеToolStripMenuItem1
			// 
			this->повторноПрибывшиеToolStripMenuItem1->Name = L"повторноПрибывшиеToolStripMenuItem1";
			this->повторноПрибывшиеToolStripMenuItem1->Size = System::Drawing::Size(202, 22);
			this->повторноПрибывшиеToolStripMenuItem1->Text = L"Повторно прибывшие";
			// 
			// учреждениеОбразованияToolStripMenuItem
			// 
			this->учреждениеОбразованияToolStripMenuItem->Name = L"учреждениеОбразованияToolStripMenuItem";
			this->учреждениеОбразованияToolStripMenuItem->Size = System::Drawing::Size(277, 22);
			this->учреждениеОбразованияToolStripMenuItem->Text = L"Отряды";
			this->учреждениеОбразованияToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::учреждениеОбразованияToolStripMenuItem_Click);
			// 
			// социальнопедагогическийПаспортToolStripMenuItem
			// 
			this->социальнопедагогическийПаспортToolStripMenuItem->Name = L"социальнопедагогическийПаспортToolStripMenuItem";
			this->социальнопедагогическийПаспортToolStripMenuItem->Size = System::Drawing::Size(277, 22);
			this->социальнопедагогическийПаспортToolStripMenuItem->Text = L"Социально-педагогический паспорт";
			// 
			// пользователиToolStripMenuItem
			// 
			this->пользователиToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->добавитьToolStripMenuItem,
					this->редактироватьToolStripMenuItem
			});
			this->пользователиToolStripMenuItem->Name = L"пользователиToolStripMenuItem";
			this->пользователиToolStripMenuItem->Size = System::Drawing::Size(97, 20);
			this->пользователиToolStripMenuItem->Text = L"Пользователи";
			// 
			// добавитьToolStripMenuItem
			// 
			this->добавитьToolStripMenuItem->Name = L"добавитьToolStripMenuItem";
			this->добавитьToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->добавитьToolStripMenuItem->Text = L"Добавить";
			this->добавитьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::добавитьToolStripMenuItem_Click);
			// 
			// редактироватьToolStripMenuItem
			// 
			this->редактироватьToolStripMenuItem->Name = L"редактироватьToolStripMenuItem";
			this->редактироватьToolStripMenuItem->Size = System::Drawing::Size(154, 22);
			this->редактироватьToolStripMenuItem->Text = L"Редактировать";
			this->редактироватьToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::редактироватьToolStripMenuItem_Click);
			// 
			// сервисToolStripMenuItem
			// 
			this->сервисToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->изменитьПарольToolStripMenuItem });
			this->сервисToolStripMenuItem->Name = L"сервисToolStripMenuItem";
			this->сервисToolStripMenuItem->Size = System::Drawing::Size(59, 20);
			this->сервисToolStripMenuItem->Text = L"Сервис";
			// 
			// изменитьПарольToolStripMenuItem
			// 
			this->изменитьПарольToolStripMenuItem->Name = L"изменитьПарольToolStripMenuItem";
			this->изменитьПарольToolStripMenuItem->Size = System::Drawing::Size(171, 22);
			this->изменитьПарольToolStripMenuItem->Text = L"Изменить пароль";
			this->изменитьПарольToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::изменитьПарольToolStripMenuItem_Click);
			// 
			// справкаToolStripMenuItem
			// 
			this->справкаToolStripMenuItem->DoubleClickEnabled = true;
			this->справкаToolStripMenuItem->Name = L"справкаToolStripMenuItem";
			this->справкаToolStripMenuItem->ShortcutKeyDisplayString = L"";
			this->справкаToolStripMenuItem->ShortcutKeys = System::Windows::Forms::Keys::F11;
			this->справкаToolStripMenuItem->Size = System::Drawing::Size(65, 20);
			this->справкаToolStripMenuItem->Text = L"Справка";
			this->справкаToolStripMenuItem->Click += gcnew System::EventHandler(this, &Main::справкаToolStripMenuItem_Click);
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1170, 666);
			this->Controls->Add(this->main_strip);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"Main";
			this->Text = L"Главная";
			this->WindowState = System::Windows::Forms::FormWindowState::Maximized;
			this->Load += gcnew System::EventHandler(this, &Main::Main_Load);
			this->main_strip->ResumeLayout(false);
			this->main_strip->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Main_Load(System::Object^ sender, System::EventArgs^ e) {
		std::ifstream changelog;
		std::string path__ = paths::get_path() + string("\\changelog.tc");
		changelog.open(path__);
		if (changelog.is_open())
		{
			if (!(changelog.peek() == std::ifstream::traits_type::eof()))
			{
				std::string temp = "";
				std::vector<std::string> v;
				while (!changelog.eof())
				{
					std::getline(changelog, temp);
					v.push_back(temp);
				}

				transf::data_changelog = v;
				Changelog^ f = gcnew Changelog;
				f->ShowDialog();
			}
		}
	}
	private: System::Void fdToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void отрядыToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void справочникиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void воспитанникиToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		EI^ fuo = gcnew EI;
		fuo->ShowDialog();
	}
	private: System::Void списокToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {

	}
	private: System::Void учреждениеОбразованияToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		groups^ form = gcnew groups;
		form->ShowDialog();
	}
	private: System::Void справкаToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		Help_f^ form = gcnew Help_f;
		form->ShowDialog();
	}
	private: System::Void добавитьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AddUser^ form = gcnew AddUser;
		form->ShowDialog();
	}
	private: System::Void повторноПрибывшиеToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void редактироватьToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		AdminsList^ f = gcnew AdminsList;
		f->ShowDialog();
	}
	private: System::Void изменитьПарольToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e) {
		ChangePassword^ f = gcnew ChangePassword;
		f->ShowDialog();
	}
	};
	
}
