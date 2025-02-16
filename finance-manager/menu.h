#pragma once


#include <iostream>
#include <type_traits>
#include "user.h"

class Menu
{
private:
	User _user;

	void Print();
public:
	void PrintLogin();
};
