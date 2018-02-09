#include "fileParser.h"

int main()
{
	FileParser parser;
	parser.LoadFile("nope.txt");
	cout << parser.LoadFile("nope.txt") << endl;
}
