#include "wallet.h"

void Wallet::AddCard(Card card)
{
	_cardList.push_back(card);
}

std::list<Card> Wallet::GetCardList()
{
    return this->_cardList;
}

Wallet::Wallet()
{
    this->_balance = 0;
    this->_cardList = std::list<Card>();
}

void Wallet::PrintCards() {
    for (Card r : _cardList) {
        std::cout << r.GetUserName() << r.GetBalance() << std::endl; 
    }
}
