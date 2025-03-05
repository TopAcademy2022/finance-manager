#include "menu.h"

void Menu::Print()
{
    std::cout << "\t-- - Кошелёк 1 -- - " << "\n" << "-- - -- - Карта 1 -- - 20.06Р-- - -- - " << "\n" << "-- - -- - Карта 2 -- - 74.32Р-- - -- - " << "\n" << std::endl;
    std::cout << "\t-- - Кошелёк 2 -- - " << "\n" << "-- - -- - Карта 2 -- - 59.38Р-- - -- - " << "\n" << "-- - -- - Карта 2 -- - 106.23Р-- - -- - " << "\n" << std::endl;

    int UserChoice;
    const int LastIndex = 9;
    std::string array[LastIndex] = {
        "1)Добавить кошелёк",
        "2)Добавить карту",
        "3)Пополнить балланс",
        "4)Уменьшить балланс",
        "5)Сформировать отчёт",
        "6)Сформировать рейтинг(топ 3)",
        "7)Сохранить отчёт",
        "8)Сохранить рейтинг",
        "9)Выйти"
    };

    for (int i = 0; i < LastIndex; i++) {
        std::cout << array[i] << std::endl;
    }

    do {
        std::cout << "Введите номер пункта меню: ";
        std::cin >> UserChoice;

        
        if (std::cin.fail()) {
            std::cin.clear(); 
            std::cin.get(); 
            std::cout << "Неверный ввод, попробуйте снова." << std::endl;
        }
        else if (UserChoice < 1 || UserChoice > 9) {
            std::cout << "Выберите номер пункта от 1 до 9." << std::endl;
        }
    } while (std::cin.fail() || UserChoice < 1 || UserChoice > 9);

    switch (UserChoice) {
    case 1:
        std::cout << "Добавить кошелёк" << std::endl;
        break;
    case 2:
        std::cout << "Добавить карту" << std::endl;
        break;
    case 3:
        std::cout << "Пополнить балланс" << std::endl;
        break;
    case 4:
        std::cout << "Уменьшить балланс" << std::endl;
        break;
    case 5:
        std::cout << "Сформировать отчёт" << std::endl;
        break;
    case 6:
        std::cout << "Сформировать рейтинг (топ 3)" << std::endl;
        break;
    case 7:
        std::cout << "Сохранить отчёт" << std::endl;
        break;
    case 8:
        std::cout << "Сохранить рейтинг" << std::endl;
        break;
    case 9:
        std::cout << "Выход" << std::endl;
        break;
    default:
        std::cout << "Неизвестная ошибка" << std::endl;
        break;
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
			//system("cls");
			this->Print();
		}
		break;
	default:
		break;
	}
}
