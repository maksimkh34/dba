#pragma once
#include "EmailError.h"

namespace DBa {

	using namespace System;
	using namespace System::Net;
	using namespace System::Net::Mail;
	using namespace System::Net::Mime;
	using namespace System::Threading;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для SendEmail
	/// </summary>
	public ref class SendEmail : public System::Windows::Forms::Form
	{
	public:
		SendEmail(void)
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
		~SendEmail()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::TextBox^ email_tb;

	private: System::Windows::Forms::TextBox^ name_tb;
	private: System::Windows::Forms::TextBox^ theme_tb;
	private: System::Windows::Forms::TextBox^ text_tb;


	private: System::Windows::Forms::Button^ send_butt;
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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(SendEmail::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->email_tb = (gcnew System::Windows::Forms::TextBox());
			this->name_tb = (gcnew System::Windows::Forms::TextBox());
			this->theme_tb = (gcnew System::Windows::Forms::TextBox());
			this->text_tb = (gcnew System::Windows::Forms::TextBox());
			this->send_butt = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(8, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(57, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Ваше имя";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(8, 48);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(141, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Почта для обратной связи";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(8, 87);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(34, 13);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Тема";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(8, 126);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(97, 13);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Текст сообщения";
			// 
			// email_tb
			// 
			this->email_tb->Location = System::Drawing::Point(12, 64);
			this->email_tb->Name = L"email_tb";
			this->email_tb->Size = System::Drawing::Size(260, 20);
			this->email_tb->TabIndex = 4;
			// 
			// name_tb
			// 
			this->name_tb->Location = System::Drawing::Point(12, 25);
			this->name_tb->Name = L"name_tb";
			this->name_tb->Size = System::Drawing::Size(260, 20);
			this->name_tb->TabIndex = 5;
			// 
			// theme_tb
			// 
			this->theme_tb->Location = System::Drawing::Point(11, 103);
			this->theme_tb->Name = L"theme_tb";
			this->theme_tb->Size = System::Drawing::Size(261, 20);
			this->theme_tb->TabIndex = 6;
			// 
			// text_tb
			// 
			this->text_tb->Location = System::Drawing::Point(11, 142);
			this->text_tb->Multiline = true;
			this->text_tb->Name = L"text_tb";
			this->text_tb->Size = System::Drawing::Size(261, 159);
			this->text_tb->TabIndex = 7;
			// 
			// send_butt
			// 
			this->send_butt->Location = System::Drawing::Point(13, 308);
			this->send_butt->Name = L"send_butt";
			this->send_butt->Size = System::Drawing::Size(259, 23);
			this->send_butt->TabIndex = 8;
			this->send_butt->Text = L"Отправить";
			this->send_butt->UseVisualStyleBackColor = true;
			this->send_butt->Click += gcnew System::EventHandler(this, &SendEmail::send_butt_Click);
			// 
			// SendEmail
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 339);
			this->Controls->Add(this->send_butt);
			this->Controls->Add(this->text_tb);
			this->Controls->Add(this->theme_tb);
			this->Controls->Add(this->name_tb);
			this->Controls->Add(this->email_tb);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->Name = L"SendEmail";
			this->Text = L"Обратная связь";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void send_butt_Click(System::Object^ sender, System::EventArgs^ e) {
		System::String^ full_text = "";
		full_text = "Name: " + name_tb->Text + ", email: " + email_tb->Text + "\n\n";
		full_text += text_tb->Text;

		SmtpClient^ Smtp = gcnew SmtpClient("smtp.mail.ru", 25);
		Smtp->Credentials = gcnew NetworkCredential("zudbalogs@bk.ru", "u4E92XUjjemyKu8cvWdq");
		Smtp->EnableSsl = true;
		MailMessage^ Message = gcnew MailMessage();
		Message->From = gcnew MailAddress("zudbalogs@bk.ru");
		Message->To->Add(gcnew MailAddress("34_logs@list.ru"));
		Message->Subject = theme_tb->Text;
		Message->Body = full_text;
		try
		{
			Smtp->Send(Message);
			throw - 1;
		}
		catch (...)
		{
			EmailError^ form = gcnew EmailError;
			form->ShowDialog();
		}
		this->Close();
	}
	};
}
