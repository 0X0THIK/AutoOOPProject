#include "Auto.h"

int Auto::numberOfCars = 0;

Auto::Auto(string brand, string model, double price, double speed, string color) {
	numberOfCars++;
	this->brand = brand;
	this->model = model;
	this->price = price;
	this->speed = speed;
	this->color = color;
}
Auto::Auto() {
	numberOfCars++;
	this->brand = "no name";
	this->model = "no name";
	this->price = 0;
	this->speed = 0;
	this->color = "white";
}

int Auto::getNumberOfCars() {
	return numberOfCars;
}

string Auto::getBrand() {
	return brand;
}
void Auto::setBrand(string brand) {
	this->brand = brand;
}
string Auto::getModel() {
	return model;
}
void Auto::setModel() {
	this->model = model;
}
double Auto::getPrice() {
	return price;
}
void Auto::setPrice(double price) {
	if (price > 0) {
		this->price = price;
	}
}
double Auto::getSpeed() {
	return speed;
}
void Auto::setSpeed(double speed) {
	if (speed > 0) {
		this->speed = speed;
	}
}
string Auto::getColor() {
	return color;
}
void Auto::setColor() {
	this->color = color;
}
Auto::~Auto() {
	numberOfCars--;
	cout << "Destructor" << endl;
}
string Auto::getInfo() {
	return "Auto:\nbrand = " + brand
		+ ";\nmodel = " + model
		+ ";\nprice = " + to_string(price)
		+ ";\nspeed = " + to_string(speed)
		+ ";\ncolor = " + color;
}