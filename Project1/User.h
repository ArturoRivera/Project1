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

	bool registerUser(User newUser, int position);
	std::string GetUserInfo();
};

