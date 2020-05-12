#include <iostream>
#include "Repository.h"

Repository::Repository() {
};

vector<Film> Repository::getlist() {
	return liste;
};

void Repository::add(Film new_film) {
	bool to_add = true;

	for (int i = 0; i < liste.size(); i++) {
		if (liste[i].get_titel() == new_film.get_titel())
			to_add = false;
	}
	if (to_add)
		liste.push_back(new_film);
}

void Repository::update(Film old_film, Film new_film) {
	int p = -1;

	for (int i = 0; i < liste.size(); i++) {
		if (liste[i].get_titel() == old_film.get_titel()) {
			p = i;
		}
	}

	if (p > -1) liste[p] = new_film;
};

void Repository::remove(Film film) {
	int p = -1;

	for (int i = 0; i < liste.size(); i++) {
		if (liste[i].get_titel() == film.get_titel()) {
			p = i;
		}
	}
	if (p > -1)
		liste.erase(liste.begin() + p);
}

Repository::~Repository() {};