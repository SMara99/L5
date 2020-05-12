#pragma once
#include "Film.h"
#include<vector>

using namespace std;

class Repository
{
private:
	vector<Film> liste;
	vector<Film> getlist();

public:
	Repository();
	~Repository();

	void remove(Film film);
	void add(Film film);//void si exceptie
	void update(Film old_film, Film new_film);
};

