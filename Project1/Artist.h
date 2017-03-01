#pragma once
#include <string>

class Artist
{

private:
	std::string _artistName;
	std::string _latestSong;
	std::string _latestAlbum;

public:
	Artist(std::string name, std::string latestSong, std::string latestAlbum);
	~Artist();

	bool registerArtist();
	std::string GetArtistInfo();
};

