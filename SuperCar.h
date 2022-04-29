#pragma once
#include "Header.h"
class SuperCar
{
	friend void changeMark(SuperCar& supercar);
private:

	static int numberOfCars;

	string brand;
	string model;
	double price;
	double speed;
	string color;

public:

	SuperCar(string brand, string model, double price, double speed, string color);
	SuperCar();
	~SuperCar();

	static int getNumberOfCars();

	string getBrand();
	void setBrand(string brand);
	string getModel();
	void setModel();
	double getPrice();
	void setPrice(double price);
	double getSpeed();
	void setSpeed(double speed);
	string getColor();
	void setColor();

	string getInfo();
};