#include "FileParser.h"

string FileParser::LoadFile(string name)
{
	ofstream file;
	string result;
	file.open(name);
	file << "TEST TEST TEST.\n";

	if (file.is_open())
	{
		file.close();
		result = "true";
	}
	else result = "not opened";

	return result;
}

void FileParser::ParseFile(string name)
{
	cout << "nope" << endl;
}
