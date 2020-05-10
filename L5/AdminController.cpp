#include "AdminController.h"

using namespace std;

Admincontrol::Admincontrol(Admin a)
{
	adm = a;
}

void Admincontrol::printAdminGetlist()
{
	vector<Film> v = adm.getlist();
	for (auto it : v)
		cout << it.get_titel() << " " << it.get_genre() << " " << it.get_jahr() << " " << it.get_likes() << " " << it.get_trailer();
}

void Admincontrol::printAdminAdd(Film newfilm)
{
	vector<Film> v = adm.add(newfilm);
	for (auto it : v)
		cout << it.get_titel() << " " << it.get_genre() << " " << it.get_jahr() << " " << it.get_likes() << " " << it.get_trailer();
}

void Admincontrol::printAdminRemove(Film target)
{
	vector<Film> v = adm.remove(target);
	for (auto it : v)
		cout << it.get_titel() << " " << it.get_genre() << " " << it.get_jahr() << " " << it.get_likes() << " " << it.get_trailer();
}

void Admincontrol::printAdminUpdate(Film target, Film newfilm)
{
	Film f = adm.update(target,newfilm);
	cout << f.get_titel() << " " << f.get_genre() << " " << f.get_jahr() << " " << f.get_likes() << " " << f.get_trailer();
}
