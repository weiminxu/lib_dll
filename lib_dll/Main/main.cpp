#include <Windows.h>
#include <iostream>

typedef std::string(*FNPTR)(int);

int main()
{
	HINSTANCE hInst = LoadLibrary(L"D:\\git\\visual_studio_code\\lib_dll\\lib_dll\\Debug\\lib_dll.dll");

	if (!hInst)
	{
		std::cout << "\nCould Not Load the Library";
	}

	FNPTR fn = (FNPTR)GetProcAddress(hInst, "CheckEvenOdd");

	int iNum = 0;
	std::cout << "input:";
	std::cin >> iNum;
	std::string strResult = fn(iNum);
	std::cout << "\nThe DLL Says: " << strResult;
	return 0;
}