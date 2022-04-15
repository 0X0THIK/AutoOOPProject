#include "Auto_Shop.h"

Auto_Shop::Auto_Shop(string name, string adress, int employees, int size, Auto* list) {
	this->name = name;
	this->adress = adress;
	this->employees = employees;
	this->size = size;
	this->list = list;
}
Auto_Shop::Auto_Shop() {
	this->name = "no name";
	this->adress = "no name";
	this->employees = 0;
	this->size = 0;
	list = NULL;
}

string Auto_Shop::getName() {
	return name;
}
void Auto_Shop::senName(string name) {
	this->name = name;
}
string Auto_Shop::getAdress() {
	return adress;
}
void Auto_Shop::senAdress(string adress) {
	this->adress = adress;
}
int Auto_Shop::getEmployees() {
	return employees;
}
void Auto_Shop::senEmployees(int floors) {
	this->employees = employees;
}
int Auto_Shop::getSizeCars() {
	return size;
}
void Auto_Shop::senSizeCars(int size) {
	this->size = size;
}
Auto_Shop::~Auto_Shop() {
	if (list != NULL)
	{
		delete[] list;
	}
}

string Auto_Shop::getInfo() {
	return "Auto_Shop:\nName of shop = " + name
		+ ";\nAdress = " + adress
		+ ";\nThe number of Employees = " + to_string(employees)
		+ ";\nThe number of Cars= " + to_string(size);
}