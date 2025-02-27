#pragma once


#include <iostream>
#include <type_traits>
#include "user.h"

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
	User _user;

	/*!
	* @brief Displays the main menu of the application.
	* @detail Displays a list of available menu options on the screen.
	*/
	void Print();
public:
	/*!
	* @brief Allows you to log in or register.
	*/
	void PrintLogin();
};
