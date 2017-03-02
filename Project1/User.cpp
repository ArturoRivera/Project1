#include "User.h"
#include <string>

using namespace std;

User::User()
{
	_userName = "Null";
}

User::User(string userName, int age)
{
	_userName = userName;
	_userAge = age;
}


User::~User()
{
}


string User::GetUserInfo()
{
	string info = "User name: " + _userName + ", Age: ";
	info += _userAge + "\n";

	return info;

}
