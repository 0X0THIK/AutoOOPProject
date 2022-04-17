#include "Header.h"
#include "Auto.h"

class AutoShop
{
	friend class Manager;

private:
	string name;
	string adress;
	int employees;
	int size;
	Auto* list;

public:
	AutoShop(string name, string adress, int employees, int size, Auto* list);
	AutoShop();

	string getName();
	void senName(string name);
	string getAdress();
	void senAdress(string adress);
	int getEmployees();
	void senEmployees(int employees);
	int getSizeCars();
	void senSizeCars(int cars);
	Auto get(int index);
	void set(int index, Auto avto);

	~AutoShop();
	
	string getInfo();
};