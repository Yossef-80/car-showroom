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
		//supposed to write in customer file
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
	//supposed to read from custromer file to check whether he is regestred
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
	//cout << "1.search for a car" << endl;
	//cout << "2.view data of showroom or garage" << endl;
	//cout << "3.buy or rent a car" << endl;
	this->customerSelection = selection;
	 if (customerSelection == 1)
	{
		 //supposed to read from the car list
		 //1.read from the car file and store data into car linked list
		 //2.search with function getname in for loop then display the data of the car
	}
	else if (customerSelection == 2)
	{
		 //supposed to display the linked list of garage or showroom
		 //1.store data from showroom/garage file into list of showroom/garage
		 //2.for loop on the list to display
	}
	else if (customerSelection == 3)
	{
		 //show buy or rent car from show room

	}
};
