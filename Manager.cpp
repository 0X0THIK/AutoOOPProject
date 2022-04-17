#include "Manager.h"

Manager::Manager(string name) {
	this->name = name;
}

double Manager::calculateAvgPrice(AutoShop AutoShop) {
	double avg = 0;

	for (int i = 0; i < AutoShop.size; i++)
	{
		avg += AutoShop.list[i].getPrice();
	}
	avg /= AutoShop.size;

	return avg;
}