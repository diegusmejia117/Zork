#include "globals.h"

bool compTxt(const std::string& a, const std::string& b)
{
	return _stricmp(a.c_str(), b.c_str()) == 0;
}

bool compTxt(const char* a, const std::string& b)
{
	return _stricmp(a, b.c_str()) == 0;
}

bool compTxt(const std::string& a, const char* b)
{
	return _stricmp(a.c_str(), b) == 0;
}

int Roll(int min, int max)
{
	return (max > 0) ? min + (rand() % (max - min)) : 0;
}
