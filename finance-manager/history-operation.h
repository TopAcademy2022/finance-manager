#pragma once


#include <iostream>
#include "user.h"
#include "card-operation.h"

class HistoryOperation {
private:
	User _user;
	CardOperation _operation;
	tm data{};
};