#include "user.h"

//std::string User::tm_to_date(std::string format)
//{
//	std::string thing;
//	if(format == "dd-mm-yyyy")
//	{
//		thing = std::to_string(this->_birthDate.tm_wday)  + "."+std::to_string(this->_birthDate.tm_mon)+"." + std::to_string(this->_birthDate.tm_year);
//	}
//	return thing;
//}                          

bool User::Registration(std::string login, std::string password, std::string fio, tm birthdate)
{
	std::string defaultFormat = "dd-mm-yyyy";
	std::ofstream file;
	file.open("./Users.txt", std::ios::app);
	if (file.is_open()) {
		try {
			std::string text = login + " " + password + " " + fio + " " + std::to_string(birthdate.tm_wday) + "." + std::to_string(birthdate.tm_mon) + "." + std::to_string(birthdate.tm_year) + "\n";
			file.write(text.c_str(), text.size());
			file.close();
			return true;
		}
		catch (std::exception ex) {
			return false;
		} 
	}
	return false;

}

bool User::Login(std::string login, std::string password)
{
	return false;
}
