#pragma once
#include<iostream>
#include"Cars.h"
#include<string>

using namespace std;
class ShowRooms
{
private:
	
	int ID;
	string name;
	string location;
	int  phoneNumber;
	Cars  ListOfCars[30];
public :
	int counter=0;
	//constructor
	//setters
	void setID(int id);
	void setName(string name);
	void setLocation(string location);
	void setphoneNumber(int phoneNumber) ;
	void setcarlist(Cars cars) ;
	//getters
	string GetName() ;
	int GetID() ;
	int GetPhoneNum() ;
	string GetLocation() ;
	Cars GetCars();

};
