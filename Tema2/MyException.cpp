#include "MyException.h"

void MyException::printErrorMessage()
{
	log.PrintErrorCode(errorCode);
	log.printMessage(errorMessage);
}
