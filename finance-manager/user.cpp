#include "user.h"

//std::string User::tm_to_date(std::string format)
//{
//	std::string thing;
//	if(format == "dd-mm-yyyy")
//	{
//		thing = std::to_string(this->_birthDate.tm_wday)  + "."+std::to_string(this->_birthDate.tm_mon)+"." + std::to_string(this->_birthDate.tm_year);
//	}
//	return thing;
//}

std::list<User> User::UserData() {
	std::ifstream file;
	file.open("./Users.txt", std::ios::app);
	std::list<User> users;
	if (file.is_open()) {
		std::string line;
		while (getline(file, line)) {
			User user;
			user._login = line.substr(0, line.find(' '));
			line.erase(0, line.find(' ') + 1);
			user._password = line.substr(0, line.find(' '));
			line.erase(0, line.find(' ') + 1); 
			user._fio = line.substr(0, line.find(' '));
			line.erase(0, line.find(' ') + 1);
			user._birthDate.tm_wday = stoi((line.substr(0, line.find(' '))).substr(0, 2));
			user._birthDate.tm_mon = stoi((line.substr(0, line.find(' '))).substr(3, 5));
			user._birthDate.tm_year = stoi((line.substr(0, line.find(' '))).substr(6, 10));
			users.push_back(user);
		}
		file.close();
	}
	return users;
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
		catch (std::exception ex) {
			return false;
		}
	}
	return false;

}

bool User::Login(std::string login, std::string password)
{
	User user;
	user._login = login;
	user._password = password;
	bool isCorrect = false;
	std::list<User> users = UserData();

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
		helper_tm::Helper::CompareData(this->_birthDate, second._birthDate))
	{
		return true;
	}

	return false;
}

Wallet User::GetWallet()
{
	return this->_wallet;
}

void User::CreateWallet()
{
	this->_wallet = Wallet();
}
