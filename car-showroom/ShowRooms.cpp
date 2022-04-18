
#include<iostream>
#include "ShowRooms.h"
#include"Cars.h"
#include<string>
//setters
void ShowRooms::setID(int id) { ID = id; };
void ShowRooms::setName(string name) { this->name = name; };
void ShowRooms::setLocation(string location) { this->location = location; };
void ShowRooms::setphoneNumber(int phoneNumber) { this->phoneNumber = phoneNumber; };
void ShowRooms::setcarlist(Cars cars)
{
	ListOfCars[counter] = cars;
	counter++;
};
//getters
string ShowRooms::GetName() { return name; };
int ShowRooms::GetID() { return ID; };
int ShowRooms::GetPhoneNum() { return phoneNumber; };
string ShowRooms::GetLocation() { return location; };
Cars ShowRooms::GetCars() {
	int i = 0;
	for (size_t i = 0; i <= counter; i++)
	{
		return ListOfCars[i];
	}

};