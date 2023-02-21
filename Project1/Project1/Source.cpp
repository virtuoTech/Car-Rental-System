#include <iostream>
#include <string>
#include <stdlib.h>
#include <fstream>
#include <conio.h>
using namespace std;

struct customer
{
	string name;
	int id = 0;
};

void management(customer c, string car, int model, string color)
{
	string usID, usPass, x;
	int logAttempt = 1;

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                          LOGIN                          \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	while (logAttempt <= 3)
	{
		cout << "\t\t\t\t\t\t\t Enter ID: ";  // management login
		cin >> usID;
		cout << "\t\t\t\t\t\t\t Enter Password: ";
		cin >> usPass;

		if (usID == "HAM123" && usPass == "12345")
		{
			break;
		}
		else
		{
			cout << "\n\t\t\t\t\t\t\t Invalid ID or Password! Please Try Again.\n\n";
			logAttempt++;

			if (logAttempt > 3)
			{
				system("CLS");
				cout << "\n\n\t\t\t\t\t\t\t TOO MANY LOGIN ATTEMPTS!!!! \n\t\t\t\t\t\t\t Try again after 30 seconds.   ";
				cin >> x;
				exit(0);  // terminates the program
			}
		}
	}

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                      CUSTOMER INFO                      \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	cout << "\n\t\t\t\t\t\t\t Customer Name: " << c.name << endl;  // printing customer info
	cout << "\t\t\t\t\t\t\t Customer National ID: " << c.id << endl;
	cout << "\t\t\t\t\t\t\t Car: " << car << endl;
	cout << "\t\t\t\t\t\t\t Car Model: " << model << endl;
	cout << "\t\t\t\t\t\t\t Car Color: " << color << endl;
}

void civic(customer c, string car, int model, string color)
{
	int a, total, store;
	char d;

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                        HONDA CIVIC                      \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	ifstream InFile("civic.txt");
	string line;
	while (!InFile.eof())
	{
		cin.ignore();
		getline(InFile, line);
		cout << "\n\t\t\t\t\t\t\t " << line;
	}
	InFile.close();

	cout << "\n\n\t\t\t\t\t\t\t Rent of car per day: 8000 " << endl;
	cout << "\t\t\t\t\t\t\t Charges of driver: 3000 " << endl;
	cout << "\t\t\t\t\t\t\t Enter number of days: ";
	cin >> store;
	cout << endl;

	cout << "\t\t\t\t\t\t\t Want Driver: ( y / n )..?   ";
	cin >> d;

	if (d == 'y')
	{
		total = (store * 8000) + 3000;
	}
	else
	{
		total = store * 8000;
	}

	system("CLS"); // clears the screen

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                       CUSTOMER INFO                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	cout << "\t\t\t\t\t\t\t Enter Your Name: "; // taking data from customer
	cin.ignore();
	getline(cin, c.name);
	cout << endl;

	cout << "\t\t\t\t\t\t\t Enter National ID: ";
	cin >> c.id;
	cout << endl;

	system("CLS");

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                    CUSTOMER INVOICE                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";
	cout << "\t\t\t\t\t\t\t    -------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t    | Invoice No.:                            " << "#bnb01" << endl;
	cout << "\t\t\t\t\t\t\t    | Customer's Name:                        " << c.name << endl;
	cout << "\t\t\t\t\t\t\t    | Customer's National ID:                 " << c.id << endl;
	cout << "\t\t\t\t\t\t\t    | Car:                                    " << car << endl;
	cout << "\t\t\t\t\t\t\t    | Car Model:                              " << model << endl;
	cout << "\t\t\t\t\t\t\t    | Number of days :                        " << store << endl;
	cout << "\t\t\t\t\t\t\t    | Rent of car per day:                    8000" << endl;
	cout << "\t\t\t\t\t\t\t    | Charges of driver(if included):         3000" << endl;
	cout << "\t\t\t\t\t\t\t    | Advance:                                0" << endl;
	cout << "\t\t\t\t\t\t\t    | Total Rental Amount is:                 " << total << endl;
	cout << "\t\t\t\t\t\t\t    -------------------------------------------------" << endl;
	cout << "\n\t\t\t\t\t\t\t   This is a computer generated invoice and it does not" << endl;
	cout << "\t\t\t\t\t\t\t   require an authorised signture." << endl;
	cout << "\n\t\t\t\t\t\t\t --------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t   You are advised to pay up the amount before due date." << endl;
	cout << "\t\t\t\t\t\t\t   otherwise penalty fee will be applied" << endl;
	cout << "\t\t\t\t\t\t\t --------------------------------------------------------- \n\n";


	cout << "\n\n\n\n\t\t\t\t\t\t\t Enter 1 if you are a Management person" << endl;
	cout << "\t\t\t\t\t\t\t      & to exit Enter 0: ";
	cin.ignore();
	cin >> a;

	system("CLS");

	if (a == 1)
	{
		management(c, car, model, color);
	}

	else if (a == 0)
	{
		exit(0);
	}
}

