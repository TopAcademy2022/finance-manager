#pragma once

/*!
 * @file Wallet.h
 * @brief Объявление класса Wallet, представляющего кошелек с картами и балансом.
 *
 * Этот файл содержит объявление класса `Wallet`, который используется для хранения
 * списка карт (`Card`) и текущего баланса пользователя.  Класс предоставляет методы
 * для добавления карт в кошелек.
 */

#include "card.h"
#include <list>

 /*!
  * @class Wallet
  * @brief Представляет кошелек, содержащий список карт и баланс.
  *
  * Класс `Wallet` используется для моделирования кошелька пользователя.
  * Он содержит список карт, представленных классом `Card`, и текущий
  * баланс.  В настоящее время реализован только метод добавления карт.
  */
class Wallet
{
private:
    /*!
     * @brief Список карт в кошельке.
     */
    std::list<Card> _cardList;

    /*!
     * @brief Текущий баланс в кошельке.
     */
    int _balance;

public:
	void PrintCards();
  
    /*!
     * @brief Добавляет карту в кошелек.
     * @param card Карта, которую нужно добавить.
     */
    void AddCard(Card card);
};

