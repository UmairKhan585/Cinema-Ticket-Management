
#include<iostream>
#include<iomanip>
#include<string>
#include<fstream>
using namespace std;

int user_no;
void hall_detail();
void movies_detail();
void ages();
void prices();
int want_see;
int &who = user_no;
int movie_select;
int select_show;
int ticket_count;
int &n = ticket_count;
int ticket_no;
string date = "07 Febuary";
string location = " Emporium mall";
string movie_name;
int age, ticket_price_per, total_price, hall, movie_type;
string name_user;
string Admin_name, password;

int main()
{
	system("cls");
	system("color 0B");

	fstream ticket;

	//This portion is to display current date and time of the computer on the console but it does not worl on vs code.
	//usman 088
	//// current date and time on the current system
	//time_t now = time(0);

	//// convert now to string form
	//char* date_time = ctime(&now);

	//cout << "The current date and time is: " << date_time << endl;

start:

	//yasir 091
	cout << endl << endl << endl;
	cout << "\t\t\t" << setfill('*') << setw(70) << ("*") << endl;
	cout << "\t\t\t\t\t\t CINEPAX CINEMA \t\t\t\t" << endl;
	cout << "\t\t\t" << setfill('*') << setw(70) << ("*") << endl;
	cout << endl << endl;
	cout << "\t\t\t\t\t USER\t\t\t ADMIN\n" << endl;
	cout << "\t\t\t\t Press 1 for USER \t\tPress 2 for ADMIN\n\n\n" << endl;
	cout << "\t\t\t\t\t\tEnter Choice: ";
	cin >> user_no;

	if (user_no != 1 && user_no != 2)
	{
		system("cls");
		goto start;
	}

	if (user_no == 1)
	{
		cout << "\t\t\t" << setfill('-') << setw(30) << "-" << endl;
		cout << "\t\t\t" << "wellcome " << endl;
		cout << "\t\t\t" << setfill('-') << setw(30) << "-" << endl;
		cout << setfill('-') << setw(50) << "-" << endl;
		cout << endl;
		system("cls");
		cout << endl;
		cout << endl;
		cin.ignore();
		cout << "\t\t\tPlease enter your Name: ";
		getline(cin, name_user);
		cout << "\n\n\n\t\t\tEnter Your Age:  ";
		cin >> age;


	movie1:
		if (age >= 18)
		{
			cout << endl;
			cout << "\n\t\t\tMovies for 18+/n" << endl;
			cout << "\t\t\t1 Caligula (1979)" << endl;
			cout << "\t\t\t2 Unfaithful (2002)" << endl;
			cout << "\t\t\t3 Original Sin (2001)" << endl;
			cout << "\t\t\t4 Nymphomaniac: Vol. I (2013)\n" << endl;

		}
		if (age < 18)
		{
			cout << endl;
			cout << "\n\t\t\tMovies for under 18/n" << endl;
			cout << "\t\t\t1 Kick" << endl;
			cout << "\t\t\t2 Humpty Sharma Ki dulhania" << endl;
			cout << "\t\t\t3 Bajranji Bhaijaan" << endl;
			cout << "\t\t\t4 Welcome Back \n" << endl;
		}
		cout << endl;
		cout << "\t\t\tEnter the movie number you want to watch: ";
		cin >> movie_select;
		cin.ignore();
		cout << "\t\t\tEnter the movie name to confirm : " << endl;
		cout << "\t\t\t";
		getline(cin, movie_name);

		if (movie_select != 1 && movie_select != 2 && movie_select != 3 && movie_select != 4)
		{
			system("cls");
			goto movie1;
		}
		cout << endl;

		//show1:

		cout << "\t\t\tDetail of the movie" << endl;
		cout << endl;
		cout << "\t\t\tshow time 1: 2pm\n";
		cout << "\t\t\tshow time 2: 5pm\n";
		cout << "\t\t\tshow time 3: 8pm\n";
		cout << endl;
		cout << "\t\t\tEnter the show time you want to watch at.";
		cin >> select_show;

		if (select_show == 1)
		{
			cout << "\t\t\tYou have selected the show 1: 2pm" << endl;
		}
		if (select_show == 2)
		{
			cout << "\t\t\tYou have selected the show 2: 5pm" << endl;
		}
		if (select_show == 3)
		{
			cout << "\t\t\tYou have selected the show 3: 8pm" << endl;
		}
		else
		{
			cout << "\n\n\t\t\tYou have selected the wrong show:";
		}
		cout << endl;

		//Usman 067

		system("cls");
		
		cout << "\n\n\n";
		cout << "\t\t\t\t We have Three types of movies :\n\n\n" << endl;
		cout << "\t 1. For simple 'HD' Movie press 1 :" << endl;
		cout << "\t 2. For '2D' Movie press 2 :" << endl;
		cout << "\t 3. For '3D' Movie press 3 :\n\n" << endl;

		cout << "\t\t\t\t What type of movie you want to See ?";
		cin >> movie_type;
		cout << endl;
		if (movie_type == 1)
		{
			system("cls");
			
			cout << "\n\n\n";
			cout << "\t\t\t\t We have different halls available with different prices :" << endl << endl << endl;
			cout << "\t 1. If you want to see movie in main hall then press 1 :" << endl;
			cout << "\t 2. If you want to see movie in VIP hall press 2 :" << endl;
			cout << "\t 3. If you want to see movie in VVIP hall then press 3 :" << endl << endl;
			cout << "\t\t Enter the Hall NO which you want :";
			cin >> hall;
			cout << "\n";
			if (hall == 1)
			{
				if (age < 12)
				{
					system("cls");
					ticket_price_per = 350;
					cout << "Ticket price for under 12 year age =" << ticket_price_per << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :\n\n" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 950$ :" << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 1520$ :" << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 2180$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 950;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two.\n\n";
						total_price = 1520;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three.\n\n";
						total_price = 2180;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t tWithout deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 12 && age <= 18)
				{
					ticket_price_per = 450;
					cout << "Ticket price for over12 to 18 year age =" << ticket_price_per << endl;
					cout << endl;
					system("cls");
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 1140$ :" << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 1980$ :" << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 2460$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1140;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 1980;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 2460;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 18)
				{
					system("cls");
					ticket_price_per = 560;
					cout << "Ticket price for over18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n \t\t If you are with faimily and you are three persons your total price is 1420$ :" << endl;
					cout << " \t\t\t\t\t Deal 2. \n \t\t If you are with family and you are 6 persons of family your total price is 2600$ :" << endl;
					cout << " \t\t\t\t\t Deal 3 . \n \t\t If you are with family and you are 9 persons your total price is 3800$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1420;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 2600;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 3800;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
			}
			if (hall == 2)
			{
				if (age < 12)
				{
					system("cls");
					ticket_price_per = 450;
					cout << "Ticket price for under 12 year age =" << ticket_price_per << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n \t\t If you are with faimily and you are three persons your total price is 1020$ :" << endl;
					cout << " \t\t\t\t\t Deal 2. \n \t\t If you are with family and you are 6 persons of family your total price is 2100$ :" << endl;
					cout << " \t\t\t\t\t Deal 3. \n \t\t If you are with family and you are 9 persons your total price is 3680$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1020;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 2100;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 3680;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 12 && age <= 18)
				{
					ticket_price_per = 550;
					cout << "Ticket price for over12 to 18 year age =" << ticket_price_per << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n \t\t If you are with faimily and you are three persons your total price is 1470$ :" << endl;
					cout << " \t\t\t\t\t Deal 2. \n \t\t If you are with family and you are 6 persons of family your total price is 2500$ :" << endl;
					cout << " \t\t\t\t\t Deal 3. \n \t\t If you are with family and you are 9 persons your total price is 3900$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1470;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 2500;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 3900;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 18)
				{
					ticket_price_per = 660;
					cout << "Ticket price for over18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n \t\t If you are with faimily and you are three persons your total price is 1590$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n \t\t If you are with family and you are 6 persons of family your total price is 3180$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n \t\t If you are with family and you are 9 persons your total price is 5200$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1590;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 3180;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 5200;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
			}
			if (hall == 3)
			{
				if (age < 12)
				{
					system("cls");
					ticket_price_per = 450;
					cout << "Ticket price for under 12 year age =" << ticket_price_per << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n \t\t If you are with faimily and you are three persons your total price is 950$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n \t\t If you are with family and you are 6 persons of family your total price is 1520$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n \t\t If you are with family and you are 9 persons your total price is 2180$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 950;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 1520;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 2180;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 12 && age <= 18)
				{
					ticket_price_per = 550;
					cout << "Ticket price for over12 to 18 year age =" << ticket_price_per << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n \t\t If you are with faimily and you are three persons your total price is 1340$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n \t\t If you are with family and you are 6 persons of family your total price is 2800$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n \t\t If you are with family and you are 9 persons your total price is 3800$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1340;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 2800;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 3800;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 18)
				{
					system("cls");
					ticket_price_per = 660;
					cout << "Ticket price for over18 year age =" << ticket_price_per << "$" << endl;

					cout << endl;

					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n \t\t If you are with faimily and you are three persons your total price is 1700$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n \t\t If you are with family and you are 6 persons of family your total price is 3500$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n \t\t If you are with family and you are 9 persons your total price is 4600$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1700;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 3500;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 4600;
						cout << "Your total price is " << total_price << "$" << endl;
					}

					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
			}
		}
		if (movie_type == 2)
		{
			system("cls");
			cout << "\n\n\n";
			cout << "\t\t\t\t We have different halls available with different prices :" << endl << endl << endl;
			cout << "\t\t 1. If you want to see movie in main hall then press 1 :" << endl;
			cout << "\t\t 2. If you want to see movie in VIP hall press 2 :" << endl;
			cout << "\t\t 3. If you want to see movie in VVIP hall then press 3 :" << endl;
			cout << "\t\t Enter the Hall NO which you want :";
			cin >> hall;
			if (hall == 1)
			{
				if (age < 12)
				{
					system("cls");
					ticket_price_per = 450;
					cout << "Ticket price for under 12 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 950$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 1520$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 2180$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 950;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 1520;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 2180;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 12 && age <= 18)
				{
					system("cls");
					ticket_price_per = 550;
					cout << "Ticket price for over12 to 18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 1300$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 2500$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 4700$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1300;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 2500;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 4700;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					system("cls");
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 18)
				{
					system("cls");
					ticket_price_per = 660;
					cout << "Ticket price for over18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 1600$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 3200$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 4800$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1600;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 3200;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 4800;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					system("cls");
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
			}
			if (hall == 2)
			{
				if (age < 12)
				{
					system("cls");
					ticket_price_per = 550;
					cout << "Ticket price for under 12 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 1300$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 2400$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 3400$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1300;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 2400;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 3400;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 12 && age <= 18)
				{
					system("cls");
					ticket_price_per = 650;
					cout << "Ticket price for over12 to 18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 1400$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 3100$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 4600$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1400;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 3100;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n/n";
						cout << "\t you are suceeded to get deal Three\n/n";
						total_price = 4500;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 18)
				{
					system("cls");
					ticket_price_per = 760;
					cout << "Ticket price for  over18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 1900$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 4000$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 6000$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1900;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 4000;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 6000;
						cout << "Your total price is " << total_price << "$" << endl;
					}system("cls");
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
			}
			if (hall == 3)
			{
				if (age < 12)
				{
					system("cls");
					ticket_price_per = 650;
					cout << "Ticket price for under 12 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 1800$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 3500$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 5400$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1800;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 3500;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 5400;
						cout << "Your total price is " << total_price << "$" << endl;
					}system("cls");
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 12 && age <= 18)
				{
					system("cls");
					ticket_price_per = 750;
					cout << "Ticket price for over12 to 18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 2100$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with family and you are 6 persons of family your total price is 4200$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with family and you are 9 persons your total price is 6000$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 2100;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 4200;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 6000;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 18)
				{
					system("cls");
					ticket_price_per = 860;
					cout << "Ticket price for over18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 2200$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with family and you are 6 persons of family your total price is 4300$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with family and you are 9 persons your total price is 7000$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 2200;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 4300;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 7000;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\tThank you \n";
				}
			}
		}
		if (movie_type == 3)
		{
			system("cls");
			cout << "\n\n\n";
			cout << "\t\t\t\t We have different halls available with different prices :" << endl << endl;
			cout << "\t 1. if you want to see movie in main hall then press 1 :" << endl;
			cout << "\t 2. If you want to see movie in VIP hall press 2 :" << endl;
			cout << "\t 3. If you want to see movie in VVIP hall then press 3 :" << endl << endl << endl;
			cout << "\t\t Enter the Hall NO which you want :";
			cin >> hall;
			if (hall == 1)
			{
				if (age < 12)
				{
					system("cls");
					ticket_price_per = 550;
					cout << "Ticket price for under 12 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t Deal 1. \n \t\t If you are with faimily and you are three persons your total price is 1500$ :" << endl << endl;
					cout << " \t\t\t\t Deal 2. \n \t\t If you are with family and you are 6 persons of family your total price is 3000$ :" << endl << endl;
					cout << " \t\t\t\t Deal 3. \n \t\t If you are with family and you are 9 persons your total price is 4000$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1500;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 3000;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 4000;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 12 && age <= 18)
				{
					system("cls");
					ticket_price_per = 650;
					cout << "Ticket price for over12 to 18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 1800$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 3000$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 5000$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 1800;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 3000;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 5000;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 18)
				{
					system("cls");
					ticket_price_per = 760;
					cout << "Ticket price for over18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 2000$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 3500$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 6500$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 2000;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 3500;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 6500;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
			}
			if (hall == 2)
			{
				if (age < 12)
				{
					system("cls");
					ticket_price_per = 750;
					cout << "Ticket price for under 12 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 2200$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 4200$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 6600$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 2200;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 4200;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 6600;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 12 && age <= 18)
				{
					system("cls");
					ticket_price_per = 850;
					cout << "Ticket price for over12 to 18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 2200$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 4200$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 6600$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 2200;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 4200;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 6600;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 18)
				{
					system("cls");
					ticket_price_per = 960;
					cout << "Ticket price for  over18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 2700$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 5400$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 8000$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 2700;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 5400;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 8000;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
			}
			if (hall == 3)
			{
				if (age < 12)
				{
					system("cls");
					ticket_price_per = 850;
					cout << "Ticket price for under 12 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 2000$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 4500$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 6000$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 2000;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 4500;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 6000;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 12 && age <= 18)
				{
					system("cls");
					ticket_price_per = 950;
					cout << "Ticket price for over12 to 18 year age =" << ticket_price_per << "$" << endl;
					cout << "How many tickets you want to buy : ?";
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 2500$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 5400$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 7500$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal One\n\n";
						total_price = 2500;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 5400;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 7500;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
				if (age > 18)
				{
					system("cls");
					ticket_price_per = 1060;
					cout << "Ticket price for over18 year age =" << ticket_price_per << "$" << endl;
					cout << endl;
					cout << "\t\t\t\t We have three type of deals :" << endl << endl;
					cout << " \t\t\t\t\t Deal 1. \n\n \t\t If you are with faimily and you are three persons your total price is 2900$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 2. \n\n \t\t If you are with family and you are 6 persons of family your total price is 5500$ :" << endl << endl;
					cout << " \t\t\t\t\t Deal 3. \n\n \t\t If you are with family and you are 9 persons your total price is 8000$ :" << endl << endl;
					cout << "\t\t\t How many tickets you want to buy : ? ";
					cin >> ticket_count;
					if (ticket_count == 3)
					{
						cout << "\t\t\t\t Congrats\n";
						cout << "\t you are suceeded to get deal One\n";
						total_price = 2900;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 6)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Two\n\n";
						total_price = 5500;
						cout << "your total price is " << total_price << "$" << endl;
					}
					if (ticket_count == 9)
					{
						cout << "\t\t\t\t Congrats\n\n";
						cout << "\t you are suceeded to get deal Three\n\n";
						total_price = 8000;
						cout << "Your total price is " << total_price << "$" << endl;
					}
					cout << setfill('-') << setw(90) << "-" << endl;
					cout << "\t\t\t\t Without deal your price is ..this.\n";
					cout << setfill('-') << setw(90) << "-" << endl;
					total_price = ticket_price_per*ticket_count;
					cout << "Your total price is " << total_price << endl;
					cout << "\t\t\t Thank you \n";
				}
			}
		}
	}//
	if (user_no == 2)
	{
	admin:
		cout << "\t\t\tEnter your Admin name: " << endl;
		cout << "\t\t\t";
		cin >> Admin_name;
		if (Admin_name == "ADMIN")
		{
			cout << "\t\t\tPLease enter you password :" << endl;
			cout << "\t\t\t";
			cin >> password;
			if (password == "admin")
			{
				system("cls");
				cout << "\t\t\t" << setfill('-') << setw(50) << "-" << endl;
				cout << "\t\t\t\t\t|" << setfill(' ') << setw(19) << "|" << endl;
				cout << "\t\t\t\t\t|" << setfill(' ') << setw(2) << " Wellcome Admin   " << setfill(' ') << setw(1) << "|" << endl;
				cout << "\t\t\t\t\t|" << setfill(' ') << setw(19) << "|" << endl;
				cout << "\t\t\t" << setfill('-') << setw(50) << "-" << endl;
				cout << "\t\t\t what information you want to see ?" << endl;
				cout << "\t\t\tIf you want to see hall information press '1'\n";
				cout << "\t\t\tIf you want to see Movies information press '2'\n";
				cout << "\t\t\tIf you want to see age information press '3'\n";
				cout << "\t\t\tIf you want to see all the detail off cenima enter '4'\n";
				cout << "\t\t\tIf you want to see all the detail of cenima's PRICES criteria enter '5'\n";
				cout << "\t\t\t";
				cin >> want_see;
				if (want_see == 1)
				{
					hall_detail();
					system("pause");
				}
				if (want_see == 2)
				{
					movies_detail();
					system("pause");
				}
				if (want_see == 3)
				{
					ages();
					system("pause");
				}
				if (want_see == 4)
				{
					hall_detail();
					movies_detail();
					ages();
					system("pause");
				}
				if (want_see == 5)
				{
					prices();
					system("pause");
				}
			}
			else
			{
				cout << "\t\t\tInvalid Pssword. \n";
				cout << "\t\t\tPlease try again\n";
				goto admin;
			}
		}
		else
		{
			cout << "\t\t\tInvalid Admin username. \n";
			cout << "\t\t\tPlease try again\n";
			goto admin;
		}
	}

	

	system("cls");
	system("color 0E");

	//Usman 088
	cout << endl;
	cout << endl;
	cout << endl;
	int count = 0;
	const int row = 5, col = 9;
	int r, c;
	char ch = 0;
	char rows = '0';
	int count_stop = 0;

	//declaring and array of seats available.
	cout << endl;
	char seat[row][col] = { '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#', '#' };

	//displaying the array
choose:
	cout << "\t\t            0  1  2  3  4  5  6  7  8" << endl;
	for (int i = 0; i < row; i++)
	{
		cout << "\t\t   Row  " << rows << "  ";
		++rows;
		for (int j = 0; j < col; j++)
		{
			cout << " " << seat[i][j] << " ";
		}
		cout << endl;
	}
	//to count stop.
	count_stop++;
	//asking the user which seats they want to choose
again:
	for (int input = 0; input < 45; input++)
	{
		//input row and coloumn
		rows = '0';
		cout << " Enter the row and coloumn of the seat you want" << endl;
		cout << " Row: ";
		cin >> r;
		cout << " Column:";
		cin >> c;
		//if the row and coloumn stated is out of range then show
		if (r <= -1 || c <= -1 || r >= 6 || c >= 10)
		{
			cout << endl;
			cout << " You entered an invalid seat please choose again." << endl;
			system("cls");
			goto choose;
		}
		//if the seat is already taked the show
		if (seat[r][c] == '-')
		{
			cout << endl;
			cout << " The seat selected is already taken" << endl;
			goto again;
		}
		//assigning the seat choosen with different symbol
		seat[r][c] = '-';
		system("cls");
		cout << endl;
		cout << endl << " Seat Booked!" << endl;
		//If end loop for the number of ticket bought;
		if (count_stop == ticket_count)
		{
			cout << "Your have BOOKED all the seats." << endl;
			for (int i = 0; i < row; i++)
			{
				cout << "\t\t   Row  " << rows << "  ";
				++rows;
				for (int j = 0; j < col; j++)
				{
					cout << " " << seat[i][j] << " ";
				}
				cout << endl;
			}
			break;
		}

		//asking the user if the want to continue
		cout << endl << " Do You Want To Book Another Seat?" << endl;
		cout << " Press [Y] For Yes & [N] For No." << endl;
		cin >> ch;
		//If the user choose to continue then the system will clear screen and goto choose starting point and start reading the program again.
		if (ch == 'y' || ch == 'Y')
		{
			system("cls");
			goto choose;
		}
		//If the user choose not to continue then then program will show how many seats were registred and the thier location as well after which it will break
		else if (ch == 'n' || ch == 'N')
		{
			cout << " Number for seats booked :" << count << endl;
			cout << "\t\t            0  1  2  3  4  5  6  7  8" << endl;
			for (int i = 0; i < row; i++)
			{
				cout << "\t\t   Row  " << rows << "  ";
				++rows;

				for (int j = 0; j < col; j++)
				{
					cout << " " << seat[i][j] << " ";
				}
				cout << endl;
			}
			break;
		}
	}




	//shehraz 082 payment method and file handling
	int payment_method;
	int amount_paid;
	int sum;
	char card_number[12];
	int card_password;
	cout << "\t\t\tWhich method do you want to pay with ?" << endl;
	cout << "\t\t\t1. Cash" << endl;
	cout << "\t\t\t2. Card" << endl;
	
	cin >> payment_method;
	
	if (payment_method == 1)
	{
		cout << "\t\t\tThe amount needed to be paid is  " << total_price << " ."<<endl;
		cout << "\t\t\tPlease enter the amount user paid." << endl;
		cout << "\t\t\t";
		cin >> amount_paid;
		sum = total_price - amount_paid;
		cout << "\t\t\t***PAYMENT SUCCESSFUL ***" << endl;
		cout << "\t\t\tAmount return  " << sum << " " << endl;
	}

	if (payment_method == 2)
	{
		cout << "\t\t\tThe amount needed to be paid is  " << total_price << " ." << endl;
		cout << "\t\t\tEnter card number" << endl; cout << "\t\t\t";
		cin >> card_number;
		cout << "\t\t\tEnter 4 digit password " << endl; cout << "\t\t\t";
		cin >> card_password;
		cout << "\t\t\tPlease enter the amount user paid." << endl; cout << "\t\t\t";
		cin >> amount_paid;
		sum = total_price - amount_paid;
		cout << "\t\t\t***PAYMENT SUCCESSFUL ***" << endl;
		cout << "\t\t\tAmount returned :" << sum << endl;
	}




	//umair 086 ticket layout
	//sheraz 082 file handling
	for (int i = 0; i < ticket_count; i++)
	{
		int count;
		count = i;
		cout << "\t\t\t " << setw(40) << setfill('-') << "-" << endl;
		cout << "\t\t\t " << setw(26) << setfill(' ') << "Ticket" << endl;
		cout << "\t\t\t " << setw(40) << setfill('-') << "-" << endl;
		cout << "\t\t\t |" << "Tick Number : CP00" << count << endl;
		cout << "\t\t\t |" << "Name : " << name_user << endl;
		cout << "\t\t\t |" << "Date : " << date << endl;
		cout << "\t\t\t |" << "Time : " << select_show << "pm" << endl;
		cout << "\t\t\t |" << "Location : " << location << endl;
		cout << "\t\t\t |" << "Movie Name : " << movie_name << endl;
		cout << "\t\t\t |" << "Total price : " << total_price << endl;
		cout << "\t\t\t |" << "Return amount :" << sum << endl;
		coutt << "\t\t\t " << setw(40) << setfill('-') << "-" << endl;
		cout << endl;
		cout << endl;
	}






	ticket.open("ticket_formet.txt", ios::app);
	for (int i = 0; i < ticket_count; i++)
	{
		int count;
		count = i;
		ticket << "\t\t\t " << setw(40) << setfill('-') << "-" << endl;
		ticket << "\t\t\t " << setw(26) << setfill(' ') << "Ticket" << endl;
		ticket << "\t\t\t " << setw(40) << setfill('-') << "-" << endl;
		ticket << "\t\t\t |" << "Tick Number : CP00" << count << endl;
		ticket << "\t\t\t |" << "Name : " << name_user << endl;
		ticket << "\t\t\t |" << "Date : " << date << endl;
		ticket << "\t\t\t |" << "Time : " << select_show << "pm" << endl;
		ticket << "\t\t\t |" << "Location : " << location << endl;
		ticket << "\t\t\t |" << "Movie Name : " << movie_name << endl;
		ticket << "\t\t\t |" << "Total price : " << total_price << endl;
		ticket << "\t\t\t |" << "Return amount :" << sum << endl;
		ticket << "\t\t\t " << setw(40) << setfill('-') << "-" << endl;
		ticket << endl;
		ticket << endl;
	}
	ticket.close();
	string copy;
	ticket.open("ticket_formet.txt", ios::in);
	while (!ticket.eof())
	{
		getline(ticket, copy);
		cout << copy;
	}
	ticket.close();
	system("pause");
	return 0;
}


void hall_detail()
{
	cout << endl;
	cout << endl;
	cout << "\t\t\tHalls available :" << endl;
	cout << "\t\t\t1. Main hall" << endl;
	cout << "\t\t\t2. VIP hall " << endl;
	cout << "\t\t\t3. VVIP hall " << endl;

	
}


void movies_detail()
{
	cout << endl;
	cout << endl;
	cout << "\t\t\tWe have Three types of movies :" << endl;
	cout << "\t\t\t1. Simple HD movie." << endl;
	cout << "\t\t\t2. 2D movie. " << endl;
	cout << "\t\t\t3. 3D movie. " << endl;
	
}


void ages()
{
	cout << endl;
	cout << endl;
	cout << "\t\t\tWe have different prices for different ages: \n";
	cout << "\t\t\twe have tickets for three different age group. \n";
	cout << "\t\t\tLess than 12 year age \n";
	cout << "\t\t\t12 to 18 year age \n";
	cout << "\t\t\tGreater then 18 year age \n";
	cout << endl;

}
void prices()
{
	cout << "\t\t\tIn simple HD moveis" << endl;
	cout << "\t\t\tFor more information enter 1" << endl;
	cout << "\t\t\tIn 2D movies" << endl;
	cout << "\t\t\tFor more information enter 2" << endl;
	cout << "\t\t\tIn 3D movies" << endl;
	cout << "\t\t\tFor more information enter 3" << endl;
	int choice;
	cin >> choice;
	if (choice == 1)
	{
		cout << "\t\t\tMain hall" << endl;
		cout << "\t\t\tIf Age < 12" << endl << "\t\t\tThan ticket=350" << endl;
		cout << "\t\t\tWith 2 more family member price = 950" << endl;
		cout << "\t\t\tWith 5 more family member price = 1550" << endl;
		cout << "\t\t\tWith 8 more family member price = 2180" << endl;

		cout << endl;

		cout << "\t\t\tIf Age > 12 && Age < 18" << endl << "Than ticket=450" << endl;
		cout << "\t\t\tWith 2 more family member price = 1140" << endl;
		cout << "\t\t\tWith 5 more family member price = 1980" << endl;
		cout << "\t\t\tWith 8 more family member price = 2460" << endl;

		cout << endl;


		cout << "\t\t\tAge > 18" << endl << "\t\t\tThan ticket = 560" << endl;
		cout << "\t\t\tWith 2 more family member price = 1420" << endl;
		cout << "\t\t\tWith 5 more family member price = 2600" << endl;
		cout << "\t\t\tWith 8 more family member price = 3800" << endl;

		cout << endl;


		cout << "\t\t\tVIP Hall" << endl;
		cout << "\t\t\tIf Age < 12" << endl << "\t\t\tThan ticket=450" << endl;
		cout << "\t\t\tWith 2 more family member price = 950" << endl;
		cout << "\t\t\tWith 5 more family member price = 2100" << endl;
		cout << "\t\t\tWith 8 more family member price = 3680" << endl;

		cout << endl;


		cout << "\t\t\tAge > 12 && Age<18" << endl << "\t\t\tThan ticket=550" << endl;
		cout << "\t\t\tWith 2 more family member price = 1470" << endl;
		cout << "\t\t\tWith 5 more family member price = 2500" << endl;
		cout << "\t\t\tWith 8 more family member price = 3900" << endl;

		cout << endl;


		cout << "\t\t\tAge > 18" << endl << "\t\t\tThan ticket = 660" << endl;
		cout << "\t\t\tWith 2 more family member price = 1590" << endl;
		cout << "\t\t\tWith 5 more family member price = 3180" << endl;
		cout << "\t\t\tWith 8 more family member price = 5200" << endl;

		cout << endl;


		cout << "\t\t\tVVIP Hall" << endl;
		cout << "\t\t\tIf Age < 12" << endl << "\t\t\tThan  ticket=450" << endl;
		cout << "\t\t\tWith 2 more family member price = 950" << endl;
		cout << "\t\t\tWith 5 more family member price = 1520" << endl;
		cout << "\t\t\tWith 8 more family member price = 2180" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 12 && Age < 18" << endl << "\t\t\tThan   ticket=550" << endl;
		cout << "\t\t\tWith 2 more family member price = 1340" << endl;
		cout << "\t\t\tWith 5 more family member price = 2800" << endl;
		cout << "\t\t\tWith 8 more family member price = 3800" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 18" << endl << "\t\t\tThan  ticket = 660" << endl;
		cout << "\t\t\tWith 2 more family member price = 1700" << endl;
		cout << "\t\t\tWith 5 more family member price = 3500" << endl;
		cout << "\t\t\tWith 8 more family member price = 4600" << endl;

		cout << endl;


	}

	if (choice == 2)
	{
		cout << endl;


		cout << "\t\t\tIf Age < 12" << endl << "\t\t\tThan ticket=450" << endl;
		cout << "\t\t\tWith 2 more family member price = 950" << endl;
		cout << "\t\t\tWith 5 more family member price = 1520" << endl;
		cout << "\t\t\tWith 8 more family member price = 2180" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 12 && Age<18" << endl << "\t\t\tThan ticket=550" << endl;
		cout << "\t\t\tWith 2 more family member price = 1300" << endl;
		cout << "\t\t\tWith 5 more family member price = 2500" << endl;
		cout << "\t\t\tWith 8 more family member price = 4700" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 18" << endl << "\t\t\tThan  ticket = 660" << endl;
		cout << "\t\t\tWith 2 more family member price = 1600" << endl;
		cout << "\t\t\tWith 5 more family member price = 3200" << endl;
		cout << "\t\t\tWith 8 more family member price = 4800" << endl;

		cout << endl;


		cout << "\t\t\tVIP Hall" << endl;
		cout << "\t\t\tIf Age < 12" << endl << "\t\t\tThan  ticket=550" << endl;
		cout << "\t\t\tWith 2 more family member price = 1300" << endl;
		cout << "\t\t\tWith 5 more family member price = 2400" << endl;
		cout << "\t\t\tWith 8 more family member price = 3400" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 12 && Age<18" << endl << "\t\t\tThan ticket=650" << endl;
		cout << "\t\t\tWith 2 more family member price = 1400" << endl;
		cout << "\t\t\tWith 5 more family member price = 3100" << endl;
		cout << "\t\t\tWith 8 more family member price = 4600" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 18" << endl << "\t\t\tThan  ticket = 760" << endl;
		cout << "\t\t\tWith 2 more family member price = 1900" << endl;
		cout << "\t\t\tWith 5 more family member price = 4000" << endl;
		cout << "\t\t\tWith 8 more family member price = 6000" << endl;

		cout << endl;


		cout << "\t\t\tVVIP Hall" << endl;
		cout << "\t\t\tIf Age < 12" << endl << "\t\t\tThan  ticket=650" << endl;
		cout << "\t\t\tWith 2 more family member price = 1800" << endl;
		cout << "\t\t\tWith 5 more family member price = 3500" << endl;
		cout << "\t\t\tWith 8 more family member price = 5400" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 12 && Age<18" << endl << "\t\t\tThan ticket=750" << endl;
		cout << "\t\t\tWith 2 more family member price = 2100" << endl;
		cout << "\t\t\tWith 5 more family member price = 4200" << endl;
		cout << "\t\t\tWith 8 more family member price = 6000" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 18" << endl << "\t\t\tThan ticket = 860" << endl;
		cout << "\t\t\tWith 2 more family member price = 2200" << endl;
		cout << "\t\t\tWith 5 more family member price = 4300" << endl;
		cout << "\t\t\tWith 8 more family member price = 7000" << endl;

		cout << endl;


	}



	if (choice == 3)
	{
		cout << "\t\t\tIf Age < 12" << endl << "\t\t\tThan ticket=550" << endl;
		cout << "\t\t\tWith 2 more family member price = 1500" << endl;
		cout << "\t\t\tWith 5 more family member price = 3000" << endl;
		cout << "\t\t\tWith 8 more family member price = 4000" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 12 && Age < 18" << endl << "\t\t\tThan  ticket=650" << endl;
		cout << "\t\t\tWith 2 more family member price = 1800" << endl;
		cout << "\t\t\tWith 5 more family member price = 3000" << endl;
		cout << "\t\t\tWith 8 more family member price = 5000" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 18" << endl << "\t\t\tThan ticket = 760" << endl;
		cout << "\t\t\tWith 2 more family member price = 2000" << endl;
		cout << "\t\t\tWith 5 more family member price = 3500" << endl;
		cout << "\t\t\tWith 8 more family member price = 6500" << endl;

		cout << endl;


		cout << "\t\t\tVIP Hall" << endl;
		cout << "\t\t\tIf Age<12" << endl << "\t\t\tThan ticket=750" << endl;
		cout << "\t\t\tWith 2 more family member price = 2200" << endl;
		cout << "\t\t\tWith 5 more family member price = 4200" << endl;
		cout << "\t\t\tWith 8 more family member price = 6600" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 12 && Age < 18" << endl << "\t\t\tThan ticket=850" << endl;
		cout << "\t\t\tWith 2 more family member price = 2200" << endl;
		cout << "\t\t\tWith 5 more family member price = 4200" << endl;
		cout << "\t\t\tWith 8 more family member price = 6600" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 18" << endl << "\t\t\tThan ticket = 960" << endl;
		cout << "\t\t\tWith 2 more family member price = 2700" << endl;
		cout << "\t\t\tWith 5 more family member price = 5400" << endl;
		cout << "\t\t\tWith 8 more family member price = 8000" << endl;

		cout << endl;


		cout << "\t\t\tVVIP Hall" << endl;
		cout << "\t\t\tIf Age < 12" << endl << "\t\t\tThan ticket=850" << endl;
		cout << "\t\t\tWith 2 more family member price = 2000" << endl;
		cout << "\t\t\tWith 5 more family member price = 4500" << endl;
		cout << "\t\t\tWith 8 more family member price = 6000" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 12 && Age<18" << endl << "\t\t\tThan ticket=950" << endl;
		cout << "\t\t\tWith 2 more family member price = 2500" << endl;
		cout << "\t\t\tWith 5 more family member price = 5400" << endl;
		cout << "\t\t\tWith 8 more family member price = 7500" << endl;

		cout << endl;


		cout << "\t\t\tIf Age > 18" << endl << "\t\t\tThan ticket = 1060" << endl;
		cout << "\t\t\tWith 2 more family member price = 2900" << endl;
		cout << "\t\t\tWith 5 more family member price = 5500" << endl;
		cout << "\t\t\tWith 8 more family member price = 8000" << endl;

		cout << endl;


		system("pause");
	}
	
}