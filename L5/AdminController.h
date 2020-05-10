#pragma once
#include <iostream>
#include "Admin.h"

class Admincontrol
{
	friend class Admin;

private:
	Admin adm;
	
public:
	//constructor
	Admincontrol(Admin a);
	//prints all the existing films
	void printAdminGetlist();
	//prints the films after the add method
	void printAdminAdd(Film newfilm);
	//prints the films after the remove operation has been completed
	void printAdminRemove(Film target);
	//prints the updated list
	void printAdminUpdate(Film target, Film newfilm);
};