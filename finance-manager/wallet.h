#pragma once

/*!
 * @file Wallet.h
 * @brief Wallet with cards
 */

#include "card.h"
#include <list>

 /*!
  * @class Wallet
  * @brief Wallet with cards and balance.
  */
class Wallet
{
private:
    /*!
     * @brief Card list.
     */
    std::list<Card*> _cardList;

    /*!
     * @brief Current balance.
     */
    int _balance;

    std::string _name;
public:
    Wallet(std::string name);

    void Print();
  
    /*!
     * @brief Add card to wallet.
     * @param[in] card - Card, was added to wallet.
     */
    void AddCard(Card* card);

    bool TopUpCard(unsigned int cardNumber, unsigned int sum);

    std::list<Card*> GetCardList();

    std::string GetName();
};
