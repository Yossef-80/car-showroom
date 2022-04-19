#include<iostream>
#include<string>
#include<list>
#include "Admin.h"
#include"ShowRooms.h"
#include"Cars.h"
#include"Garages.h"
#include"Services.h"

using namespace std;
//vars
int choice;
int Id, servnum, phonenumber, price, year, installments, carnum;
string name, location, make, model;
list<Garages> garagelist;
list<Services>serviceslist;
list<ShowRooms>showRoomsList;
list<Cars> carslist;
bool in= true;
char choose;
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
	
	cout << "what do you want to update?"<<endl;
	cout << "1. for garage||2. for showroom||3. for Cars ||4. for services" <<endl;
	cin >> choice;
	/// garage
	
		if (choice == 1)
		{

			Garages garage;
			cout << "please Enter Garage ID: ";
			cin >> Id;

			for (list<Garages>::iterator it = garagelist.begin(); it != garagelist.end(); it++)
			{
				if (it->getID() == Id)
				{
					cout << "what do you want to update?" << endl;
					cout << "1. Name||2.location||3. services ";
					cin >> choice;
					if (choice == 1)
					{
						cout << "set new name: ";
						cin >> name;
						it->setName(name);
					}
					else if (choice == 2)
					{
						cout << "set new location: ";
						cin >> location;
						it->setName(location);
					}
					else if (choice == 3)
					{
						cout << "set number new services : ";

						cin >> servnum;
						if (servnum > 0)
						{
							for (int i = 0; i < servnum; i++)
							{
								Services serv;
								cout << " service " << i + 1 << ": ";
								cout << "please Enter service ID: ";
								cin >> ID;
								serv.setID(ID);
								cout << "please Enter service Name: ";
								cin >> name;
								serv.setName(name);
								cout << "please Enter service price: ";
								cin >> price;
								serv.setprice(price);
								it->setlistOfServices(serv);
							}
						}
					}
				}

			}
		}
		//showroom
		else if (choice == 2)
		{
			ShowRooms showroom;
			cout << "please Enter showroom ID: ";
			cin >> Id;
			for (list<ShowRooms>::iterator it = showRoomsList.begin(); it != showRoomsList.end(); it++)
			{
				if (it->GetID() == Id)
				{
					cout << "What do you want to update?" << endl;
					cout << "1.location|| 2.name|| 3. phone number ||4. carlist";
					cin >> choice;
					if (choice == 1)
					{
						cout << "enter the new location: ";
						cin >> location;
						it->setLocation(location);
					}
					else if (choice == 2)
					{
						cout << "enter the new  name: ";
						cin >> name;
						it->setName(name);
					}
					else if (choice == 3)
					{
						cout << "enter the new phone number: ";
						cin >> phonenumber;
						it->setphoneNumber(phonenumber);
					}
					else if (choice == 4)
					{
						cout << "enter the number of cars: ";
						cin >> carnum;
						if (carnum > 0)
						{
							for (int i = 0; i < carnum; i++)
							{
								Cars cars;
								cout << "enter car " << i + 1 << endl;
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
								it->setcarlist(cars);
							}


						}

					}



				}
			}
		}
		//cars
		else if (choice == 3)
		{

		}
		//services
		else if (choice == 4)
		{

		}
		else
		{
			cout << "unvaled choice" << endl;
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
		cin >> Id;
		garage.setID(Id);
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
				cin >> Id;
				serv.setID(Id);
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
		cin >> Id;
		showroom.setID(Id);
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
			for (int i = 0; i < servnum; i++)
			{
				Cars cars;
				cout << "enter car "<<i+1 << endl;
				cout << "ID:";
				cin >> Id;	
				cars.setID(Id);
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
		for (int i = 0; i < carnum; i++)
		{
			Cars cars;
			cout << "enter car 1" << endl;
			cout << "ID:";
			cin >> Id;
			cars.setID(Id);
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
		for (int i = 0; i < servnum; i++)
		{
			Services service;
			cout << " service" << i + 1;
			cout << "service id : ";
			cin >> Id;
			service.setID(Id);
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
	while (true)
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
		cout << "another perform? y/n : ";
		cin >> choose;
		if (choose=='y')
		{
			continue;
		}
		else if (choose=='n')
		{
			break;
		}
	}
}
