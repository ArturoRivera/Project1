#include <iostream>
#include "User.h"
#include "Artist.h"
#include "Accounts.h"
#include "SportsTeam.h"
using namespace std;

int main()

{
	
	User art = User("Arturo Rivera", "22");
    User sam = User("Samantha Rivera", "22");
	User brianna = User("Brianna Ramos", "21");
	User jake = User("Jake Beas", "22");
    
    Artist drake = Artist("Aubrey Graham", "Drake", "Views");
    Artist theWeeknd = Artist("Abel Tesfaye", "The Weeknd", "Starboy");
    Artist chance = Artist("Chancellor Bennett", "Chance the Rapper", "Coloring Book");
    
    SportsTeam jets = SportsTeam("NY Jets", "New York City");
    SportsTeam lakers = SportsTeam("LA Lakers", "Los Angeles");
    SportsTeam barca = SportsTeam("FC Barcelona", "Barcelona");

	
    Accounts userProfile = Accounts("Users", "Basic Profile");
    Accounts artistProfile = Accounts("Artists", "Artist Profile");
    Accounts teamProfile = Accounts("Sports Teams", "Team Profile");
    
    
    
    cout << art.GetUserInfo() << endl;
    cout << sam.GetUserInfo() << endl;
	cout << brianna.GetUserInfo() << endl;
	cout << jake.GetUserInfo() << endl;
    
    cout << drake.GetArtistInfo() << endl;
    cout << theWeeknd.GetArtistInfo() << endl;
    cout << chance.GetArtistInfo() << endl;
    
    cout << jets.GetSportsTeamInfo() << endl;
    cout << lakers.GetSportsTeamInfo() << endl;
    cout << barca.GetSportsTeamInfo() << endl;

	return 0;
}
