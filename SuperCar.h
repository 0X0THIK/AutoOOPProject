#pragma once
#include "Auto.h"

class SuperCar : public Auto
{
	
private:
	string brand;
	string model;
	double price;
	double speed;
	string color;
	

public:

	SuperCar(string brand, string model, double price, double speed, string color);
	SuperCar();
	~SuperCar();

	
};