void corolla(customer c, string car, int model, string color)
{
	int a, total, store;
	char d;

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                      TOYOTA COROLLA                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	ifstream InFile("corolla.txt");
	string line;
	while (!InFile.eof())
	{
		cin.ignore();
		getline(InFile, line);
		cout << "\n\t\t\t\t\t\t\t " << line;
	}
	InFile.close();

	cout << "\n\n\t\t\t\t\t\t\t Rent of car per day: 7000 " << endl;
	cout << "\t\t\t\t\t\t\t Charges of driver: 3000 " << endl;
	cout << "\t\t\t\t\t\t\t Enter number of days: ";
	cin >> store;
	cout << endl;

	cout << "\t\t\t\t\t\t\t Want Driver: ( y / n )..?   ";
	cin >> d;

	if (d == 'y')
	{
		total = (store * 7000) + 3000;
	}
	else
	{
		total = store * 7000;
	}

	system("CLS");

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                       CUSTOMER INFO                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	cout << "\t\t\t\t\t\t\t Enter Your Name: ";
	cin.ignore();
	getline(cin, c.name);
	cout << endl;

	cout << "\t\t\t\t\t\t\t Enter National ID: ";
	cin >> c.id;
	cout << endl;

	system("CLS");

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                    CUSTOMER INVOICE                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";
	cout << "\t\t\t\t\t\t\t    -------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t    | Invoice No.:                            " << "#bnb024" << endl;
	cout << "\t\t\t\t\t\t\t    | Customer's Name:                        " << c.name << endl;
	cout << "\t\t\t\t\t\t\t    | Customer's National ID:                 " << c.id << endl;
	cout << "\t\t\t\t\t\t\t    | Car:                                    " << car << endl;
	cout << "\t\t\t\t\t\t\t    | Car Model:                              " << model << endl;
	cout << "\t\t\t\t\t\t\t    | Number of days :                        " << store << endl;
	cout << "\t\t\t\t\t\t\t    | Rent of car per day:                    7000" << endl;
	cout << "\t\t\t\t\t\t\t    | Charges of driver(if included):         3000" << endl;
	cout << "\t\t\t\t\t\t\t    | Advance:                                0" << endl;
	cout << "\t\t\t\t\t\t\t    | Total Rental Amount is:                 " << total << endl;
	cout << "\t\t\t\t\t\t\t    -------------------------------------------------" << endl;
	cout << "\n\t\t\t\t\t\t\t   This is a computer generated invoice and it does not" << endl;
	cout << "\t\t\t\t\t\t\t   require an authorised signture." << endl;
	cout << "\n\t\t\t\t\t\t\t --------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t   You are advised to pay up the amount before due date." << endl;
	cout << "\t\t\t\t\t\t\t   otherwise penalty fee will be applied" << endl;
	cout << "\t\t\t\t\t\t\t --------------------------------------------------------- \n\n";


	cout << "\n\n\n\n\t\t\t\t\t\t\t Enter 1 if you are a Management person" << endl;
	cout << "\t\t\t\t\t\t\t      & to exit Enter 0: ";
	cin.ignore();
	cin >> a;

	system("CLS");

	if (a == 1)
	{
		management(c, car, model, color);
	}

	else if (a == 0)
	{
		exit(0);
	}

}


