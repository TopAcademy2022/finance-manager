#include "card.h"
bool Card::Rebalance(int sumMinus)
{
	if (sumMinus < this->_balance) {
		this->_balance -= sumMinus;
		return true;
	}
	return false; 
}