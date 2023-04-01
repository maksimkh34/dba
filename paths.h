#pragma once
#include <string>
#include <fstream>

namespace paths {
	std::string get_path();
	void set_path(std::string __path);
	void load_path();
}