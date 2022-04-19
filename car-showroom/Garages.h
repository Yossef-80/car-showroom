#pragma once
#include<iostream>
#include"Services.h"
#include<string>
#include<list>

using namespace std;
class Garages
{
private:
	int ID;
	string name;
	string location;
	int phoneNumber;
	Services listOfServices[15];
public:
	
	int servicesCounter = 0;
	//constructor
	//setters
	void setID(int ID);
	void setName(string name);
	void setLocation(string location);
		
		void setPhoneNumber(int phoneNumber);
		void  setlistOfServices(Services listOfServices);
		//getters
		int getID();
		string getName();
		string getLocation();
		Services getListOfServices();
};
