#include "wallet.h"
void Wallet::AddCard(Card card)
{
	_cardList.push_back(card);
}
void Wallet::PrintCards() {
    for (Card r : _cardList) {
        std::cout << r.GetUserName() << r.GetBalance() << std::endl; 
    }
}

