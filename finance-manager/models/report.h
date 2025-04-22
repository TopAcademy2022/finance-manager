#pragma once


#include <string>
#include "../user.h"

class Report
{
private:
	User* _user;

	std::string _pathToFileTopCategories;
public:
	Report(User* user) {
		this->_user = user;
		this->_pathToFileTopCategories = "./categories.top";
	}
};
