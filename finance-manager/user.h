#pragma once


#include <string>
#include <time.h>
#include "wallet.h"

class User
{
private:
	Wallet _wallet;
	std::string _login;
	std::string _password;
	std::string _fio;
	tm _birthDate{};

public:
	static bool Login(std::string login, std::string password);
};
