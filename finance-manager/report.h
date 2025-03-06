#pragma once


#include <string>
#include "user.h"

class Report
{
private:
	User _user;

	std::string _pathToFileTopCategories;

public:
	Report();

	void SaveTopCategories(HistoryPeriod period, std::string username);
};
