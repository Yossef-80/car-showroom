#pragma once
#include<iostream>
#include<string>
#include<list>
using namespace std;

/// vars

class Admin
{
private:
	int ID;
	string adminName;
	int password;
public:
	//setters
	void insertID(int adminID);
	void InsertUserName(string user) ;
	void insertpassword(int pass) ;
	//getters
	int getpassword() ;
	string GetAdminName();
	int getID() ;
	//functions
	void AdminSelection();
	void insert();
	void update();
	void deletefun();
};

