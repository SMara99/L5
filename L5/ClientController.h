#pragma once
#include <iostream>
#include "Client.h"

class Clientcontrol
{
	friend class Resository_Watchlist;
private:
	Resository_Watchlist cli;
public:
	//constructor
	Clientcontrol(Resository_Watchlist c);
	//prints the list with the updated number of likes.
	void printOpinion(Film film, int i);
};