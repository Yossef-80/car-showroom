#include<iostream>
#include "Admin.h"
#include"ShowRooms.h"
#include"Cars.h"
#include"Garages.h"
#include"Services.h"
#include<string>
#include<list>
using namespace std;
//vars
int ID, servnum, phonenumber, price, year, installments, carnum;
string name, location, make, model;
list<Garages> garagelist;
list<ShowRooms>showRoomsList;
list<Cars> carslist;
list<Services>serviceslist;
//funcs
void Admin::InsertUserName(string user) { adminName = user; };
void Admin::insertID(int adminID) { ID = adminID; };
void Admin::insertpassword(int pass) { password = pass; };
//getters
int Admin::getpassword() { return password; };
string Admin::GetAdminName() { return adminName; };
int Admin::getID() { return ID; };
/////////////////////////////////////////update////////////////////////////////////
void Admin::update()
{
	int choice;
	cout << "what do you want to update?"<<endl;
	cout << "1. for garage||2. for showroom||3. for Cars ||4. for services" <<endl;
	cin >> choice;
	if (choice==1)
	{
		
	}
	else if (choice == 2)
	{

	}
	else if (choice == 3)
	{

	}
	else if (choice == 4)
	{

	}
	else
	{
		cout << "unvaled choice"<<endl;
	}
}
////////////////////////////////////////////////////////insert/////////////////////////
void Admin ::insert()
{
	int choice;
	cout << "what do you want to insert?"<<endl;
	cout << "1. for garage||2. for showroom||3. for Cars ||4. for services" <<endl;
	cin >> choice;
	//garage
	if (choice == 1)
	{
		Garages garage;
		cout << "please Enter Garage ID: ";
		cin >> ID;
		garage.setID(ID);
		cout << "please Enter Garage Name: ";
		cin >> name;
		garage.setName(name);
		cout << "please Enter Garage location: ";
		cin >> location;
		garage.setLocation(location);
		cout << "please Enter the services do you want to assign in : ";
		cin >> servnum;
		if (servnum>0)
		{
			for (int i = 0; i < servnum; i++)
			{
				Services serv;
				cout << " service " << i+1 << ": ";
				cout << "please Enter service ID: ";
				cin >> ID;
				serv.setID(ID);
				cout << "please Enter service Name: ";
				cin >> name;
				serv.setName(name);
				cout << "please Enter service price: ";
				cin >> price;
				serv.setprice(price);
				garage.setlistOfServices(serv);
			}
		}
		garagelist.push_back(garage);
		
		
	}
	//showroom
	else if (choice == 2)
	{
		ShowRooms showroom;
		
		cout << "please Enter ShowRoom ID: ";
		cin >> ID;
		showroom.setID(ID);
		cout << "please Enter Garage Name: ";
		cin >> name;
		showroom.setName(name);
		cout << "please Enter Garage location: ";
		cin >> location;
		showroom.setLocation(location);
		cout << "please Enter phone Number : ";
		cin >> phonenumber;
		showroom.setphoneNumber(phonenumber);
		cout << "enter the number of car do you want to assign: ";
	
		cin >> servnum;
		if (servnum > 0)
		{
			for (int i = 0; i <= servnum; i++)
			{
				Cars cars;
				cout << "enter car "<<i+1 << endl;
				cout << "ID:";
				cin >> ID;	
				cars.setID(ID);
				cout << "make: ";
				cin >> make;
				cars.setMake(make);
				cout << "Model: ";
				cin >> model;
				cars.setModel(model);
				cout << "Year : ";
				cin >> year;
				cars.setYear(year);
				cout << "price: ";
				cin >> price;
				cars.setPrice(price);
				cout << "installments:";
					cin >> installments;
				cars.setInstallments(installments);
				showroom.setcarlist(cars);
			}
			showRoomsList.push_back(showroom);
			
		}
	}
	/// /cars
	else if (choice == 3)
	{
		cout << "Enter the number of cars do you want to assign: ";
		cin >> carnum;
		for (int i = 0; i <= carnum; i++)
		{
			Cars cars;
			cout << "enter car 1" << endl;
			cout << "ID:";
			cin >> ID;
			cars.setID(ID);
			cout << "make: ";
			cin >> make;
			cars.setMake(make);
			cout << "Model: ";
			cin >> model;
			cars.setModel(model);
			cout << "Year : ";
			cin >> year;
			cars.setYear(year);
			cout << "price: ";
			cin >> price;
			cars.setPrice(price);
			cout << "installments:";
			cin >> installments;
			cars.setInstallments(installments);
			carslist.push_back(cars);
		}
	}

	else if (choice == 4)
	{
		cout << "Enter the number of services do you want to insert: ";
		cin >> servnum;
		for (int i = 0; i <= servnum; i++)
		{
			Services service;
			cout << " service" << i + 1;
			cout << "service id : ";
			cin >> ID;
			service.setID(ID);
			cout << "Service name: ";
			cin >> name;
			service.setName(name);
			cout << "service : ";
			cin >> price;
			service.setprice(price);
			serviceslist.push_back(service);

		}
	}
	else
	{
		cout << "invalid choice" <<endl;
	}
}
//////////////////////////////////////deletion/////////////////////////
void Admin ::deletefun()
{
	int choice;
	int deletedItem;
	
	while (true)
	{
		cout << "what do you want to delete from?" <<endl;
		cout << "1. for garage||2. for showroom||3. for Cars ||4. for services"<<endl;
		cin >> choice;
		if (choice == 1)
		{
			cout << "please Enter garage id" << endl;
			cin >> deletedItem;
			cout << "do you want to delete the garage? y/n";
			char sel;
			cin >> sel;
			if (sel == 'y')
			{

			}
			else
			{
				cout << "do you want to delete a car? y/n" << endl;
				char sel2;
				cin >> sel2;
				if (sel2=='n')
				{
					break;
				}
			}
		}

		else if (choice == 2)
		{
			cout << "please Enter showroom ID" << endl;
		}
		else if (choice == 3)
		{
			cout << "please Enter car ID" << endl;
		}
		else if (choice == 4)
		{
			cout << "please Enter service ID" << endl;
		}
		else
		{
			cout << "unvaled choice" << endl;
		}
	}
}
/// ////////function
void Admin::AdminSelection()
{
	int selection;
	cout << "What Do You Want To Perform?" << endl;
	cout << "1. insert || 2. update|| 3. delete " << endl;
	cin >> selection;
	if (selection == 1)
	{
		insert();
	}
	if (selection == 2)
	{
		update();
	}
	if (selection == 3)
	{
		deletefun();
	}
}
