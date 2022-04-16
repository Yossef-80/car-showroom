#pragma once
class Customer
{
private:
	int ID;
	string userName;
	int password;
	int customerSelection;
public:
	Customer(void);
	void CustomerID(int custId);

	void customerUpdatePassword(int pass);
	void customerSelect(int selection);
	string  getusername() { return userName; };
	int getcustomerID() { return ID; };
	int getcustomerpass() { return password; };
	void CustomerRegister();
	void CustomerLogin();
};

