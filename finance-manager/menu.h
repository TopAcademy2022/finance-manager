#pragma once

#include <iostream>
#include <type_traits>
#include "user.h"

class Menu
{
private:
    User _user;

    void Print();
public:
    void PrintLogin();

};

/**
 * @class Menu
 * @brief Represents the user's menu, which stores a list of cards and a balance.
 *
 * The `Menu' class models a menu that stores bank cards (`Card`) and
* the current balance of funds.  It provides the ability to add cards to your menu..
 *
 * @note In the current implementation, there is no logic for managing the balance (replenishment, withdrawal).
 *   This may be expanded in future versions.
 */
class Menu
{
private:
    /**
     * @brief The list of cards in the menu.
     *
     * Each card is represented by an object of the `Card` class.
     */
    std::list<Card> _cardList;
    /**
     * @brief Current balance of funds in the menu (in cents).
     *
     * @note The balance is stored in cents to avoid accuracy issues when working with floating point numbers.
     */
    int _balance;

public:
    /**
     * @brief Adds a bank card to the menu.
     *
     * @param card The `Card` object representing the card to be added.
     */
    void AddCard(Card card);
    /**
     * @brief Returns the current menu balance.
     *
     * @return int Current balance in cents.
     */
    int GetBalance() const;
    /**
     * @brief Sets the menu balance.
     *
     * @param balance New balance in cents.
     */
    void SetBalance(int balance);
    /**
     * @brief Gets a list of cards in the menu.
     *
     * @return std::list<Card>& A link to the list of maps.  Attention: modification of the list
     * may directly affect the menu.
     */
    std::list<Card>& GetCards();
    /**
     * @brief Constructor of the menu class.  Initializes the balance with the value 0.
     */
    Menu();
    /**
     * @brief The destructor of the menu class.  Does not perform any actions.
     */
    ~Menu();

};