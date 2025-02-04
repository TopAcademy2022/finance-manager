#pragma once  
#include <string>
#include "wallet.h"


class User
{
private:
	Wallet _Wallet;
	std::string _login;
	std::string _password;
	std::string _FIO;
	std::tm _BirthDate{};
};
