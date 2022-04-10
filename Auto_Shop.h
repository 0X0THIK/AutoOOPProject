#include "Header.h"
#include "Auto.h"

class Auto_Shop
{
	string name;
	string adress;
	int employees;
	int size;
	Auto* list;

public:
	Auto_Shop(string name, string adress, int employees, int size, Auto* list);
	Auto_Shop();

	string getName();
	void senName(string name);
	string getAdress();
	void senAdress(string adress);
	int getEmployees();
	void senEmployees(int employees);
	int getSizeCars();
	void senSizeCars(int cars);

	~Auto_Shop();
	
	string getInfo();
};