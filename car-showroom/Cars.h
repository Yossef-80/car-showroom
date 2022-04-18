#pragma once
#include<iostream>
#include<string>
using namespace std;
class Cars
{
private:
	int ID, price, year;
	string make, installments[30],model;
	
public:
	int installcounter=0;
	//getters 
	int getID() ;
	string getModel();
	int getPrice() ;
	int getYear() ;
	string getMake() ;
	string getInstallments();
	//setters
	void setID(int id);
	void setModel(string model) ;
	void setPrice(int price) ;
	void setYear(int year);
	void setMake(string make);
	void setInstallments(string installments) ;
};

