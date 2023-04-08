#pragma once
#include <ctime>
#include <string>
#include <sstream>
#include <algorithm>
#include <msclr/marshal_cppstd.h>

#include "Event.h"

using namespace System;

enum event_type
{
	ERR_T,	// Отображается при ошибке, вызванной неверными данными (ошибка в формате, ошибка введения пользователем)
	WARN_T,	// Предупреждение о событиях, которые могут повлиять на работтоспособность программы
	INFO_T,	// Информирующий тип
	SYS_T,	// Системное сообщение (конструктор/деструктор логгера)
	CRIT_T,	// Критическое сообщение (исключение в программе, или ошибка, не дающая программе функционировать)
	MID_T	// Предупреждение среднего уровня, но не влияющее на работоспособность программы
};

std::string enum_to_string(event_type tp);

class Event {
private:
	time_t nowtime;
	event_type evt;
	std::string text_e;
	std::string nowtime_s;

public:
	Event(event_type type, std::string text)
	{
		nowtime = time(0);

		std::stringstream ss;
		ss << nowtime;

		nowtime_s = ss.str();

		text_e = text;

		evt = type;
	}

	std::string get_str()
	{
		std::string ftime = std::ctime(&nowtime);
		std::replace(ftime.begin(), ftime.end(), '\n', ':');
		return enum_to_string(evt) + ":\t " + ftime + "\t " + text_e;
	}
};