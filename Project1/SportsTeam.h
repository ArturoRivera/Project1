#pragma once
#include <string>

class SportsTeam
{

//Private class members.
private:
	std::string _teamName;
	std::string _teamCity;

//Public class members.
public:
    SportsTeam();
    SportsTeam(std::string teamName, std::string teamCity);
	~SportsTeam();
    
    std::string GetSportsTeamInfo();
};

