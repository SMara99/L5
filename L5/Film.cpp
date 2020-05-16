#include "Film.h"
#include<stdio.h>
#include <string>
#include <iostream>
#include<Windows.h>

using namespace std;

Film::Film() {
	this->Titel = "";
	this->Genre = "";
	this->Jahr = 0;
	this->Likes = 0;
	this->Trailer = "";
};

Film::Film(string titel, string genre, int jahr, int likes, string trailer) {
	this->Titel = titel;
	this->Genre = genre;
	this->Jahr = jahr;
	this->Likes = likes;
	this->Trailer = trailer;
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

string Film::get_trailer() {
	return this->Trailer;
}

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

void Film::set_trailer(string trailer) {
	this->Trailer = trailer;
};
/*
bool Film::show() {
	cout << "\n" << this->get_titel() << " ";
	cout << this->get_genre() << " ";
	cout << this->get_jahr() << " ";
	cout << this->get_likes() << " ";
	//transform string Trailer in LPCWSTR pt a deschide in browser
	wstring beta(this->Trailer.begin(), this->Trailer.end());
	LPCWSTR trailer = beta.c_str();
	//la fel si pt "open"
	string alpha = "open";
	wstring alph(alpha.begin(), alpha.end());
	LPCWSTR status = alph.c_str();
	//rulare in browser;
	ShellExecute(NULL, status, trailer, NULL, NULL, SW_SHOWNORMAL); 

	return true;
}
*/

Film::~Film() {};
