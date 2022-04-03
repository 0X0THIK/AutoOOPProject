#include "Header.h"

class Auto_Shop
{
	string name;
	string adress;
	int floors;
	int entrances;
	int flats;

public:
	Auto_Shop(string name, string adress, int floors, int entrances, int flats);
	Auto_Shop();

	string getName();
	void senName(string name);
	string getAdress();
	void senAdress(string adress);
	int getFloors();
	void senFloors(int floors);
	int getEntrances();
	void senEntrances(int entrances);
	int getFlats();
	void senFlats(int flats);

	~Auto_Shop();
	
	string getInfo();
};