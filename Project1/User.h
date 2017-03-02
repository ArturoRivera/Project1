#pragma once
#include <string>


class User
{

private:

	std::string _userName;
	int _userAge;
	

public:
	User(std::string userName, int age);
	~User();

	std::string GetUserInfo();
};

