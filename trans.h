#pragma once
#include <string>
#include "Logger.h"

//#define push_event(event_type, text) Event event__(event_type, text); transf::add_event(event__)
#define sst System::String^

namespace transf {
	extern vector<string> data_changelog;
	extern vector<vector<string>> data_callback;

	std::string getName();
	void setName(std::string name_);

	int getLastAddedUserNumber();
	void setLastAddedUserNumber(int addedNumber);

	int getLastAddedSchoolNumber();
	void setLastAddedSchoolNumber(int addedSchool);

	bool isAddedSchool();
	void setAddedSchool(bool x);

	//void add_event(Event ev);
	//void flush_l();
	//void close_logger();
}