#include "Film.h"
#include <string>
using namespace std;

Film::Film() {};

Film::Film(string titel, string genre, int jahr, int likes) {
	this->Titel = titel;
	this->Genre = genre;
	this->Jahr = jahr;
	this->Likes = likes;
};

string Film::get_titel() {
	return this->Titel;
};

string Film::get_genre() {
	return this->Genre;
};

int Film::get_jahr() {
	return this->Jahr;
};

int Film::get_likes() {
	return this->Likes;
};

void Film::set_titel(string titel) {
	this->Titel = titel;
};

void Film::set_genre(string genre) {
	this->Genre = genre;
};

void Film::set_jahr(int jahr) {
	this->Jahr = jahr;
};

void Film::set_likes(int likes) {
	this->Likes = likes;
};

Film::~Film() {};