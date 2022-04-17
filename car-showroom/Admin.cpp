#include<iostream>
#include "Admin.h"
#include"ShowRooms.h"
#include"Cars.h"
#include"Garages.h"
#include"Services.h"
#include<string>
using namespace std;
void Admin::InsertUserName(string user) { adminName = user; }
void Admin::insertID(int adminID) { ID = adminID; }

void Admin::insertpassword(int pass) { password = pass; }
Admin::Admin()
{
	ID = 0;
	password = 0;
	adminName = "";
}
void Admin::update()
{
	int choice;
	cout << "what do you want to update?"<<endl;
	cout << "1. for garage||2. for showroom||3. for Cars ||4. for services" <<endl;
	cin >> choice;
	if (choice==1)
	{
		
	}
	else if (choice == 2)
	{

	}
	else if (choice == 3)
	{

	}
	else if (choice == 4)
	{

	}
	else
	{
		cout << "unvaled choice"<<endl;
	}
}
void Admin ::insert()
{
	int choice;
	cout << "what do you want to insert?"<<endl;
	cout << "1. for garage||2. for showroom||3. for Cars ||4. for services" <<endl;
	cin >> choice;
	if (choice == 1)
	{

	}
	else if (choice == 2)
	{

	}
	else if (choice == 3)
	{

	}
	else if (choice == 4)
	{

	}
	else
	{
		cout << "unvaled choice" <<endl;
	}
}
void Admin ::deletefun()
{
	int choice;
	int deletedItem;
	
	while (true)
	{
		cout << "what do you want to delete from?" <<endl;
		cout << "1. for garage||2. for showroom||3. for Cars ||4. for services"<<endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "please Enter garage id" << endl;
			cin >> deletedItem;
			cout << "do you want to delete the garage? y/n";
			char sel;
			cin >> sel;
			if (sel == 'y')
			{

			}
			else
			{
				cout << "do you want to delete a car? y/n" << endl;
				char sel2;
				cin >> sel2;
				if (sel2=='n')
				{
					break;
				}
			}
		}

		else if (choice == 2)
		{
			cout << "please Enter showroom ID" << endl;
		}
		else if (choice == 3)
		{
			cout << "please Enter car ID" << endl;
		}
		else if (choice == 4)
		{
			cout << "please Enter service ID" << endl;
		}
		else
		{
			cout << "unvaled choice" << endl;
		}
	}
}
void Admin::AdminSelection()
{
	int selection;
	cout << "What Do You Want To Perform?" << endl;
	cout << "1. insert || 2. update|| 3. delete " << endl;
	cin >> selection;
	if (selection == 1)
	{
		insert();
	}
	if (selection == 2)
	{
		update();
	}
	if (selection == 3)
	{
		deletefun();
	}
}
