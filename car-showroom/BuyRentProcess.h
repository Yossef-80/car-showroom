#include<iostream>
class BuyRentProcess
{
private:
	int processID;
	int CustomerID;
	int date;
	int moneyAmount;
	Cars shosenCar;
public:
	//Constructor
	BuyRentProcess(void);
	//setters
	void setProcessID(int processID) { this->processID = processID; };
	void setCustomerID(int CustomerID) { this->CustomerID = CustomerID; };
	void setDate(int Date) { this->date = date; };
	void setmoneyAmount(int moneyAmount) { this->moneyAmount = moneyAmount; };
	void setShosenCar(Cars shosenCar) { this->shosenCar = shosenCar; };
	//getters
	int getProcessID() { return processID; };
	int getCustomerID() { return CustomerID; };
	int getDate() { return date; };
	int getMoneyAmount() { return moneyAmount; };
	Cars getShosenCar() { return shosenCar; };
};