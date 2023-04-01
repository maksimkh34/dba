#pragma once
#include <ctime>
#include <string>
#include <sstream>
#include <algorithm>
#include <msclr/marshal_cppstd.h>

#include "Event.h"

using namespace System;

std::string enum_to_string(event_type tp)
{
	switch (tp)
	{
	case ERR_T: return "ERR";
	case WARN_T: return "WARN";
	case INFO_T: return "INFO";
	case SYS_T: return "SYS";
	case CRIT_T: return "CRIT";
	case MID_T: return "MIDDLE_WARN";
	}
	return "---";
}