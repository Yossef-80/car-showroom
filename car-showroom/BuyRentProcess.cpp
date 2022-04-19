#include<iostream>
#include<string>
#include "BuyRentProcess.h"
#include"Cars.h"


//setters
void BuyRentProcess:: setProcessID(int processID) { this->processID = processID; };
void BuyRentProcess::setCustomerID(int CustomerID) { this->CustomerID = CustomerID; };
void BuyRentProcess::setDate(int Date) { this->date = date; };
void BuyRentProcess::setmoneyAmount(int moneyAmount) { this->moneyAmount = moneyAmount; };
void BuyRentProcess::setShosenCar(Cars shosenCar) { this->shosenCar = shosenCar; };
//getters
int  BuyRentProcess::getProcessID() { return processID; };
int  BuyRentProcess::getCustomerID() { return CustomerID; };
int  BuyRentProcess::getDate() { return date; };
int BuyRentProcess::getMoneyAmount() { return moneyAmount; };
Cars  BuyRentProcess::getShosenCar() { return shosenCar; };