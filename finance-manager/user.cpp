#include "user.h"

std::list<User> User::GetUserList()
{
	std::list<User> result = std::list<User>();

	try
	{
		std::ifstream file = std::ifstream("./Users.txt");

		if (file.is_open())
		{
			std::string line;
			while (getline(file, line))
			{
				std::list<std::string> params = helper::Helper::SplitString(line, " ");
				auto paramsIter = params.begin();
				
				User user = User("Example");
				user._login = *(paramsIter++);
				user._password = *(paramsIter++);
				user._fio = *(paramsIter++);

				std::string birthDate = *paramsIter;
				// TODO: Convert birthDate here
				user._birthDate.tm_wday = 0;
				user._birthDate.tm_mon = 0;
				user._birthDate.tm_year = 0;
				
				result.push_back(user);
			}

			file.close();
		}
	}
	catch(std::exception ex)
	{
		std::cout << "Error: " << ex.what() << std::endl;
	}
	
	return result;
}

User::User(std::string walletName)
{
	this->_wallet = new Wallet(walletName);
}

bool User::Registration(std::string login, std::string password, std::string fio, tm birthdate)
{
	std::string defaultFormat = "dd-mm-yyyy";
	std::ofstream file;
	file.open("./Users.txt", std::ios::app);
	if (file.is_open()) {
		try {
			std::string text = login + " " + password + " " + fio + " " + std::to_string(birthdate.tm_wday) + "." + std::to_string(birthdate.tm_mon) + "." + std::to_string(birthdate.tm_year) + "\n";
			file.write(text.c_str(), text.size());
			file.close();
			return true;
		}
		catch (std::exception ex)
		{
			std::cout << "Error: " << ex.what() << std::endl;
		}
	}

	return false;
}

bool User::Login(std::string login, std::string password)
{
	User user = User("Example");
	user._login = login;
	user._password = password;
	bool isCorrect = false;
	std::list<User> users = GetUserList();

	for (User logins : users)
	{
		if (logins._login == user._login && logins._password == user._password)
		{
			isCorrect = true;
			break;
		}
	}

	return isCorrect;
}

bool User::operator==(User second)
{
	if (this->_login == second._login &&
		this->_password == second._password &&
		this->_fio == second._fio &&
		helper::Helper::CompareData(this->_birthDate, second._birthDate))
	{
		return true;
	}

	return false;
}

Wallet* User::GetWallet()
{
	return this->_wallet;
}

void User::CreateWallet(std::string walletName)
{
	this->_wallet = new Wallet(walletName);
}

HistoryOperation User::GetHistoryOperation()
{
	return this->_historyOperation;
}
