#pragma once


#include <time.h>
#include "user.h"
#include "card-operation.h"

class History
{
	User _user;
	CardOperation _operation;
	tm data{};
};
