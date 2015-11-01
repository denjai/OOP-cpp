#include "stdafx.h"
#include "ansi_string.h"


AnsiString::AnsiString()
{
	str = NULL;
	size = 0;
}

AnsiString::AnsiString(char * inputString)
{
	size = strlen(inputString);
	str = new char[size + 1];
	strcpy_s(str, size+1, inputString);
}

AnsiString::AnsiString(AnsiString & inputString)
{
	size = inputString.size;
	str = new char[size + 1];
	strcpy_s(str, size+1, inputString.getString());
}

char * AnsiString::getString()
{
	return str;
}

AnsiString & AnsiString::operator=(AnsiString & inputString)
{
	if (str)
	{
		delete str;
	}
	size = inputString.size;
	str = new char[size + 1];
	strcpy_s(str, size+1,inputString.getString());
	return *this;
}

AnsiString AnsiString::operator+(AnsiString & inputString)
{
	AnsiString temp;
	temp.size = size + inputString.size;
	temp.str = new char[temp.size+1];
	strcpy_s(temp.str,size+1 , str);
	strcat_s(temp.str,temp.size+1 , inputString.getString());
	return temp;
}



AnsiString::~AnsiString()
{
	delete str;
	str = NULL;
}
