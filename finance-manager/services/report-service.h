#pragma once
#include "../user.h"
#include "../models/report.h"

class ReportServices {
public:
	void SaveTopCategories(HistoryPeriod period, std::string username);
};