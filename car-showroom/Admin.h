#pragma once
 template<class T>
class Admin
{
private:
	int ID;
	string adminName;
	int password;
public:
	void insert(T val);
	void update(T val,int pos);
	void deletefun(T val);
	Admin(void);
	void insertID(int adminID) { ID = adminID; };
	void InsertUserName(string user) { adminName=user; };
	void insertpassword(int pass) { password = pass; };
	int getpassword() { return password; };
	string GetAdminName() { return adminName; };
	int getID() { return ID; };
};

