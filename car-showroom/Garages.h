#pragma once
#include<string>
#include<iostream>
class Garages
{
private:
	int ID;
	string name;
	string location;
	int phoneNumber;
	Services listOfServices[15];
public:
	int servicesCounter=0;
	//constructor
	Garages(void) { ID = 0; name = ""; location = "", phoneNumber = 0;  };
	//setters
	void setID(int ID) { this->ID = ID; };
	void setName(string name) { this->name = name; };
	void setLocation(string location) { this->location = location; };
	void setPhoneNumber(int phoneNumber) { this->phoneNumber = phoneNumber; };
	void  setlistOfServices(Services listOfServices) { 
		this->listOfServices[servicesCounter] = listOfServices;
		servicesCounter++;
	};
	//getters
	int getID() { return ID; };
	string getName() { return name; };
	string getLocation() { return location; };
	Services getListOfServices() {
		for (int i = 0; i < servicesCounter; i++)
		{
			return listOfServices[i];
		}
	}
};

