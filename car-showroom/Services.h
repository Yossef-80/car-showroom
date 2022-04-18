#pragma once
#include<iostream>
#include<string>
using namespace std;
class Services
{
private:
	int ID;
	string name;
	float price;
public:
	//constructor

	//setters
	void setID(int ID);
	void setName(string name);
	void setprice(float price);
	//getters
	int getID();
	string getName() ;
	float getPrice();


};

