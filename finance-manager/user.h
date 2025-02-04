#pragma once
#include <string>
#include "wallet.h"
using namespace std;

class User
{
public:

private:
	Wallet _UserWallet;
	string _login;
	string _password;
	string _FIO;
	tm _UserDate{};  
};
