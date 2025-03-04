#include "wallet.h"

void Wallet::AddCard(Card card)
{
	_cardList.push_back(card);
}

std::list<Card> Wallet::GetCardList()
{
    return this->_cardList;
}

void Wallet::PrintCards() {
    for (Card r : _cardList) {
        std::cout << r.GetUserName() << r.GetBalance() << std::endl; 
    }
}
