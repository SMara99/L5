#include <iostream>
#include "Menu.h"

using namespace std;

int menu(Repository a)
{
	Admincontrol ac = Admincontrol(a);
	int option;
	bool client_on;
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
			break;
		}
		case 2:
		{
			client_on = true;
			int clientoption;
			while (client_on)
			{
				cout << "*******************************\n";
				cout << "1) Display movies form a certain genre,\n play each trailer one by one,\nand add the desired movies to the watchlist\n";
				cout << "2) Remove from watchlist\n";
				cout << "3) Display watchlist\n";
				cout << "0) Exit\n";

				cin >> clientoption;

				cout << endl;

				switch (clientoption)
				{
				case 1:
				{
					int i = 1;
					string choice, genre, auxopt;
					cout << "\n Please input desired genre; the entire list will be displayed otherwise \n";
					cin >> genre;
					vector<Film> list;

					list = a.show_genre(genre);

					ac.play_trailer(list[0]);
					cout << "\n add movie to watchlist? type 'Y'-yes or 'N'-no\n";
					cin >> auxopt;	//auxilliary option that determines whether or not a movie will be added
					if (auxopt == "Y")
					{
						a.add_to_watchlist(list[i]);
					}

					cout << "\n play the next trailer? type 'Y'-yes or 'N'-no\n";
					cin >> choice;
					while (choice == "Y" && i < list.size())
					{
						ac.play_trailer(list[i]);
						cout << "\n add movie to watchlist? type 'Y'-yes or 'N'-no\n";
						cin >> auxopt;	//auxilliary option that determines whether or not a movie will be added
						if (auxopt == "Y")
						{
							a.add_to_watchlist(list[i]);
						}
						i++;
						cout << "\n play the next trailer? type 'Y'-yes or 'N'-no\n";
						cin >> choice;
					}
					break;
				}
				case 2:
				{
					string title, rating;
					int year;
					cout << "\n Please input title and year of the movie that you would like to remove";
					cout << "\n title: ";
					cin >> title;
					cout << "\n year: ";
					cin >> year;

					ac.print_remove_from_watchlist(title, year);

					cout << "\n [please note]: any other answer will be disconsidered \n Did you like the movie? type 'Y'-yes or 'N'-no\n";
					cin >> rating;
					//full list will be displayed with the updated value
					ac.print_rating(rating);
					break;
				}
				case 3:
				{
					ac.print_remove_from_watchlist("\n", 999999999);
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
			break;
		}
		case 0:
		{
			cout << "End of Program.\n";
			on = false;
			break;
		}
		default:
		{
			cout << "Not a Valid Choice. \n";
			cout << "Choose again.\n";
			cin >> option;
			break;
		}
		} //switch
		
		
	}
	return 0;
}

