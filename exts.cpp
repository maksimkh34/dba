#include "exts.h"
#include <msclr/marshal_cppstd.h>
namespace ex{
	string username;

	string get_username()
	{
		return ex::username;
	}

	void ex::set_username(string name)
	{
		username = name;
	}

	void ex::set_username(System::String^ name)
	{
		username = msclr::interop::marshal_as<std::string>(name);
	}
}