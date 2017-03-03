#pragma once
#include <string>
#include "User.h"
#include "SportsTeam.h"
#include "Artist.h"


class Accounts
{

//Private class members.
private: 
	std::string _accountName;
	std::string _accountType;
    User registeredUsers[4];
    Artist registeredArtist[3];
    SportsTeam registeredSportsTeam[3];
	
//Public class members.
public:
	Accounts(std::string accountName, std::string accountType);
	~Accounts();

	bool registerUser(User newUser, int position);
	bool registerArtist(Artist newArtist, int position);
	bool registerSportsTeam(SportsTeam newSportsTeam, int position);
};

