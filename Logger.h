#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <time.h>
#include "split.h"
#include "Event.h"

using std::string;
using std::vector;

class Logger {
private:
	std::vector<Event> events;
	std::ofstream log_out;
	std::string logpath;

public:
	Logger(std::string path, std::string pname);
	~Logger();

	void push_ev(Event ev);
	void flush();

	std::string get_logpath();
};
