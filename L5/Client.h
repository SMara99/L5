#pragma once
#include<vector>
#include "Film.h"
#include "Admin.h"

using namespace std;

class Client
{
	friend class Admin;
private:
	Admin liste;
	struct Item {
		Film film;
		bool seen;
	};
	vector<Item> watchlist;

public:

	Client();
	~Client();
	
	void ansehen(Film film, string genre);
	Film add(Film film);
	void remove(Film film);
	Admin opinion(Film film, int i);
 
};

