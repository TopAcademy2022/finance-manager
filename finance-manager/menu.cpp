#include "menu.h"

void Menu::Print()
{
}

Menu::Menu()
{
	setlocale(0, "ru");
}

void Menu::PrintLogin()
{
	std::cout << "1. Войти" << std::endl;
	std::cout << "2. Регистрация" << std::endl;
	std::cout << "3. Выход" << std::endl;

	int userChoice = 0;
	std::cin >> userChoice;

	std::string login = "";
	std::string password = "";

	switch (userChoice)
	{
	case 1:
		std::cout << "Введите логин: ";
		std::cin >> login;

		std::cout << "Введите пароль: ";
		std::cin >> password;

		if (User::Login(login, password))
		{
			system("cls");
			this->Print();
		}
		break;
	default:
		break;
	}
}
