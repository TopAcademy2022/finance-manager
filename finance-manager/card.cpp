#include "card.h"

bool Card::TopUp(int sum)
{
	if (sum > 0) {
		this->_balance += sum;
		return true;
	}
	return false;
}