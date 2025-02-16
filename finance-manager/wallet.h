#pragma once


#include "card.h"
#include <list>



class Wallet
{
private:
	std::list<Card> _cardList;
	int _balance;
public:
	void AddCard(Card card);
	void PrintCards();
};
