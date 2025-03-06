#pragma once


#include <string>
#include <ctime>
#include <fstream>
#include "wallet.h"
#include "helper.h"

class User
{
private:
	Wallet _wallet;
	std::string _login;
	std::string _password;
	std::string _fio;
	tm _birthDate{};
	static std::list<User> UserData();
	//std::string tm_to_date(std::string format);
	
public:
	static bool Registration(std::string login, std::string password,std::string fio,tm birthdate);

	static bool Login(std::string login, std::string password);

	bool operator==(User second);

	Wallet GetWallet();
};
