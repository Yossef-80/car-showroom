
#include<string>
#include<iostream>
class Services
{
private:
	int ID;
	string name;
	float price;
public:
	//constructor
	Services(void);
	//setters
	void setID(int ID) { this->ID = ID; };
	void setName(string name) { this->name = name; };
	void setprice(float price) { this->price = price; };
	//getters
	int getID() { return ID; };
	string getName() { return name; };
	float getPrice() { return price; };


};

