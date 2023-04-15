#include "trans.h"

namespace transf {
	std::string __name;
	int lastAddedUserNumber = 0;
	int lastAddedSchoolNumber = 0;
	bool isSchoolAdded;
	vector<vector<string>> vect;
	vector<string> data_changelog;
	//Logger* __log = new Logger("C:\\ProgramData\\DBa\\Logs", "DBa");
	vector<vector<string>> data_callback;

	std::string getName()
	{
		return __name;
	}

	void setName(std::string name_) {
		__name = name_;
	}

	int getLastAddedUserNumber()
	{
		return lastAddedUserNumber;
	}

	void setLastAddedUserNumber(int addedNumber)
	{
		lastAddedUserNumber = addedNumber;
	}

	int getLastAddedSchoolNumber()
	{
		return lastAddedSchoolNumber;
	}

	void setLastAddedSchoolNumber(int addedSchool)
	{
		lastAddedSchoolNumber = addedSchool;
	}

	bool isAddedSchool()
	{
		return isSchoolAdded;
	}

	void setAddedSchool(bool x)
	{
		isSchoolAdded = x;
	}

	//void add_event(Event ev)
	//{
	//	__log->push_ev(ev);
	//}

	//void flush_l()
	//{
	//	__log->flush();
	//}

	//void close_logger()
	//{
	//	delete __log;
	//}

}