#include<iostream>
#include "ServiceProcess.h"
#include"Services.h"
//setters
int servicesCounter = 0;
void ServiceProcess::setprocessID(int processID) { this->processID = processID; };
void ServiceProcess::setCustomerId(int customerID) { this->customerID = customerID; };
void ServiceProcess::setDate(int date) { this->date = date; };
void ServiceProcess::setMoneyAmount(float moneyAmount) { this->moneyAmount = moneyAmount; };
void ServiceProcess::setChosenServices(Services chosenServices) {
	this->chosenServices[servicesCounter] = chosenServices;
	servicesCounter++;
};
//getters
int ServiceProcess::getProcessID() { return processID; };
int ServiceProcess::getCustomerID() { return customerID; };
int ServiceProcess::getDate() { return date; };
float ServiceProcess::getMoneyAmount() { return moneyAmount; };
Services ServiceProcess::getChosenServices() {
	for (int i = 0; i < servicesCounter; i++)
	{
		return chosenServices[i];
	}
};