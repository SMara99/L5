#include "Repo_watch.h"
#include <iostream>
#include<stdio.h>
using namespace std;

Resository_Watchlist::Resository_Watchlist() {};

void Resository_Watchlist::add(Film film) {
	watchlist.push_back({ film, false });
}

void Resository_Watchlist::remove(Film film) {

	int p = -1;

	for (int i = 0; i < watchlist.size(); i++) {
		if (watchlist[i].film.get_titel() == film.get_titel())
			p = i;
	}

	if (-1 < p) {
		watchlist.erase(watchlist.begin() + p);
	}

}

void Resository_Watchlist::opinion(Film film) {
	Film x(film.get_titel(), film.get_genre(), film.get_jahr(), film.get_likes() + 1, film.get_trailer());
	liste.update(film, x);
}


Resository_Watchlist::~Resository_Watchlist() {};