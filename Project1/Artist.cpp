#include "Artist.h"
#include <iostream>

using namespace std;


//Default Constructor.
Artist::Artist()
{
    _realName = "Null";
    _artistName = "Null";
    _latestAlbum = "Null";
}

//Constructor.
Artist::Artist(string realName, string artistName, string latestAlbum)
{
    _realName = realName;
    _artistName = artistName;
    _latestAlbum = latestAlbum;
}

//Destructor.
Artist::~Artist()
{
}

//Function for retrieving artist info.
string Artist::GetArtistInfo()
{
    string info = "Real name: " + _realName + ", Artist Name: " + _artistName + ", Latest Album: ";
    info += _latestAlbum + "\n";
    
    return info;
    
}
