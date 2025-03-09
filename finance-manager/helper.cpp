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

std::list<std::string> helper::Helper::SplitString(std::string baseString, std::string delim)
{
	std::list<std::string> result = std::list<std::string>();
	size_t startIndex = 0;

	while(startIndex != std::string::npos)
	{
		startIndex = baseString.find(delim);

		if (startIndex >= 0 && startIndex != std::string::npos)
		{
			std::string subRes = baseString.substr(0, startIndex);
			baseString = baseString.erase(0, subRes.size() + 1);
			result.push_back(subRes);
		}
		else if (baseString.size() > 0)
		{
			result.push_back(baseString);
			break;
		}
	}

	return result;
}
