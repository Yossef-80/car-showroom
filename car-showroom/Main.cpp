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
ShowRooms showRooms;
Cars cars;
Garages garages;
Services services;
list<Garages>garage;
list<Services>service;
list<ShowRooms>showroom;
list<Customer>customers;
int main()
{	int i;
	int choice;
	
	cout << "please select the user --> 1.admin || 2.Customer " << endl;
	cin >> i;
	if (i==1)
	{
		cout << "-----------------Admin SignIN--------------"<<endl;
		cout << "please Enter ID: ";
		int num;
		cin >> num;
		cout << "please Enter Name: ";
		string name;
		cin >> name;
		cout << "please Enter Password : ";
		int pass;
		cin >> pass;
		administratorAccess( num, pass, name);
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
	}
}
void administratorAccess(int num,int pass,string name)
{
	administrator.insertID(num);
	administrator.InsertUserName(name);
	administrator.insertpassword(pass);
	cout << "Welcome " << administrator.GetAdminName() << endl;
	administrator.AdminSelection();
}

