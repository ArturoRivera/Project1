#include "Accounts.h"
#include <string>

using namespace std;


//Accounts Constructor.
Accounts::Accounts(string accountName, string accountType)
{
	_accountName = accountName;
	_accountType = accountType;
}

//Accounts Destructor.
Accounts::~Accounts()
{
}


//Function to register new user to accounts.
bool Accounts::registerUser(User newUser, int position){
    
    if (position <= 3 && registeredUsers[position].GetUserInfo() == "Null"){
        registeredUsers[position] = newUser;
        return true;
    }
    return false;
}

//Function to register new artist to accounts.
bool Accounts::registerArtist(Artist newArtist, int position){
    
    if (position <= 2 && registeredArtist[position].GetArtistInfo() == "Null"){
        registeredArtist[position] = newArtist;
        return true;
    }
    return false;
}

//Function to register new sports team to accounts.
bool Accounts::registerSportsTeam(SportsTeam newSportsTeam, int position){
    
    if (position <= 2 && registeredSportsTeam[position].GetSportsTeamInfo() == "Null"){
        registeredSportsTeam[position] = newSportsTeam;
        return true;
    }
    return false;
}





