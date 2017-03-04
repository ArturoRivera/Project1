#pragma once
#include <string>

class Artist
{

//Private class members.
private:
    std::string _realName;
    std::string _artistName;
	std::string _latestAlbum;
    std::string _done;

//Public class members.
public:
    Artist();
    Artist(std::string realName, std::string artistName, std::string latestAlbum);
	~Artist();

	std::string GetArtistInfo();
};

