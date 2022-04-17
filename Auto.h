#include "Header.h"

class Auto {
	friend void changeMark(Auto& avto);
private:

	static int numberOfCars;

	string brand;
	string model;
	double price;
	double speed;
	string color;

public:

	Auto(string brand, string model, double price, double speed, string color);
	Auto();
	~Auto();

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