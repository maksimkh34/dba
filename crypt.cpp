#include <string>
#include <vector>
using std::string;
using std::vector;

vector<char> crtable =
{
	'A','H','1', 't', 'o', 'p','2', '3', 'h', '(', ')', '+', 'j', '4', 'y', 'u', 'i', '5', '6', '7', '8', '9', '0', '`', '-', '+',
	'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O','$', '%', '^', 'P', '{', '}', '|',
	'~', '!', 'J', 'K', 'L','a', 's', ':', '\"', '\n' , '@', 'S', 'D', 'F', 'G',  '#',  '&', '*', 'k', 'l', ';', '\'',
	'z', 'x', 'v', 'b','q', 'w', 'e', 'r',  'n', 'm', ',', '.', '/',
	'Z', 'X', 'C', '[',  'd', 'f', 'g',']', 'V', 'B', 'N', 'M', '<', '_', '>', '?', 'c'
};
vector<char> decrtable
{
	'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p', '[', ']',
	'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';', '\'',
	'z','x','v','b','\n','n','m',',','.', '/',
	'1', '2', '3', '4', '5', '6', '7', '8', '9', '0', '`', '-', '+',
	'~','!','@','#','$','%','^','&','*', '(', ')', '_', '+',
	'Q', 'W', 'E', 'R', 'T', 'Y', 'U', 'I', 'O', 'P', '{', '}', '|',
	'A', 'S', 'D', 'F', 'G', 'H', 'J', 'K', 'L', ':', '\"',
	'Z','X','C','V','B','N','M','<','>', '?', 'c'
};

string scrypt(string text)
{
	const size_t tsize = text.size();
	for (int i = 0; i < tsize; i++)
	{
		for (int j = 0; j < decrtable.size(); j++)
		{
			if (text[i] == decrtable[j])
			{
				text[i] = crtable[j];
				break;
			}
		}
	}
	return text;
}

string sdecrypt(string text)
{
	const size_t tsize = text.size();
	for (int i = 0; i < tsize; i++)
	{
		for (int j = 0; j < crtable.size(); j++)
		{
			if (text[i] == crtable[j])
			{
				text[i] = decrtable[j];
				break;
			}
		}
	}
	return text;
}

vector<string> svcrypt(vector<string> text_v)
{
	for (int i = 0; i < text_v.size(); i++)
	{
		text_v[i] = scrypt(text_v[i]);
	}
	return text_v;
}

vector<string> svdecrypt(vector<string> text_v)
{
	for (int i = 0; i < text_v.size(); i++)
	{
		text_v[i] = sdecrypt(text_v[i]);
	}
	return text_v;
}