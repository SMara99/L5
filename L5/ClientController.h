#pragma once
#include <iostream>
#include "Client.h"

class Clientcontrol
{
	friend class Client;
private:
	Client cli;
public:
	//constructor
	Clientcontrol(Client c);
	//prints the list with the updated number of likes.
	void printOpinion(Film film, int i);
};