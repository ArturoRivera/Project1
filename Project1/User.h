#pragma once
#include <string>


class User
{

//Private class members.
private:
	std::string _userName;
    std::string _userAge;
	
//Public class members.
public:
    User();
    User(std::string userName, std::string userAge);
	~User();

	std::string GetUserInfo();
};

