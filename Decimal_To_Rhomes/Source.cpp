#include "stdafx.h"
#include "roman.h"


//Convert Decimal number To Roman Number
void roman::conversion()
{
	int count = 0;
	int dec = decimal;
	while (dec)
	{
		if (dec >= 1000)
		{
			digit('M', dec / 1000);
			dec %= 1000;
		}
		else if (dec >= 500)
		{
			if(dec < 900 )
			{
				digit('D', dec / 500);
				dec %= 500;
			}
			else
			{
				sub_digit("CM");
				dec %= 100;
			}
		}
		else if (dec >= 100)
		{
			if (dec < 400)
			{
				digit('C', dec / 100);
			}
			else
			{
				sub_digit("CD");
			}
			dec %= 100;
		}
		
		else if (dec >= 50)
		{
			if (dec < 90)
			{
				digit('L', dec / 50);
				dec %= 50;
			}
			else
			{
				sub_digit("XC");
				dec %= 10;
			}
		}
		else if (dec >= 10)
		{
			if (dec < 40)
			{
				digit('X', dec / 10);
			}
			else
			{
				sub_digit("XL");
			}
			dec %= 10;
		}
		else if (dec >= 5)
		{
			if (dec < 9)
			{
				digit('V', dec / 5);
				dec %= 5;
			}
			else
			{
				sub_digit("IX");
				dec = 0;
			}
		}

		else if (dec >= 1)
		{
			if (dec < 4)
			{
				digit('I', dec);
			}
			else
			{
				sub_digit("IV");
			}
			dec = 0;
		}
	}
		
}

void roman::digit(const char& sym, int count)
{
	for (int i = 0; i < count; i++)
	{
		romans += sym;
	}
}

void roman::sub_digit(const std::string str)
{
	romans += str;
}