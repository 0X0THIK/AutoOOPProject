#include "AutoShop.h"

AutoShop::AutoShop(string name, string adress, int employees, int size, Auto* list) {
	this->name = name;
	this->adress = adress;
	this->employees = employees;
	this->size = size;
	this->list = list;
}
AutoShop::AutoShop() {
	this->name = "no name";
	this->adress = "no name";
	this->employees = 0;
	this->size = 0;
	this->list = NULL;
}

string AutoShop::getName() {
	return name;
}
void AutoShop::senName(string name) {
	this->name = name;
}
string AutoShop::getAdress() {
	return adress;
}
void AutoShop::senAdress(string adress) {
	this->adress = adress;
}
int AutoShop::getEmployees() {
	return employees;
}
void AutoShop::senEmployees(int employees) {
	this->employees = employees;
}
int AutoShop::getSizeCars() {
	return size;
}
void AutoShop::senSizeCars(int size) {
	this->size = size;
}

Auto AutoShop::get(int index) {
	if (list == NULL || index < 0 || index >= size)
	{
		return Auto("", "", 0, 0, "");
	}
	else {
		return list[index];
	}
}

void AutoShop::set(int index, Auto auto) {
	if (list != NULL && index >= 0 && index < size)
	{
		list[index] = auto;
	}
}

AutoShop::~AutoShop() {
	if (list != NULL)
	{
		delete[] list;
	}
}

string AutoShop::getInfo() {
	return "AutoShop:\nName of shop = " + name
		+ ";\nAdress = " + adress
		+ ";\nThe number of Employees = " + to_string(employees)
		+ ";\nThe number of Cars= " + to_string(size);
}