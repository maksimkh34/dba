#pragma once
#include <string>
#include <vector>
#include <fstream>
#include <type_traits>
#include "mcsv.h"

using std::vector;
using std::string;
using std::ifstream;
using std::ofstream;


namespace mcsv {
	vector<string> split(string text, char delimeter)
	{
		size_t pointer = 0;
		vector<string> vct;
		const size_t size = text.size();
		for (size_t i = 0; i < size - 1; i++)
		{
			if (text[i] == delimeter && i != 0)
			{
				string _text = "";
				for (size_t j = pointer; j < i; j++)
				{
					_text += text[j];
				}
				pointer = i;
				if (vct.size() >= 1) {
					vct.push_back(_text.substr(1, _text.size()));
				}
				else {
					vct.push_back(_text);
				}

			}
		}
		string _text;
		_text = "";
		for (size_t j = pointer; j < size; j++)
		{
			_text += text[j];
		}
		vct.push_back(_text.substr(1, _text.size()));
		return vct;
	}

	vector<vector<string>> read_csv(string path) {
		vector<vector<string>> data;
		vector<string> _rstring;
		vector<string> strings;
		ifstream base;
		string temp;

		base.open(path);
		while (!base.eof()) {
			std::getline(base, temp);
			strings.push_back(temp);
		}
		strings.pop_back();
		for (int i = 0; i < strings.size(); i++) {
			_rstring = split(strings[i], ',');
			data.push_back(_rstring);
		}
		return data;
	}


	void write_csv(string path, vector<vector<std::string>> vect)
	{
		if (vect.size() == 0)
		{
			std::ofstream ofs;
			ofs.open(path, std::ofstream::out | std::ofstream::trunc);
			ofs.close();
			return;
		}

		size_t fsize = vect.size();
		size_t fcsize = vect[0].size();

		std::string _temp = "";
		std::string temp = "";

		for (int i = 0; i < fsize; i++) {
			for (int j = 0; j < fcsize - 1; j++) {
				_temp += vect[i][j];
			}
			_temp += vect[fsize - 1][fcsize - 1];
			_temp += '\n';
			temp += _temp;
			_temp = "";
		}
		ofstream out;
		out.open(path);

		out << temp;
		out.close();
	}

	void append_csv(string path, vector<string> vect) {
		const size_t size = vect.size();
		string temp = "";

		for (int i = 0; i < size - 1; i++) {
			temp += vect[i] + ',';
		}
		temp += vect[size - 1] + '\n';

		ofstream out;
		out.open(path, std::ios_base::app);
		out << temp;
	}
}
