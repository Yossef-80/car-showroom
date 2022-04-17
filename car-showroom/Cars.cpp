#include "Cars.h"
#include<iostream>
#include "Admin.h"
#include"ShowRooms.h"
#include"Garages.h"
#include"Services.h"
Cars::Cars()
{
	ID = 0;
	installments[30] = {""};
	make = "";
	year = 0;
	model = 0.0;
	price = 0;
}