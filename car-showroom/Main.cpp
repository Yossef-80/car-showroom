#include<iostream>
#include "Admin.h"
#include"ShowRooms.h"
#include"Cars.h"
#include"Garages.h"
#include"Services.h"
#include"Customer.h"
#include<string>
using namespace std;
Admin administrator;
Customer customer;

void administratorAccess();
void customerAccess();
int main()
{	int i;
	int choice;
	while (true) {
		cout << "please select the user --> 1.admin || 2.Customer || 3.Exit" << endl;
		cin >> i;
		if (i == 1)
		{

			administratorAccess();
		}
		else if (i == 2)
		{
			/*cout << "-------------Customer--------------" << endl;
			cout << "1.login || 2.registration" << endl;
			cin >> choice;
			if (choice == 1)
			{
				customer.CustomerLogin();
			}
			else if (choice == 2)
			{
				customer.CustomerRegister();

			}*/
			customerAccess();

		}
		else if (i==3)
		{
			break;
		}
		else
		{
			cout << "wrong selection .. please try again"<<endl;
			continue;
		}
		
	}
	return 0;
}
void administratorAccess()
{
	cout << "-----------------Admin SignIN--------------" << endl;
	cout << "please Enter ID: ";
	int num;
	cin >> num;
	cout << "please Enter Name: ";
	string name;
	cin >> name;
	cout << "please Enter Password : ";
	int pass;
	cin >> pass;

	administrator.insertID(num);
	administrator.InsertUserName(name);
	administrator.insertpassword(pass);
	cout << "Welcome " << administrator.GetAdminName() << endl;
	administrator.AdminSelection();
}
void customerAccess() {
	while (true)
	{


		cout << "Welcome " << customer.getusername() << endl;
		cout << "please select what do you want to do" << endl;
		cout << "1. register" << endl;
		cout << "2. login" << endl;
		cout << "3.Exit from customer mode"<<endl;
		int selection;
		cin >> selection;
		if (selection==1)
		{
			customer.CustomerRegister();
		}
		else if (selection==2)
		{
			customer.CustomerLogin();
		}
		else if (selection==3)
		{
			break;
		}
		cin >> selection;
		cout << "1.search for a car" << endl;
		cout << "2.view data of showroom or garage" << endl;
		cout << "3.buy or rent a car" << endl;
		customer.customerSelect(selection);

	}
}

//ShowRooms showRooms;
//Cars cars;
//Garages garages;
//Services services;
//list<Garages>garage;
//list<Services>service;
//list<ShowRooms>showroom;
//list<Customer>customers;