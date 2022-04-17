#include<string>

class Admin
{
private:
	int ID;
	string adminName;
	int password;
public:
	void insert();
	void update();
	void deletefun();
	Admin(void);
	void insertID(int adminID) { ID = adminID; };
	void InsertUserName(string user) { adminName=user; };
	void insertpassword(int pass) { password = pass; };
	int getpassword() { return password; };
	string GetAdminName() { return adminName; };
	int getID() { return ID; };
	void AdminSelection();
};

