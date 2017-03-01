#pragma once
#include<string>

class Artist
{

private:
	std::string _artistName;
	std::string _latestSong;
	std::string _latestAlbum;

public:
	Artist();
	~Artist();

	bool registerArtist();
};

