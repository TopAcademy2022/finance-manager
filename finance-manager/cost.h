#pragma once


#include "card-operation.h"
#include "categories.h"

class Cost : public CardOperation
{
private:
	Categories _categories;
};
