#include "Header.h"

class Auto {
private:
	string brand;
	string model;
	double price;
	double speed;
	string color;

public:

	Auto(string brand, string model, double price, double speed, string color);
	Auto();

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

	~Auto();

	string getInfo();
};