#pragma once


#include <iostream>
#include <time.h>
#include "user.h"
#include "card-operation.h"

class HistoryOperation {
private:
	User _user;
	CardOperation _operation;
	tm data{};
};