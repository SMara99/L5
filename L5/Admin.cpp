#include "Admin.h"

Repository::Repository() {
};

vector<Film> Repository::getlist() {
	return liste;
};

vector<Film> Repository::add(Film new_film) {
	bool exists = true;
	for (int i = 0; i < liste.size(); i++) {
		if (liste[i].get_titel() == new_film.get_titel())
			exists = false;
	}
	if (exists)
		liste.push_back(new_film);

	return liste;
}

Film Repository::update(Film old_film, Film new_film) {
	int p = -1;
	for (int i = 0; i < liste.size(); i++) {
		if (liste[i].get_titel() == old_film.get_titel()) {
			p = i;
		}
	}
	if (p < 0) {
		return Film("", "", 0, 0,"");
	}
	else {
		liste[p] = new_film;
		return liste[p];
	}

};

vector<Film> Repository::remove(Film film) {
	int p = -1;

	for (int i = 0; i < liste.size(); i++) {
		if (liste[i].get_titel() == film.get_titel()) {
			p = i;
		}
	}

	if (p > -1)
		liste.erase(liste.begin() + p);

	return liste;
}

Repository::~Repository() {};