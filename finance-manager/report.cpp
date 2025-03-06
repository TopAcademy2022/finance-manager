#include "report.h"

Report::Report()
{
	this->_pathToFileTopCategories = "./categories.top";
}

void Report::SaveTopCategories(HistoryPeriod period, std::string username)
{
	HistoryOperation historyOperation = this->_user.GetHistoryOperation();
	std::list<Categories> top = historyOperation.GetTopCategories(period, username);

	for (Categories category : top)
	{
		// TODO: use try-catch
		std::ofstream file = std::ofstream("./Users.txt", std::ios::app);
		std::string categoryText = helper::Helper::ConvertToString(category);
		file.write(categoryText.c_str(), categoryText.size());
	}
}
