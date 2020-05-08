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
	
	void seen(string genre);
 
};

