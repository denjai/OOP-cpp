#pragma once

#include <cstring>
#include <string.h>

class AnsiString
{
	char *str;
	unsigned size;
public:
	AnsiString();
	AnsiString(char *inputString);
	AnsiString(AnsiString &inputString);

	char * getString();
	AnsiString& operator=(AnsiString& inputString);
	AnsiString operator+(AnsiString& insputString);
	~AnsiString();
};

