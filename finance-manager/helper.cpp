#include "helper.h"

bool helper::Helper::CompareData(tm first, tm second)
{
	if (first.tm_year == second.tm_year &&
		first.tm_mon == second.tm_mon &&
		first.tm_wday == second.tm_wday)
	{
		return true;
	}

	return false;
}

std::string helper::Helper::ConvertToString(Categories category)
{
	return std::string();
}
