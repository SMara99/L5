#pragma once
#include "Film.h"

class Admin
{
private:
	Film* liste;
	int len, cap;

public:
	Admin();
	~Admin();

	Film* getlist();
	Film* remove(Film old_film);
	Film add(Film new_film);
	Film update(string titel, Film new_film);
};

