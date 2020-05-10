#include <iostream>
#include "Menu.h"

using namespace std;

int menu(Admin a, Client c)
{
	Admincontrol ac = Admincontrol(a);
	Clientcontrol cc = Clientcontrol(c);
	int option;
	bool on = true;
	while (on)
	{
		cout << "*******************************\n";
		cout << "1) Log in as administrator\n";
		cout << "2) Log in as user\n";
		cout << "0) Exit\n";

		cin >> option;

		cout << endl;

		switch (option)
		{
		case 1:
		{
			bool admin_on = true;
			int adminoption;
			while (admin_on)
			{
				cout << "*******************************\n";
				cout << "1) Display all films\n";
				cout << "2) Add a new film\n";
				cout << "3) Remove a film\n";
				cout << "4) Update a film\n";
				cout << "0) Exit";

				cin >> adminoption;

				cout << endl;

				switch (adminoption)
				{
				case 1:
				{
					ac.printAdminGetlist();
				}
				case 2:
				{
					Film newfilm;
					newfilm.set_titel("random");
					ac.printAdminAdd(newfilm);
				}
				case 3:
				{
					Film target = a.getlist()[0];
					ac.printAdminRemove(target);
				}
				case 4:
				{
					Film target = a.getlist()[0];
					Film newfilm;
					newfilm.set_titel("Updated");
					ac.printAdminUpdate(target, newfilm);
				}
				case 0:
					cout << "Returning to main menu...\n";
					admin_on = false;
					break;
				}

			}
		}
		case 2:
		{
			bool client_on = true;
			int clientoption;
			while (client_on)
			{
				cout << "*******************************\n";
				cout << "1) Play a trailer\n";
				cout << "2) Add film to watchlist\n";
				cout << "3) Remove from watchlist\n";
				cout << "4) Rate a film\n";
				cout << "0) Exit";

				cin >> clientoption;

				cout << endl;

				switch (clientoption)
				{
				case 1:
				{
					Film film;

					c.ansehen();
					break;
				}
				case 2:
				{
					Film newfilm;
					c.add(newfilm);
					break;
				}
				case 3:
				{
					Film target;
					c.remove(target);
					break;
				}
				case 4:
				{
					Film target;
					int i;
					cout << "input rating: \n";
					cin >> i;
					vector<Film> v = c.opinion(target, i).getlist();
					break;
				}
				case 0:
				{
					cout << "Returning to main menu...\n";
					client_on = false;
					break;
				}

				}
			}
		case 0:
			cout << "End of Program.\n";
			on = false;
			break;
		default:
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> option;
			break;
		}
		}
		return 0;
	return 0;
}
