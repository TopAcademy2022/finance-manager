#pragma once


#include <iostream>
#include <string>

//@brief class representing a bank card
class Card
{
private:
	int _balance; ///< current card balance	
	int _pin; ///< card PIN
	tm _data{}; ///< up to
	int _cvv; ///< card CVV code
	std::string _number; ///< card number 
	std::string _userName; ///< cardholder's name

public:
	/*!
	* @brief The method allows you to replenish the card balance by the specified amount.
	* @return True If the refill was successful. False If the replenishment amount is incorrect (e.g. negative).
	*/
	bool TopUp(int sum);
  
	std::string GetUserName();
  
	int GetBalance();
  
	bool Rebalance(int sumMinus);

	void Print();
};
