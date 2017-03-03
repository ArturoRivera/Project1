#include "User.h"
#include <string>

using namespace std;


//Default constructor.
User::User()
{
	_userName = "Null";
    _userAge = "Null";
}

//Constructor.
User::User(string userName, string userAge)
{
	_userName = userName;
	_userAge = userAge;
}

//Destructor.
User::~User()
{
}

//Function that retrieves user info.
string User::GetUserInfo()
{
	string info = "User name: " + _userName + ", Age: ";
	info += _userAge + "\n";

	return info;

}
