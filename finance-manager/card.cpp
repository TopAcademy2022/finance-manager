#include "card.h"

bool Card::Rebalance(int sumMinus)
{
	if (sumMinus > 0) {
		this->_balance -= sumMinus;
		return true;
	}
	return false;
}

bool Card::TopUp(int sum)
{
	if (sum > 0) {
		this->_balance += sum;
		return true;
	}
	return false;
}
