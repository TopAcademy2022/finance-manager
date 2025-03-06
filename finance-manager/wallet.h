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
    std::list<Card> _cardList;

    /*!
     * @brief Current balance.
     */
    int _balance;

public:
	void PrintCards();
  
    /*!
     * @brief Add card to wallet.
     * @param[in] card - Card, was added to wallet.
     */
    void AddCard(Card card);

    std::list<Card> GetCardList();
};
