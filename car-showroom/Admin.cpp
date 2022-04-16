#include<iostream>
#include "Admin.h"
#include"ShowRooms.h"
#include"Cars.h"
#include"Garages.h"
#include"Services.h"
template<class T>
Admin<T>::Admin()
{
	ID = 0;
	password = 0;
}
template<class T>
void Admin<T> ::update(T val,int pos)
{
	int choice;
	cout << "what do you want to update?"/n;
	cout << "1. for garage||2. for showroom||3. for Cars ||4. for services" / n;
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
		cout << "unvaled choice"/n;
	}
}
template<class T>
void Admin<T> ::insert(T val)
{
	int choice;
	cout << "what do you want to update?" / n;
	cout << "1. for garage||2. for showroom||3. for Cars ||4. for services" / n;
	cin >> choice;
	if (choice == 1)
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
		cout << "unvaled choice" / n;
	}
}
template<class T>
void Admin<T> ::deletefun(T val)
{
	int choice;
	cout << "what do you want to update?" / n;
	cout << "1. for garage||2. for showroom||3. for Cars ||4. for services" / n;
	cin >> choice;
	if (choice == 1)
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
		cout << "unvaled choice" / n;
	}
}