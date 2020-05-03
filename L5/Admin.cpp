#include "Admin.h"

Admin::Admin() {
	cap = 8;
	len = 0; 
	liste = new Film[cap];
};

Film* Admin::getlist() {
	return liste;
};

Film Admin::add(Film new_film) {
	int aux;
	if (len == cap) {
		cap *= 2;
		Film* aux_pointer = new Film[cap];
		for (int i = 0; i < len; i++) {
			aux_pointer[i] = liste[i];
		}
		delete liste;
		liste = aux_pointer;
	}
	int p = -1;
	for (int i = 0; i < len; i++) {
		if (liste[i].get_titel() == new_film.get_titel())
			p = i;
	};
	if (p < 0) {
		liste[len] = new_film;
		len++;
		return liste[len - 1];
	}
	else return Film("", "", 0, 0, "");
}

Film Admin::update(string titel, Film new_film) {
	int gef = -1;
	for (int i = 0; i < len; i++) {
		if (liste[i].get_titel() == new_film.get_titel()) {
			gef = i;
			liste[i] = new_film;
		}
	}
	if (gef < 0) {
		return Film("", "", 0, 0,"");
	}
	else return liste[gef];

};

Film* Admin::remove(Film film) {
	for (int i = 0; i < len; i++) {
		if (liste[i].get_titel() == film.get_titel()) {
			for (int j = 0; j < len - 1; j++) {
				liste[j] = liste[j + 1];
			}
		}
	}
	len--;
	return liste;
}

Admin::~Admin() {};