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
    
    if (position <= 3 && registeredUsers[position].GetUserInfo() != "Null"){
        registeredUsers[position] = newUser;
        return true;
    }
    return false;
}

//Function to register new artist to accounts.
bool Accounts::registerArtist(Artist newArtist, int position){
    
    if (position <= 2 && registeredArtist[position].GetArtistInfo() != "Null"){
        registeredArtist[position] = newArtist;
        return true;
    }
    return false;
}

//Function to register new sports team to accounts.
bool Accounts::registerSportsTeam(SportsTeam newSportsTeam, int position){
    
    if (position <= 2 && registeredSportsTeam[position].GetSportsTeamInfo() != "Null"){
        registeredSportsTeam[position] = newSportsTeam;
        return true;
    }
    return false;
}

string Accounts::GetUserAccountData(){
    
    string info = "Account Name: " + _accountName + "Account Type: " + _accountType + "\n";
    info += "--------------------------------------------------";
    info += "\n";
    for (auto user : registeredUsers){
        
        if (user.GetUserInfo() != "Null"){
            info += user.GetUserInfo() + "\n";
        }
    }
    return info;
}


string Accounts::GetArtistAccountData(){
    
    string info = "Account Name: " + _accountName + "Account Type: " + _accountType + "\n";
    info += "-----------------------------------------------------";
    info += "\n";
    for (auto artist : registeredArtist){
        
        if (artist.GetArtistInfo() != "Null"){
            info += artist.GetArtistInfo() + "\n";
        }
    }
    return info;
}

string Accounts::GetSportsTeamAccountData(){
    
    string info = "Account Name: " + _accountName + "Account Type: " + _accountType + "\n";
    info += "---------------------------------------------------------";
    info += "\n";
    for (auto sportsTeam : registeredSportsTeam){
        
        if (sportsTeam.GetSportsTeamInfo() != "Null"){
            info += sportsTeam.GetSportsTeamInfo() + "\n";
        }
    }
    return info;
}


