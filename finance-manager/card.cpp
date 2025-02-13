#include "card.h"
bool Card::Rebalance(int sumMinus)
{
	if (sumMinus > 0) {
		this->_balance -= sumMinus;
		return true;
	}
	return false; 
}