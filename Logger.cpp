#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <time.h>

#include "Event.h"
#include "Logger.h"

Logger::Logger(std::string path, std::string pname)
{
	time_t nowtime = time(0);
	std::string ftime = std::ctime(&nowtime);

	std::replace(ftime.begin(), ftime.end(), '\n', '\0');
	std::replace(ftime.begin(), ftime.end(), ' ', '_');
	std::replace(ftime.begin(), ftime.end(), ':', '_');

	std::vector<std::string> date = split(ftime, '_');
	ftime = date[3] + "_" + date[1] + "_" + date[4] + "_" + date[5];

	logpath = path + "\\log_" + pname + ftime + ".cl";

	log_out.open(logpath);

	Event init(SYS_T, "Program init");
	events.push_back(init);
}

Logger::~Logger()
{
	Event closing(SYS_T, "Program closing... ");
	events.push_back(closing);
	flush();
	log_out.close();
}

void Logger::push_ev(Event ev)
{
	events.push_back(ev);
}

void Logger::flush()
{
	log_out.seekp(std::ios_base::beg);
	for (int i = 0; i < events.size(); i++)
	{
		std::string form = "";
		form += "[";
		form += msclr::interop::marshal_as<std::string>(i.ToString());
		form += "]:\t ";
		form += events[i].get_str();
		form += '\n';
		log_out << form;
	}
}

std::string Logger::get_logpath()
{
	return logpath;
}