void mira(customer c, string car, int model, string color)
{
	int a, total, store;
	char d;

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                       DAIHATSU MIRA                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	ifstream InFile("mira.txt");
	string line;
	while (!InFile.eof())
	{
		cin.ignore();
		getline(InFile, line);
		cout << "\n\t\t\t\t\t\t\t " << line;
	}
	InFile.close();

	cout << "\n\n\t\t\t\t\t\t\t Rent of car per day: 5500 " << endl;
	cout << "\t\t\t\t\t\t\t Charges of driver: 3000 " << endl;
	cout << "\t\t\t\t\t\t\t Enter number of days: ";
	cin >> store;
	cout << endl;

	cout << "\t\t\t\t\t\t\t Want Driver: ( y / n )..?   ";
	cin >> d;

	if (d == 'y')
	{
		total = (store * 5500) + 3000;
	}
	else
	{
		total = store * 5500;
	}

	system("CLS");

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                       CUSTOMER INFO                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	cout << "\t\t\t\t\t\t\t Enter Your Name: ";
	cin.ignore();
	getline(cin, c.name);
	cout << endl;

	cout << "\t\t\t\t\t\t\t Enter National ID: ";
	cin >> c.id;
	cout << endl;

	system("CLS");

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                    CUSTOMER INVOICE                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";
	cout << "\t\t\t\t\t\t\t    -------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t    | Invoice No.:                            " << "#bnb086" << endl;
	cout << "\t\t\t\t\t\t\t    | Customer's Name:                        " << c.name << endl;
	cout << "\t\t\t\t\t\t\t    | Customer's National ID:                 " << c.id << endl;
	cout << "\t\t\t\t\t\t\t    | Car:                                    " << car << endl;
	cout << "\t\t\t\t\t\t\t    | Car Model:                              " << model << endl;
	cout << "\t\t\t\t\t\t\t    | Number of days :                        " << store << endl;
	cout << "\t\t\t\t\t\t\t    | Rent of car per day:                    5500" << endl;
	cout << "\t\t\t\t\t\t\t    | Charges of driver(if included):         3000" << endl;
	cout << "\t\t\t\t\t\t\t    | Advance:                                0" << endl;
	cout << "\t\t\t\t\t\t\t    | Total Rental Amount is:                 " << total << endl;
	cout << "\t\t\t\t\t\t\t    -------------------------------------------------" << endl;
	cout << "\n\t\t\t\t\t\t\t   This is a computer generated invoice and it does not" << endl;
	cout << "\t\t\t\t\t\t\t   require an authorised signture." << endl;
	cout << "\n\t\t\t\t\t\t\t --------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t   You are advised to pay up the amount before due date, " << endl;
	cout << "\t\t\t\t\t\t\t   otherwise penalty fee will be applied" << endl;
	cout << "\t\t\t\t\t\t\t --------------------------------------------------------- \n\n";


	cout << "\n\n\n\n\t\t\t\t\t\t\t Enter 1 if you are a Management person" << endl;
	cout << "\t\t\t\t\t\t\t      & to exit Enter 0: ";
	cin.ignore();
	cin >> a;

	system("CLS");

	if (a == 1)
	{
		management(c, car, model, color);
	}

	else if (a == 0)
	{
		exit(0);
	}

}

