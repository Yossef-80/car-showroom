#include "Customer.h"
#include"ShowRooms.h"
#include<fstream>
#include<string>
Customer::Customer()
{
	this->password = 0;
	this->ID = 0;
	this->userName="";
}
void Customer::setcustomerName(string name)
{
	userName = name;
}
void Customer::CustomerRegister()
{
	int id;
	int pass;
	string name;
	cout << "-------------REGISTER------------" <<endl;
	cout << "please enter the user ID:";
	cin >> id;
	cout << "please enter the user name:";
	cin >> name;
	setcustomerName(name);
	cout << "please enter the password:";
	cin >> pass;
	customerUpdatePassword(pass);
	ofstream CustomerFile("customers.txt");
	CustomerFile << id<<"|"<<pass<<"|"<<endl;
	CustomerFile.close();
}
void Customer::customerUpdatePassword(int pass)
{
	this->password = pass;
}

void Customer::CustomerID(int custID)
{
	this->ID = custID;
}
void Customer::CustomerLogin()
{
	int id;
	int pass;
	cout << "-------------LOGIN------------" << endl;
	cout << "please enter the user name:";
	cin >> id;
	CustomerID(id);
	cout << "please enter the password:";
	cin >> pass;
	customerUpdatePassword(pass);
	
}
void Customer::customerSelect(int selection)
{
	this->customerSelection = selection;
	cout << "please select what do you want to do"<<endl;
	cout << "1. register"<<endl;
	cout << "2. login" << endl;
	cout << "3.search for a car" << endl;
	cout << "4.view data of showroom or garage" << endl;
	cout << "5.buy or rent a car" << endl;
	if (customerSelection==1)
	{
		CustomerRegister();
	}
	if (customerSelection == 2)
	{

	}
	if (customerSelection == 3)
	{

	}
	if (customerSelection == 4)
	{

	}
	if (customerSelection ==5)
	{

	}
}
