#include <iostream>

int main() {
	short int sInt = 32767;
	int iI = 2147483647;
	long long iLL = 4000000;
	char cChr = 'a';
	bool bFlg = true;
	float fFlt = 123.456;
	double dDbl = 9223372036854775.807;

	enum XO { X, O, _ };
	XO Cell[] = { X, O, X };

	struct stMyStruct {
		int iX;
		int iY;
		XO xoValue;
		char cPlayerName[20];
	};

	union MyData {
		int iValue;
		float fValue;
		char cValue;
	};
	struct MyVariant {
		MyData MyDataX;
		int is_int : 1 ;
		int is_float : 1;
		int is_char : 1;
	} stMyVar1 = {12, 1, 0, 0};

	std::cout << stMyVar1.MyDataX.iValue << " " << stMyVar1.is_int << stMyVar1.is_float << stMyVar1.is_char << std::endl;
	stMyVar1.MyDataX.fValue = 12.2;
	stMyVar1.is_int = 0;
	stMyVar1.is_float = 1;
	std::cout << stMyVar1.MyDataX.fValue << " " << stMyVar1.is_int << stMyVar1.is_float << stMyVar1.is_char << std::endl;
	stMyVar1 = { 'C', 0, 0, 1 };
	std::cout << stMyVar1.MyDataX.cValue << " " << stMyVar1.is_int << stMyVar1.is_float << stMyVar1.is_char << std::endl;

	return 0;
}