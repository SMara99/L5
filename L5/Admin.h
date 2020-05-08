#pragma once
#include "Film.h"
#include<vector>

using namespace std;

class Admin
{
private:
	vector<Film> liste;

public:
	Admin();
	~Admin();

	vector<Film> getlist();
	vector<Film> remove(Film old_film);
	vector<Film> add(Film new_film);
	Film update(Film old_film, Film new_film);
};

