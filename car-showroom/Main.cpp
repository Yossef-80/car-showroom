#include<iostream>
#include "Admin.h"
#include"ShowRooms.h"
#include"Cars.h"
#include"Garages.h"
#include"Services.h"
#include"Customer.h"
#include<list>
#include<string>
using namespace std;
Admin administrator;
Customer customer;
//ShowRooms showRooms;
//Cars cars;
//Garages garages;
//Services services;
//list<Garages>garage;
//list<Services>service;
//list<ShowRooms>showroom;
//list<Customer>customers;
void administratorAccess();
void customerAccess();
int main()
{	int i;
	int choice;
	cout << "please select the user --> 1.admin || 2.Customer " << endl;
	cin >> i;
	if (i==1)
	{
		
		administratorAccess();
	}
	else if (i==2)
	{	
		cout << "-------------Customer--------------" << endl;
		cout << "1.login || 2.registration" << endl;
		cin >> choice;
		if (choice==1)
		{	
			customer.CustomerLogin();
		}
		else if (choice==2)
		{
			customer.CustomerRegister();

		}
		customerAccess();

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
	cout << "Welcome " << customer.getusername()<<endl;
	cout << "please select what do you want to do" << endl;
	cout << "1. register" << endl;
	cout << "2. login" << endl;
	cout << "3.search for a car" << endl;
	cout << "4.view data of showroom or garage" << endl;
	cout << "5.buy or rent a car" << endl;
	int selection;
	cin >> selection;
	customer.customerSelect(selection);
}

