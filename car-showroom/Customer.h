#pragma once
#include<string>
#include<iostream>
class Customer
{
private:
	int ID;
	string userName;
	int password;
	int customerSelection;
public:
	//constructor
	Customer(void);
	//setters
	void CustomerID(int custId);
	void customerUpdatePassword(int pass);
	void customerSelect(int selection);
	void setcustomerName(string name);
	//getters
	string  getusername() { return userName; };
	int getcustomerID() { return ID; };
	int getcustomerpass() { return password; };
	
	void CustomerLogin();
	void CustomerRegister();
};

