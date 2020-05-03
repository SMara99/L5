#pragma once
#include<string>
using namespace std;

class Film
{
private:
	string Titel;
	string Genre;
	int Jahr;
	int Likes;
public:
	Film();
	Film(string titel, string genre, int jahr, int likes);
	~Film();

	string get_titel();
	string get_genre();
	int get_jahr();
	int get_likes();

	void set_titel(string titel);
	void set_genre(string genre);
	void set_jahr(int jahr);
	void set_likes(int jahr);

};

