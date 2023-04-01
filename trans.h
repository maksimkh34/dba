#pragma once
#include <string>
#include "Logger.h"

#define push_event(x, y) Event event__(x, y); transf::add_event(event__);
#define sst System::String^

namespace transf {
	std::string getName();
	void setName(std::string name_);

	int getLastAddedUserNumber();
	void setLastAddedUserNumber(int addedNumber);

	int getLastAddedSchoolNumber();
	void setLastAddedSchoolNumber(int addedSchool);

	bool isAddedSchool();
	void setAddedSchool(bool x);

	void add_event(Event ev);
	void flush_l();
	void close_logger();
}