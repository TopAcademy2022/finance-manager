#pragma once


#include <string>
#include <ctime>
#include <fstream>
#include "wallet.h"
#include "helper.h"
#include "history-operation.h"

class User
{
private:
	Wallet* _wallet;
	std::string _login;
	std::string _password;
	std::string _fio;
	tm _birthDate{};

	HistoryOperation _historyOperation;

	static std::list<User> GetUserList();
public:
	User(std::string walletName);

	static bool Registration(std::string login, std::string password,std::string fio,tm birthdate);

	static bool Login(std::string login, std::string password);

	bool operator==(User second);

	Wallet* GetWallet();

	void CreateWallet(std::string walletName);

	HistoryOperation GetHistoryOperation();
};
