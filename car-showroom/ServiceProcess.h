#pragma once
#include<iostream>
#include"Services.h"
class ServiceProcess
{
private:
	
	int processID;
	int customerID;
	int date;
	float moneyAmount;
	Services chosenServices[10];
public:
	//setters
	int servicesCounter = 0;
	void setprocessID(int processID);
	void setCustomerId(int customerID) ;
	void setDate(int date) ;
	void setMoneyAmount(float moneyAmount) ;
	void setChosenServices(Services chosenServices) ;
	//getters
	int getProcessID() ;
	int getCustomerID();
	int getDate() ;
	float getMoneyAmount() ;
	Services getChosenServices() ;
};