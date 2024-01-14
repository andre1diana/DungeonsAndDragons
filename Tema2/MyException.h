#pragma once
#include"Logger.h"
#include<string>

class MyException
{
private:
	Logger log;
	std::string errorMessage;
	int errorCode;

public:
	MyException(std::string m, int c) : errorMessage{ m }, errorCode{ c } {}
	~MyException() {}

	void printErrorMessage();
};

