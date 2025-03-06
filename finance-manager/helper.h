#pragma once


#include <ctime>
#include <string>
#include "categories.h"

namespace helper
{
	class Helper
	{
	public:
		static bool CompareData(tm first, tm second);

		static std::string ConvertToString(Categories category);
	};
}
