#include "menu.h"
#include "models/report.h"
#include "services/report-service.h"
bool Menu::Print()
{
	this->_user->GetWallet()->Print();

	int UserChoice = 0;
	const int LastIndex = 9;
	std::string array[LastIndex] = {
		"Add wallet",
		"Add new card",
		"Top up balance",
		"4)Уменьшить баланс",
		"5)Сформировать отчёт",
		"6)Сформировать рейтинг(топ 3)",
		"7)Сохранить отчёт",
		"8)Сохранить рейтинг",
		"Exit"
	};

	for (int i = 0; i < LastIndex; i++)
	{
		std::cout << i + 1 << ". " << array[i] << std::endl;
	}

	do
	{
		std::cout << "Set menu element: ";
		std::cin >> UserChoice;

		/*if (std::cin.fail())
		{
			std::cin.clear();
			std::cin.get();
			std::cout << "Error enter, enter again." << std::endl;
		}*/
		if (UserChoice < 0 || UserChoice > 9)
		{
			std::cout << "Set menu element between from 1 to 9." << std::endl;
		}
	} while (UserChoice < 1 || UserChoice > 9); // std::cin.fail() ||

	switch (UserChoice)
	{
	case 1:
	{
		std::cout << "Set wallet name:" << std::endl;
		std::string walletName = "";
		std::cin >> walletName;
		this->_user->CreateWallet(walletName);
		return true;
	}
	case 2:
	{
		Card* card = new Card();
		this->_user->GetWallet()->AddCard(card);
		return true;
	}
	case 3:
	{
		std::cout << "Set card number:" << std::endl;
		unsigned int cardNumber;
		std::cin >> cardNumber;

		std::cout << "Set sum:" << std::endl;
		unsigned int sum;
		std::cin >> sum;

		this->_user->GetWallet()->TopUpCard(cardNumber, sum);
		return true;
	}
	case 4:
	{
		std::cout << "Уменьшить баланс" << std::endl;
		std::list<Card*> cards = this->_user->GetWallet()->GetCardList();
		// Get card name and find in list.
		int sum = 500;
		Card* card = *cards.begin();
		card->Rebalance(sum);
		break;
	}
	case 5:
		std::cout << "Сформировать отчёт" << std::endl;
		// this->_report.UseReport();
		break;
	case 6:
		std::cout << "Сформировать рейтинг (топ 3)" << std::endl;
		// this->_report.PrintTopCategories();
		break;
	case 7:
		std::cout << "Сохранить отчёт" << std::endl;
		// this->_report.SaveReport();
		break;
	case 8:
	{
		std::cout << "Сохранить рейтинг" << std::endl;
		HistoryPeriod period = HistoryPeriod::Day; // get from user
		ReportServices report;
		report.SaveTopCategories(period, "name"); // get from this->user
		break;
	}
	case 9:
		std::cout << "Goodbye!" << std::endl;
		break;
	default:
		std::cout << "Unexpected error..." << std::endl;
		break;
	}

	return false;
}

Menu::Menu()
{
	this->_user = new User("Example");
	this->_report = new Report(this->_user);
}

void Menu::PrintLogin()
{
	std::cout << "1. Sign in" << std::endl;
	std::cout << "2. Registration" << std::endl;
	std::cout << "3. Exit" << std::endl;

	int userChoice = 0;
	std::cin >> userChoice;
	std::string login = "";
	std::string password = "";

	switch (userChoice)
	{
	case 1:
		std::cout << "Enter login: ";
		std::cin >> login;

		std::cout << "Enter password: ";
		std::cin >> password;

		if (User::Login(login, password))
		{
			system("cls");
			while (this->Print())
			{
				system("cls");
			}
		}
		break;
	case 2:
	{
		std::cout << "Enter login: ";
		std::cin >> login;

		std::cout << "Enter password: ";
		std::cin >> password;

		std::string fio = "";
		std::cout << "Enter fio: ";
		std::cin >> fio;

		tm defaultBirthday{};

		if (User::Registration(login, password, fio, defaultBirthday))
		{
			system("cls");
			while (this->Print())
			{
				system("cls");
			}
		}
		break;
	}
	default:
		break;
	}
}
