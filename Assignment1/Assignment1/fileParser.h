#pragma once
#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <vector>
#include <map>
using namespace std;

class FileParser
{
public:
	string LoadFile(string name);
	void ParseFile(string name);
};