void BRV(customer c, string car, int model, string color)
{
	int a, total, store;
	char d;

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                       HONDA BR-V                        \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	ifstream InFile("brv.txt");
	string line;
	while (!InFile.eof())
	{
		cin.ignore();
		getline(InFile, line);
		cout << "\n\t\t\t\t\t\t\t " << line;
	}
	InFile.close();

	cout << "\n\n\t\t\t\t\t\t\t Rent of car per day: 10000 " << endl;
	cout << "\t\t\t\t\t\t\t Charges of driver: 3000 " << endl;
	cout << "\t\t\t\t\t\t\t Enter number of days: ";
	cin >> store;
	cout << endl;

	cout << "\t\t\t\t\t\t\t Want Driver: ( y / n )..?   ";
	cin >> d;

	if (d == 'y')
	{
		total = (store * 10000) + 3000;
	}
	else
	{
		total = store * 10000;
	}

	system("CLS");

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                       CUSTOMER INFO                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	cout << "\t\t\t\t\t\t\t Enter Your Name: ";
	cin.ignore();
	getline(cin, c.name);
	cout << endl;

	cout << "\t\t\t\t\t\t\t Enter National ID: ";
	cin >> c.id;
	cout << endl;

	system("CLS");

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                    CUSTOMER INVOICE                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";
	cout << "\t\t\t\t\t\t\t    -------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t    | Invoice No.:                            " << "#bnb052" << endl;
	cout << "\t\t\t\t\t\t\t    | Customer's Name:                        " << c.name << endl;
	cout << "\t\t\t\t\t\t\t    | Customer's National ID:                 " << c.id << endl;
	cout << "\t\t\t\t\t\t\t    | Car:                                    " << car << endl;
	cout << "\t\t\t\t\t\t\t    | Car Model:                              " << model << endl;
	cout << "\t\t\t\t\t\t\t    | Number of days :                        " << store << endl;
	cout << "\t\t\t\t\t\t\t    | Rent of car per day:                    10000" << endl;
	cout << "\t\t\t\t\t\t\t    | Charges of driver(if included):         3000" << endl;
	cout << "\t\t\t\t\t\t\t    | Advance:                                0" << endl;
	cout << "\t\t\t\t\t\t\t    | Total Rental Amount is:                 " << total << endl;
	cout << "\t\t\t\t\t\t\t    -------------------------------------------------" << endl;
	cout << "\n\t\t\t\t\t\t\t   This is a computer generated invoice and it does not" << endl;
	cout << "\t\t\t\t\t\t\t   require an authorised signture." << endl;
	cout << "\n\t\t\t\t\t\t\t --------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t   You are advised to pay up the amount before due date, " << endl;
	cout << "\t\t\t\t\t\t\t   otherwise penalty fee will be applied" << endl;
	cout << "\t\t\t\t\t\t\t --------------------------------------------------------- \n\n";


	cout << "\n\n\n\n\t\t\t\t\t\t\t Enter 1 if you are a Management person" << endl;
	cout << "\t\t\t\t\t\t\t      & to exit Enter 0: ";
	cin.ignore();
	cin >> a;

	system("CLS");

	if (a == 1)
	{
		management(c, car, model, color);
	}

	else if (a == 0)
	{
		exit(0);
	}
}

void beetle(customer c, string car, int model, string color)
{
	int a, total, store;
	char d;

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                   VOLKSVAGEN BEETLE                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	ifstream InFile("beetle.txt");
	string line;
	while (!InFile.eof())
	{
		cin.ignore();
		getline(InFile, line);
		cout << "\n\t\t\t\t\t\t\t " << line;
	}
	InFile.close();

	cout << "\n\n\t\t\t\t\t\t\t Rent of car per day: 6000 " << endl;
	cout << "\t\t\t\t\t\t\t Charges of driver: 3000 " << endl;
	cout << "\t\t\t\t\t\t\t Enter number of days: ";
	cin >> store;
	cout << endl;

	cout << "\t\t\t\t\t\t\t Want Driver: ( y / n )..?   ";
	cin >> d;

	if (d == 'y')
	{
		total = (store * 6000) + 3000;
	}
	else
	{
		total = store * 6000;
	}

	system("CLS");

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                       CUSTOMER INFO                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

	cout << "\t\t\t\t\t\t\t Enter Your Name: ";
	cin.ignore();
	getline(cin, c.name);
	cout << endl;

	cout << "\t\t\t\t\t\t\t Enter National ID: ";
	cin >> c.id;
	cout << endl;

	system("CLS");

	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                    CUSTOMER INVOICE                     \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";
	cout << "\t\t\t\t\t\t\t    -------------------------------------------------" << endl;
	cout << "\t\t\t\t\t\t\t    | Invoice No.:                            " << "#bnb069" << endl;
	cout << "\t\t\t\t\t\t\t    | Customer's Name:                        " << c.name << endl;
	cout << "\t\t\t\t\t\t\t    | Customer's National ID:                 " << c.id << endl;
	cout << "\t\t\t\t\t\t\t    | Car:                                    " << car << endl;
	cout << "\t\t\t\t\t\t\t    | Car Model:                              " << model << endl;
	cout << "\t\t\t\t\t\t\t    | Number of days :                        " << store << endl;
	cout << "\t\t\t\t\t\t\t    | Rent of car per day:                    6000" << endl;
	cout << "\t\t\t\t\t\t\t    | Charges of driver(if included):         3000" << endl;
	cout << "\t\t\t\t\t\t\t    | Advance:                                0" << endl;
	cout << "\t\t\t\t\t\t\t    | Total Rental Amount is:                 " << total << endl;
	cout << "\t\t\t\t\t\t\t    -------------------------------------------------" << endl;
	cout << "\n\t\t\t\t\t\t\t   This is a computer generated invoice and it does not" << endl;
	cout << "\t\t\t\t\t\t\t   require an authorised signture." << endl;
	cout << "\n\t\t\t\t\t\t\t --------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t   You are advised to pay up the amount before due date, " << endl;
	cout << "\t\t\t\t\t\t\t   otherwise penalty fee will be applied" << endl;
	cout << "\t\t\t\t\t\t\t --------------------------------------------------------- \n\n";


	cout << "\n\n\n\n\t\t\t\t\t\t\t Enter 1 if you are a Management person" << endl;
	cout << "\t\t\t\t\t\t\t      & to exit Enter 0: ";
	cin.ignore();
	cin >> a;

	system("CLS");

	if (a == 1)
	{
		management(c, car, model, color);
	}

	else if (a == 0)
	{
		exit(0);
	}
}

