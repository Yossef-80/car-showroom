#pragma once
#include<iostream>
#include"Cars.h"
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
	//setters
	void setProcessID(int processID) ;
	void setCustomerID(int CustomerID) ;
	void setDate(int Date) ;
	void setmoneyAmount(int moneyAmount);
	void setShosenCar(Cars shosenCar) ;
	//getters
	int getProcessID() ;
	int getCustomerID() ;
	int getDate() ;
	int getMoneyAmount() ;
	Cars getShosenCar() ;
};