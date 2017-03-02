#pragma once
#include <string>
#include "User.h"
#include "SportsTeam.h"
#include "Artist.h"


class Accounts
{

private: 
	std::string _accountName;
	std::string _accounttype;
	

public:
	Accounts(std::string accountName, std::string accountType);
	~Accounts();

	bool registerUser();
	bool registerArtist();
	bool registerSportsTeam();
};

