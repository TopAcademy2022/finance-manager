#include "card.h"

bool Card::TopUp(int sum)
{
	if (sum > 0) {
		this->_balance += sum;
		return 1;
		std::cout << "The balance has been successfully replenished." << std::endl;
	}
	else {
		std::cerr << "It is not possible to top up the balance for this amount. :: cerr\n";
		return 0;
	}
}