#pragma once


#include <string>
#include <time.h>
#include "wallet.h"
#include "fstream"

class User
{
private:
	Wallet _wallet;
	std::string _login;
	std::string _password;
	std::string _fio;
	tm _birthDate{};
	//std::string tm_to_date(std::string format);
	
public:
	static bool Registration(std::string login, std::string password,std::string fio,tm birthdate);
	static bool Login(std::string login, std::string password);
};
