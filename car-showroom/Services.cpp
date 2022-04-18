#include "Services.h"
#include<string>
using namespace std;
void Services::setID(int ID) { this->ID = ID; };
void Services::setName(string name) { this->name = name; };
void Services::setprice(float price) { this->price = price; };
//getters
int Services::getID() { return ID; };
string Services::getName() { return name; };
float Services::getPrice() { return price; };
