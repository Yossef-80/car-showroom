#pragma once
#include<iostream>
#include<string>
using namespace std;
class Customer
{
private:
	int ID;
	string userName;
	int password;
	int customerSelection;
public:
	//constructor

	//setters
	void CustomerID(int custId);
	void customerUpdatePassword(int pass);
	void customerSelect(int selection);
	void setcustomerName(string name);
	//getters
	string  getusername();
	int getcustomerID() ;
	int getcustomerpass() ;
	
	void CustomerLogin();
	void CustomerRegister();
};

