#include "argument.h"

void input(std::string& str_namber, double* namber1, std::string& str_namber2, double* namber2)
{
	*namber1 = atof(str_namber.c_str());
	*namber2 = atof(str_namber2.c_str());
}

void input2(std::string* str_namber, double *namber1)
{
	/*
	std::string buffer;
	//*namber1 = atof(str_namber->c_str());
	char* buff[256+1];
	for (int i = 0; i < str_namber->length(); i++)
	{
		buffer = str_namber[i].c_str();
	}
	*namber1 = atof(buffer.c_str());
	*/
	*namber1 = atof(str_namber->c_str());		
}
