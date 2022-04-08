#include "Auto_Shop.h"

Auto_Shop::Auto_Shop(string name, string adress, int floors, int entrances, int flats) {
	this->name = name;
	this->adress = adress;
	this->floors = floors;
	this->entrances = entrances;
	this->flats = flats;
}
Auto_Shop::Auto_Shop() {
	this->name = "no name";
	this->adress = "no name";
	this->floors = 0;
	this->entrances = 0;
	this->flats = 0;
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
int Auto_Shop::getFloors() {
	return floors;
}
void Auto_Shop::senFloors(int floors) {
	this->floors = floors;
}
int Auto_Shop::getEntrances() {
	return entrances;
}
void Auto_Shop::senEntrances(int entrances) {
	this->entrances = entrances;
}
int Auto_Shop::getFlats() {
	return flats;
}
void Auto_Shop::senFlats(int flats) {
	this->flats = flats;
}
Auto_Shop::~Auto_Shop() {}
string Auto_Shop::getInfo() {
	return "Auto_Shop:\nName = " + name
		+ ";\nAdress = " + adress
		+ ";\nFloors = " + to_string(floors)
		+ ";\nEntrances = " + to_string(entrances)
		+ ";\nFlats = " + to_string(flats);
}