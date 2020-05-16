#pragma once
#include <iostream>
#include<stdio.h>
#include <string>
#include <iostream>
#include<Windows.h>
#include "Admin.h"

class Admincontrol
{
	friend class Repository;

private:
	Repository adm;
	
public:
	//constructor
	Admincontrol(Repository r);
	//plays a film's traile
	bool play_trailer(Film);
	//prints all the existing films
	void printAdminGetlist();
	//prints the films after the add method
	void printAdminAdd(Film newfilm);
	//prints the films after the remove operation has been completed
	void printAdminRemove(Film target);
	//prints the updated list
	void printAdminUpdate(Film target, Film newfilm);

	//client-used functions
	void print_by_genre(string genre);
	//adds a movie to the watchlist
	void print_add_to_watchlist(Film film);
	//removes a movie from the watchlist
	void print_remove_from_watchlist(string title, int year);
	//updates a movie's rating
	void print_rating(string opinion);
};
