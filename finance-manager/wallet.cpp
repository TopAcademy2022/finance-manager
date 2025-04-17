#include "wallet.h"

void Wallet::AddCard(Card* card)
{
	this->_cardList.push_back(card);
}

bool Wallet::TopUpCard(unsigned int cardNumber, unsigned int sum)
{
    unsigned int i = 1;
    for (Card* card : this->GetCardList())
    {
        if (cardNumber == i)
        {
            card->TopUp((int)sum);
            return true;
        }

        i++;
    }

    return false;
}

std::list<Card*> Wallet::GetCardList()
{
    return this->_cardList;
}

std::string Wallet::GetName()
{
    return this->_name;
}

Wallet::Wallet(std::string name)
{
    this->_balance = 0;
    this->_cardList = std::list<Card*>();
    this->_name = name;
}

void Wallet::Print()
{
    if (this->_name.size() > 0)
    {
        std::cout << "\t-- - " << this->_name << " -- - " << std::endl;

        for (Card* card : this->GetCardList())
        {
            card->Print();
        }
    }
    else
    {
        std::cout << "Wallets not found!" << std::endl;
    }
}
