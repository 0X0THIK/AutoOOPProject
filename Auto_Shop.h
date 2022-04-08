#include "Header.h"

class Auto_Shop
{
	string name;
	string adress;
	int employees;
	int cars;

public:
	Auto_Shop(string name, string adress, int employees, int cars);
	Auto_Shop();

	string getName();
	void senName(string name);
	string getAdress();
	void senAdress(string adress);
	int getEmployees();
	void senEmployees(int employees);
	int getCars();
	void senCars(int cars);

	~Auto_Shop();
	
	string getInfo();
};