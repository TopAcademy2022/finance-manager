#pragma once


#include <iostream>
#include <string>

class Card
{
private:
	int _balance;
	int _pin;
	tm _data{};
	int _cvv;
	std::string _number;
	std::string _userName;
public:
	bool TopUp(int sum);
};
