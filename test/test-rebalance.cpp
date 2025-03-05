#define BOOST_TEST_MODULE testRebalance


#include <boost/test/unit_test.hpp>
#include "..\finance-manager\card.cpp"

BOOST_AUTO_TEST_CASE(testRebalance)
{
	Card cardForBalance;
	int balance = 267;
	BOOST_CHECK_EQUAL(cardForBalance.Rebalance(balance), true);
}