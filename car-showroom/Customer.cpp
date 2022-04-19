#include<iostream>
#include<fstream>
#include<string>
#include "Customer.h"

using namespace std;
//setters
void Customer::CustomerID(int custId) { ID = custId; };
void Customer::customerUpdatePassword(int pass) { password = pass; };
void Customer::setcustomerName(string name) { this->userName = name; };
//getters
string Customer::getusername() { return userName; };
int Customer::getcustomerID() { return ID; };
int Customer::getcustomerpass() { return password; };

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
void Customer::CustomerLogin()
{
	int id;
	int pass;
	cout << "-------------LOGIN------------" << endl;
	cout << "please enter the user id:";
	cin >> id;
	CustomerID(id);
	cout << "please enter the password:";
	cin >> pass;
	customerUpdatePassword(pass);

};
void Customer::customerSelect(int selection)
{
	this->customerSelection = selection;

	if (customerSelection == 1)
	{
		CustomerRegister();
	}
	else if (customerSelection == 2)
	{
		CustomerLogin();
	}
	else if (customerSelection == 3)
	{

	}
	else if (customerSelection == 4)
	{

	}
	else if (customerSelection == 5)
	{

	}
};
