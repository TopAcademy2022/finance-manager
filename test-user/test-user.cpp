#define BOOST_TEST_MODULE testuser


#include <boost/test/unit_test.hpp>
#include "../finance-manager/user.h"

/*!
 * @brief calls test functions for class Far: CreateDirectory, CreateFile, PrintContentFromDirectory
 */
BOOST_AUTO_TEST_CASE(testuser)
{
    User user = User();
    tm time;
    time.tm_year = 125;
    time.tm_mon = 4;
    time.tm_mday = 3;
    BOOST_CHECK_EQUAL(user.Registration("Abc","123","ABC",time),true);

}

BOOST_AUTO_TEST_CASE(test_Login) {
    User uSer = User("Ex");
    BOOST_CHECK_EQUAL(uSer.Login("ABC", "1234"), true);
}

BOOST_AUTO_TEST_CASE(test_Equality) {
    User user1;
    User user2;
    BOOST_CHECK_EQUAL(user1==user2,true);
}

BOOST_AUTO_TEST_CASE(test_GetWallet) {
    Wallet a = "ABC"
    User user_wall = User("ABC");
    BOOST_CHECK_EQUAL(user_wall.GetWallet(),a);
}

BOOST_AUTO_TEST_CASE(test_CreateWallet) {
    User user_Cwall;
    user_Cwall.CreateWallet("ab");
    BOOST_CHECK_EQUAL(user_Cwall.GetWallet()!=nullptr,true);
}

BOOST_AUTO_TEST_CASE(test_GetHistory) {
    User userr = User();
    BOOST_CHECK_EQUAL(userr.GetHistoryOperation()!=nullptr,true);
}