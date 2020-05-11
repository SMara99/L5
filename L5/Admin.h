#pragma once
#include "Film.h"
#include<vector>

using namespace std;

class Repository
{
private:
	vector<Film> liste;

public:
	Repository();
	~Repository();

	vector<Film> getlist();
	vector<Film> remove(Film old_film);//la fel
	vector<Film> add(Film new_film);//void si exceptie
	Film update(Film old_film, Film new_film);
};

