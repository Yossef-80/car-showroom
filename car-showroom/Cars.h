#include<string>
#include<iostream>
class Cars
{
private:
	int ID, price, year;
	string make, installments[30],model;
	
public:
	int installcounter=0;
	Cars(void);
	//getters 
	int getID() { return ID; };
	string getModel() { return model; };
	int getPrice() { return price; };
	int getYear() { return year; };
	string getMake() { return make; };
	string getInstallments() { 
		for (int i = 0; i < installcounter; i++)
		{
			return installments[i];
		}
	 };
	//setters
	void setID(int id) { ID = id; };
	void setModel(string model) { this->model = model; };
	void setPrice(int price) { this->price = price; };
	void setYear(int year) { this->year = year; };
	void setMake(string make) { this->make = make; };
	void setInstallments(string installments) {
		this->installments[installcounter] = installments;
		installcounter++;
	};
};

