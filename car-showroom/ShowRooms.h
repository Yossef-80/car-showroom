#include"Cars.h"
#include<string>
using namespace std;
class ShowRooms
{
private:
	int counter=0;
	int ID;
	string name;
	string location;
	int  phoneNumber;
	Cars  ListOfCars[30];
public :
	//constructor
	ShowRooms(void);
	//setters
	void setID(int id) { ID = id; };
	void setName(string name) { this->name = name; };
	void setLocation(string location) { this->location = location; };
	void setphoneNumber(int phoneNumber) { this->phoneNumber = phoneNumber; };
	void setcarlist(Cars cars) 
	{
		ListOfCars[counter] = cars; 
		counter++;
	};
	//getters
	string GetName() { return name; };
	int GetID() { return ID; };
	int GetPhoneNum() {return phoneNumber;};
	string GetLocation() { return location; };
	Cars GetCars() {
		int i = 0;
		for (size_t i = 0; i <= counter; i++)
		{
			return ListOfCars[i];
		}
		 
	};

};
