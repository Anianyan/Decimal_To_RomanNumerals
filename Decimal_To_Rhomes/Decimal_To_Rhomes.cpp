// Decimal_To_Rhomes.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "roman.h"
#include <string>



int main()
{
	int num;
	std::string result;
	std::cout << "Input: ";
	std::cin >> num;
	if (num < 0 || num > 3999)
	{
		std::cout << "Number Will be 1 to 3999 \nThank you" << std::endl;
		return 1;
	}

	roman convert(num);
	convert.conversion();
	result = convert.get_raman();
	std::cout <<"Output: "<< result<<std::endl;
    return 0;
}

