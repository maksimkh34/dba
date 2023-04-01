#pragma once
#include <string>
#include <fstream>
#include <vector>
#include "DBError.h"

using std::ofstream;
using std::vector;
using std::string;

class EIClass
{
private:
	std::string name_, shortname_, x_, form_, org_, leader_, email_, site_, adress_, unp_, phone_;
public:
	EIClass(std::string name, std::string shortname, std::string x, std::string form, std::string org, std::string leader, std::string email, std::string site, std::string adress, std::string unp, std::string phone) {
		name_ = name;
		shortname_ = shortname;
		x_ = x;
		form_ = form;
		org_ = org;
		leader_ = leader;
		email_ = email;
		site_ = site;
		adress_ = adress;
		unp_ = unp;
		phone_ = phone;
	}

	vector<string> get_vdata()
	{
		vector<string> tempdata;
		tempdata.push_back(name_ + ',' + shortname_ + ',' + x_ + ',' + form_ + ',' + org_ + ',' + leader_ + ',' + email_ + ',' + site_ + ',' + adress_ + ',' + unp_ + ',' + phone_);
		return tempdata;
	}
};

