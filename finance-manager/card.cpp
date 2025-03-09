#include "card.h"

int Card::GetBalance()
{
	return this->_balance;
}

bool Card::Rebalance(int sumMinus)
{
	if (sumMinus > 0)
	{
		this->_balance -= sumMinus;
		return true;
	}

	return false;
}

void Card::Print()
{
	std::cout << "-- - -- - " << this->_number << " -- - " << this->_balance << "Ğ -- - -- - " << std::endl;
}

bool Card::TopUp(int sum)
{
	if (sum > 0)
	{
		this->_balance += sum;
		return true;
	}

	return false;
}

std::string Card::GetUserName()
{
	return this->_userName;
}
