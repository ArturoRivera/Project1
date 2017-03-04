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

    Accounts users = Accounts("Users. ", "Basic Account.");
    Accounts artists = Accounts("Artists. ", "Artist Account.");
    Accounts sportsTeam = Accounts("Sports Teams. ", "Team Account.");
    
    
    users.registerUser(art, 0);
    users.registerUser(sam, 1);
    users.registerUser(brianna, 2);
    users.registerUser(jake, 3);
    
    
    artists.registerArtist(drake, 0);
    artists.registerArtist(theWeeknd, 1);
    artists.registerArtist(chance, 2);
    
    
    sportsTeam.registerSportsTeam(jets, 0);
    sportsTeam.registerSportsTeam(lakers, 1);
    sportsTeam.registerSportsTeam(barca, 2);
    
    
    cout << users.GetUserAccountData() << endl;
    
    cout << artists.GetArtistAccountData() << endl;
    
    cout << sportsTeam.GetSportsTeamAccountData() << endl;
    
    
	return 0;
}
