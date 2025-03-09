#pragma once


#include <ctime>
#include <string>
#include <list>
#include "categories.h"

namespace helper
{
	class Helper
	{
	public:
		static bool CompareData(tm first, tm second);

		static std::string ConvertToString(Categories category);

		static std::list<std::string> SplitString(std::string baseString, std::string delim);
	};
}
