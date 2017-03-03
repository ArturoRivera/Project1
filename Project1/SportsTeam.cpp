#include "SportsTeam.h"

using namespace std;


//Default contructor.
SportsTeam::SportsTeam()
{
    _teamName = "Null";
    _teamCity = "Null";
}

//Constructor.
SportsTeam::SportsTeam(string teamName, string teamCity)
{
    _teamName = teamName;
    _teamCity = teamCity;
}

//Destructor
SportsTeam::~SportsTeam()
{
}

//Function that retrieves sports team info.
string SportsTeam::GetSportsTeamInfo()
{
    string info = "Team name: " + _teamName + ", Team City: ";
    info += _teamCity + "\n";
    
    return info;
    
}
