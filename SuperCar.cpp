#include "SuperCar.h"

int SuperCar::numberOfCars = 0;

SuperCar::SuperCar(string brand, string model, double price, double speed, string color) {
	
	this->brand = brand;
	this->model = model;
	this->price = price;
	this->speed = speed;
	this->color = color;
}
SuperCar::SuperCar() {

	this->brand = "no name";
	this->model = "no name";
	this->price = 0;
	this->speed = 0;
	this->color = "white";
}

//int SuperCar::getNumberOfCars() {
//	return numberOfCars;
//}
//
//string SuperCar::getBrand() {
//	return brand;
//}
//void SuperCar::setBrand(string brand) {
//	this->brand = brand;
//}
//string SuperCar::getModel() {
//	return model;
//}
//void SuperCar::setModel() {
//	this->model = model;
//}
//double SuperCar::getPrice() {
//	return price;
//}
//void SuperCar::setPrice(double price) {
//	if (price > 0) {
//		this->price = price;
//	}
//}
//double SuperCar::getSpeed() {
//	return speed;
//}
//void SuperCar::setSpeed(double speed) {
//	if (speed >= 0) {
//		this->speed = speed;
//	}
//}
//string SuperCar::getColor() {
//	return color;
//}
//void SuperCar::setColor() {
//	this->color = color;
//}
//SuperCar::~SuperCar() {
//	numberOfCars--;
//	cout << "Destructor" << endl;
//}
//string SuperCar::getInfo() {
//	return "Auto:\nbrand = " + brand
//		+ ";\nmodel = " + model
//		+ ";\nprice = " + to_string(price)
//		+ ";\nspeed = " + to_string(speed)
//		+ ";\ncolor = " + color;
//}