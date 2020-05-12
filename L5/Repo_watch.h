#pragma once
#include<vector>
#include "Film.h"
#include "Repository.h"

using namespace std;

class Resository_Watchlist
{
private:
	Repository liste;
	struct Item {
		Film film;
		bool seen;//int id
	};
	vector<Item> watchlist;

public:

	Resository_Watchlist();
	~Resository_Watchlist();
	
	void add(Film film);
	void remove(Film film);
	void opinion(Film film);
 
};

