#pragma once


#include <iostream>
#include "user.h"

class Menu
{
private:
	User _user;

	void Print();
public:
	Menu();

	void PrintLogin();
};