int main() {
	string name1, carcolor, car, x;
	customer c;
	int choice, option;


	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t                     CAR RENTAL SYSTEM                   \n";
	cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
	cout << "\t\t\t\t\t\t\t     Welcome To HAM'S COMPANY, Choose From The Menu      \n\n";

	cout << "\n\t\t\t\t\t\t\t 1) Management  " << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t 2) Customer " << endl;
	cout << endl;
	cout << "\t\t\t\t\t\t\t Select Option: ";
	cin >> option;

	system("CLS");

	if (option == 1)
	{
		string usID, usPass;
		int logAttempt = 1;

		cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n";
		cout << "\t\t\t\t\t\t\t                          LOGIN                          \n";
		cout << "\t\t\t\t\t\t\t ------------------------------------------------------- \n\n";

		while (logAttempt <= 3)
		{
			cout << "\t\t\t\t\t\t\t Enter Your ID: ";
			cin >> usID;
			cout << "\t\t\t\t\t\t\t Enter Password: ";
			cin >> usPass;

			if (usID == "HAM123" && usPass == "12345")
			{
				break;

			}
			else
			{
				logAttempt++;
				cout << "\n\t\t\t\t\t\t\t Invalid ID or Password! Please Try Again.\n\n";

				if (logAttempt > 3)
				{
					system("CLS");
					cout << "\n\n\t\t\t\t\t\t\t TOO MANY LOGIN ATTEMPTS!!!! \n\t\t\t\t\t\t\t Try again after 30 seconds.   ";
					cin >> x;
					exit(0);
				}
			}
		}
		system("CLS");

		cout << "\t\t\t\t\t\t\t ------------------------------------------------------  \n";
		cout << "\t\t\t\t\t\t\t                CUSTOMER INFORMATION                     \n";
		cout << "\t\t\t\t\t\t\t ------------------------------------------------------ \n\n";
		cout << "\n\t\t\t\t\t\t\t No Customer records found. " << endl;


	}

	else if (option == 2)
	{
		cout << "\t\t\t\t\t\t\t ------------------------------------------------------  \n";
		cout << "\t\t\t\t\t\t\t                     CAR SELECTION                       \n";
		cout << "\t\t\t\t\t\t\t ------------------------------------------------------ \n\n";

		string car1 = "Civic", car2 = "Corolla", car3 = "Mira", car4 = "BR-V", car5 = "Beetle";
		int model1 = 2020, model2 = 2019, model3 = 2021, model4 = 2018, model5 = 2001;
		string color1 = "Black", color2 = "Silver", color3 = "White", color4 = "Red";

		cout << "\t\t\t\t\t\t\t 1) " << car1 << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t 2) " << car2 << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t 3) " << car3 << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t 4) " << car4 << endl;
		cout << endl;
		cout << "\t\t\t\t\t\t\t 5) " << car5 << endl;
		cout << endl;

		cout << "\t\t\t\t\t\t\t Select Your Choice: ";
		cin >> choice;

		system("CLS");

		if (choice == 1)
		{
			civic(c, car1, model1, color1);
		}
		else if (choice == 2)
		{
			corolla(c, car2, model3, color3);
		}
		else if (choice == 3)
		{
			mira(c, car3, model4, color3);
		}
		else if (choice == 4)
		{
			BRV(c, car4, model2, color2);
		}
		else if (choice == 5)
		{
			beetle(c, car5, model5, color4);
		}
	}

	 _getch();

} // end of program