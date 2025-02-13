#include "menu.h"

void Menu::Print()
{
	std::cout << "\t-- - Кошелёк 1 -- - " << "\n" << "-- - -- - Карта 1 -- - 20.06Р-- - -- - " << "\n" << "-- - -- - Карта 2 -- - 74.32Р-- - -- - " << "\n" << std::endl;
	std::cout << "\t-- - Кошелёк 2 -- - " << "\n" << "-- - -- - Карта 2 -- - 59.38Р-- - -- - " << "\n" << "-- - -- - Карта 2 -- - 106.23Р-- - -- - " << "\n" << std::endl;
	int UserChoice = 0;
	const int LastIndex = 10;
	std::string array[LastIndex] = { "1)Добавить кошелёк",
		"2)Добавить карту",
		"3)Пополнить балланс",
		"4)Уменьшить балланс",
		"5)Сформировать отчёт",
		"6)Сформировать рейтинг(топ 3)",
		"7)Сохранить отчёт",
		"8)Сохранить рейтинг",
		"9)Выйти"
	};
	for (int i = 0; i <= LastIndex; i++) {
		std::cout << array[i] << std::endl;
	}

	do {
		// Проверка на ошибку ввода
		if (!(std::cin >> UserChoice)) {
			// Очистка флага ошибки ввода
			std::cin.clear();
			// Очистка ввода до следующего символа новой строки
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
	} while (UserChoice < 1 || UserChoice > 9);


	switch (UserChoice) {
	case 1:
		std::cout << "hi";
	case 2:
		std::cout << "hi";
	case 3:
		std::cout << "hi";
	case 4:
		std::cout << "hi";
	case 5:
		std::cout << "hi";
	case 6:
		std::cout << "hi";
	case 7:
		std::cout << "hi";
	case 8:
		std::cout << "hi";
	}
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
