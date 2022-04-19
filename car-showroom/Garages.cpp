#include<iostream>
#include "Garages.h"
#include"Services.h"
#include<string>
#include<list>
using namespace std;
//setters
void Garages::setID(int ID) { this->ID = ID; };
void Garages::setName(string name) { this->name = name; };
void Garages::setLocation(string location) { this->location = location; };
void Garages::setPhoneNumber(int phoneNumber) { this->phoneNumber = phoneNumber; };
void  Garages::setlistOfServices(Services listOfServices)
{
	this->listOfServices[servicesCounter] = listOfServices;
	servicesCounter++;
};
//getters
int Garages::getID() { return ID; };
string Garages::getName() { return name; };
string Garages::getLocation() { return location; };
Services Garages::getListOfServices() {
	for (int i = 0; i < servicesCounter; i++)
	{
		return listOfServices[i];
	}
}