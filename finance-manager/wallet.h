#pragma once



#include <list>
#include "card.h"

class Wallet
{
private:
	std::list<Card> _cardList;
	int _balance;
};
