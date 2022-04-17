#include<iostream>
class ServiceProcess
{
private:
	
	int processID;
	int customerID;
	int date;
	float moneyAmount;
	Services chosenServices[10];
public:
	//setters
	int servicesCounter = 0;
	void setprocessID(int processID) { this->processID = processID; };
	void setCustomerId(int customerID) { this->customerID = customerID; };
	void setDate(int date) { this->date = date; };
	void setMoneyAmount(float moneyAmount) { this->moneyAmount = moneyAmount; };
	void setChosenServices(Services chosenServices) {
		this->chosenServices[servicesCounter] = chosenServices;
		servicesCounter++;
	};
	//getters
	int getProcessID() { return processID; };
	int getCustomerID() { return customerID; };
	int getDate() { return date; };
	float getMoneyAmount() { return moneyAmount; };
	Services getChosenServices() {
		for (int i = 0; i < servicesCounter; i++)
		{
			return chosenServices[i];
		}
	};
};