#pragma once
#include<string>
#include<iostream>
class Cars
{
private:
	int ID, price, year;
	string make, installments[30],model;
public:
	Cars(void);
	//getters 
	int getID() { return ID; };
	string getModel() { return model; };
	int getPrice() { return price; };
	int getYear() { return year; };
	string getMake() { return make; };
	string getInstallments() { return installments[30]; };
	//setters
	void setID(int id) { ID = id; };
	void setModel(string model) { this->model = model; };
	void setPrice(int price) { this->price = price; };
	void setYear(int year) { this->year = year; };
	void setMake(string make) { this->make = make; };
	void setInstallments(string installments[30]) { this->installments[30] = installments[30]; };
};

