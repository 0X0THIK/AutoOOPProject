#include "Header.h"
#include "AutoShop.h"
class Manager
{
private:
	string name;
public:
	Manager();
	Manager(string name);
	double calculateAvgPrice(AutoShop AutoShop);
};