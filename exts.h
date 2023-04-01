#pragma once
#include <string>
using std::string;

namespace ex {
	extern string get_username();
	extern void set_username(string name);
	extern void set_username(System::String^ name);
	extern string username;
}