#pragma once
#include<vector>
#include "Film.h"
#include "Admin.h"

using namespace std;

class Client//watchlist repository
{
private:
	Repository liste;
	struct Item {
		Film film;
		bool seen;//int id
	};
	vector<Item> watchlist;

public:

	Client();
	~Client();
	
	void ansehen(Film film, string genre);
	Film add(Film film);
	void remove(Film film);
	Repository opinion(Film film, int i);
 
};

