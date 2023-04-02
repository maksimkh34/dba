#pragma once
#include <string>
#include <vector>

using std::string;
using std::vector;

string scrypt(string text);
string sdecrypt(string text);

vector<string> svcrypt(vector<string> text_v);
vector<string> svdecrypt(vector<string> text_v);