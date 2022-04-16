#include<iostream>
#include<string>
#include"Cars.h"
using namespace std;
class ShowRooms
{
private:
	int ID;
	string name;
	string location;
	int  phoneNumber;
	Cars  ListOfCars;
public :
	ShowRooms(void);
	void setID(int id);
	void setName(string name);
	void setLocation(string location);
	void setphoneNumber(int phone);
	void setcarlist(Cars cars);
	string GetName() { return name; };
	int GetID() { return ID; };
	int GetPhoneNum() {return phoneNumber;};
	string GetLocation() { return location; };
	Cars GetCars() {
		return ListOfCars[30];};

};
