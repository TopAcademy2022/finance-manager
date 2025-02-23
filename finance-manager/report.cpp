#include "report.h"
#pragma once

#include "card.h"
#include <list>

/**
 * @class Wallet
 * @brief Represents the user's wallet, which stores a list of cards and a balance.
 *
 * The `Wallet' class models a wallet that stores bank cards (`Card`) and
* the current balance of funds.  It provides the ability to add cards to your wallet..
 *
 * @note In the current implementation, there is no logic for managing the balance (replenishment, withdrawal).
 *   This may be expanded in future versions.
 */
class Wallet
{
private:
    /**
     * @brief The list of cards in the wallet.
     *
     * Each card is represented by an object of the `Card` class.
     */
    std::list<Card> _cardList;

    /**
     * @brief Current balance of funds in the wallet (in cents).
     *
     * @note The balance is stored in cents to avoid accuracy issues when working with floating point numbers.
     */
    int _balance;

public:
    /**
     * @brief Adds a bank card to the wallet.
     *
     * @param card The `Card` object representing the card to be added.
     */
    void AddCard(Card card);

    /**
     * @brief Returns the current wallet balance.
     *
     * @return int Current balance in cents.
     */
    int GetBalance() const;

    /**
     * @brief Sets the wallet balance.
     *
     * @param balance New balance in cents.
     */
    void SetBalance(int balance);

    /**
     * @brief Gets a list of cards in the wallet.
     *
     * @return std::list<Card>& A link to the list of maps.  Attention: modification of the list
     * may directly affect the wallet.
     */
    std::list<Card>& GetCards();

    /**
     * @brief Constructor of the Wallet class.  Initializes the balance with the value 0.
     */
    Wallet();

    /**
     * @brief The destructor of the Wallet class.  Does not perform any actions.
     */
    ~Wallet();

};