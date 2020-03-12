#include "EvenOdd.h"

extern "C"
{
	_declspec(dllexport) std::string CheckEvenOdd(const int iNum)
	{
		std::string strRes = "NULL";
		if (iNum % 2 == 0)
		{
			strRes = "The given number is Even";
		}
		else
		{
			strRes = "The given number is Odd";
		}
		return strRes;
	}

}
