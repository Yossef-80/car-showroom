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
int main()
{	int i;
	
	Admin administrator;
	Customer customer;
	ShowRooms showRooms;
	Cars cars;
	Garages garages;
	Services services;
	cout << "please select the user --> 1.admin || 2.Customer " << endl;
	cin >> i;
	if (i==1)
	{
		cout << "-----------------SignIN--------------"<<endl;
		cout << "please Enter Admin ID: ";
		int num;
		cin >> num;
		administrator.insertID(num);
		cout << "please Enter admin Name: ";
		string name;
		cin >> name;
		administrator.InsertUserName(name);
		cout << "please Enter Password : ";
		int pass;
		cin >> pass;
		administrator.insertpassword(pass);

	}
}
