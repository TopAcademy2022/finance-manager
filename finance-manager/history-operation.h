#pragma once


#include <list>
#include "history.h"
#include "categories.h"
#include "history-period.h"
#include <string>


class HistoryOperation {
private:
	std::list<History> _history;

public:
	std::list<Categories> GetTopCategories(HistoryPeriod period, std::string username);

	std::list<CardOperation> GetTopOperations(HistoryPeriod period, std::string username);
};