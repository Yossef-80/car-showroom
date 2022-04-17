#include<string>
#include<iostream>
class Admin
{
private:
	int ID;
	string adminName;
	int password;
public:
	//constructor
	Admin(void);
	//setters
	void insertID(int adminID);
	void InsertUserName(string user) ;
	void insertpassword(int pass) ;
	//getters
	int getpassword() { return password; };
	string GetAdminName() { return adminName; };
	int getID() { return ID; };
	//functions
	void AdminSelection();
	void insert();
	void update();
	void deletefun();
};

