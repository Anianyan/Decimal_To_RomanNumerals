#pragma once
#include <iostream>
#include <map>

class roman {
private:
	int decimal;
	std::string romans;
	std::pair <int, std::string>  sympol[13];
public:
	roman()
	{
		decimal = 0;
	}
	roman(int& num) :decimal(num) {};

	std::string& get_raman()
	{
		return romans;
	}

	void  conversion();
	void digit(const char&, int);
	void sub_digit(const std::string);

};