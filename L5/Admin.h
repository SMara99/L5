#pragma once
#include "Film.h"
#include<vector>

using namespace std;

class Repository
{
private:
	vector<Film> liste;
	vector <Film> client_watchlist; //list of movies that the client wants to watch
	Film last_removed; //last removed film, will be used for the rating system, enables the user to rate a film after removing it(which would imply that they have watched it)

public:
	Repository();
	~Repository();

	vector<Film> getlist();
	vector<Film> remove(Film old_film);//la fel
	vector<Film> add(Film new_film);//void si exceptie
	Film update(Film old_film, Film new_film);

	//methods uesd by the client

	//returns the watchlist
	vector<Film> get_watchlist();
	//returns a vector all the films from a specified genre and all the existing films is the genre is empty
	vector<Film> show_genre (string genre);
	//adds a movie to the watchlist
	vector<Film> add_to_watchlist (Film film);
	//removes a movie from the watchlist, returns the watchlist if an invalid value is to be removed
	vector<Film> remove_from_watchlist (string title, int year);
	//updates a movie's rating
	vector<Film> rating (string opinion);
};

