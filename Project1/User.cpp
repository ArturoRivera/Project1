#include "User.h"
#include <string>

using namespace std;

User::User()
{
	_userName = "Null";
}

User::User(string name, int age)
{
	_userName = name;
	_userAge = age;
}


bool User::registerUser(User newUser, int position)
{
	if (position <= 3 )

}

User::~User()
{
}

string User::GetUserInfo()
{
	string info = "User name: " + _userName + ", Age: ";
	info += _userAge + "\n";
}