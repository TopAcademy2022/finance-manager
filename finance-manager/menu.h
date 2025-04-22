#pragma once


#include <iostream>
#include <type_traits>
#include "user.h"
#include "./models/report.h"

/*!
* @class Menu representing the application menu
* @brief Application menu
*/
class Menu
{
private:
	/*!
	* @brief User of our system.
	*/
	User* _user;

	Report* _report;

	/*!
	* @brief Displays the main menu of the application.
	* @detail Displays a list of available menu options on the screen.
	*/
	bool Print();
public:
	Menu();

	/*!
	* @brief Allows you to log in or register.
	*/
	void PrintLogin();
};
