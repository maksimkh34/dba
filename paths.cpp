#include <string>
#include <map>
#include <fstream>

namespace paths {
	std::string path;

	std::string get_path()
	{
		return path;
	}

	void set_path(std::string __path)
	{
		path = __path;
	}

	void load_path()
	{
		std::ifstream in;
		in.open("C:\\ProgramData\\dba\\pth");

		std::string _path;
		std::getline(in, _path);
		path = _path;
	}
}