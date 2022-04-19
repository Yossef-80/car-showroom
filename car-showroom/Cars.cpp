#include<iostream>
#include "Cars.h"
/*#include "Admin.h"
#include"Garages.h"
#include"Services.h"*/
#include<string>
using namespace std;

//getters
int Cars::getID() { return ID; };
string Cars::getModel() { return model; };
int Cars::getPrice() { return price; };
int Cars::getYear() { return year; };
string Cars::getMake() { return make; };
int Cars::getInstallments() { return installments; };
/*string Cars::getInstallments() {
	for (int i = 0; i < installcounter; i++)
	{
		return installments[i];
	}
};*/


//setters
void Cars::setID(int id) { ID = id; };
void Cars::setModel(string model) { this->model = model; };
void Cars::setPrice(int price) { this->price = price; };
void Cars::setYear(int year) { this->year = year; };
void Cars::setMake(string make) { this->make = make; };
/*void Cars::setInstallments(int installments) {
	this->installments[installcounter] = installments;
	installcounter++;
};*/
void Cars::setInstallments(int installments)
{
	this->installments = installments;
}
