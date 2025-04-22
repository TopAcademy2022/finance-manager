#include "../services/report-service.h"

void ReportServices::SaveTopCategories(HistoryPeriod period, std::string username)
{
	User* user = new User("Wal");
	HistoryOperation historyOperation = user->GetHistoryOperation();
	std::list<Categories> top = historyOperation.GetTopCategories(period, username);

	for (Categories category : top)
	{
		// TODO: use try-catch
		std::ofstream file = std::ofstream("./Users.txt", std::ios::app);
		std::string categoryText = helper::Helper::ConvertToString(category);
		file.write(categoryText.c_str(), categoryText.size());
	}
}
