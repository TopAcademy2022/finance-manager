#define BOOST_TEST_MODULE testRegistration


#include <boost\test\included\unit_test.hpp>
#include "..\finance-manager\user.cpp"
#include "..\finance-manager\wallet.h"
#include "..\finance-manager\wallet.cpp"
#include "..\finance-manager\card.h"
#include "..\finance-manager\card.cpp"

BOOST_AUTO_TEST_CASE(testRegistration)
{
	std::string login = , std::string password, std::string fio, tm birthdate
	BOOST_CHECK_EQUAL(Registration(), 1);
}