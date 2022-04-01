#include "Header.h"

class Auto {
private:
	string brand;
	string model;
	double price;
	double speed;
	string color;

public:

	Auto(string brand, string model, double price, double speed, string color) {
		this->brand = brand;
		this->model = model;
		this->price = price;
		this->speed = speed;
		this->color = color;
	}
	Auto() {
		this->brand = "no name";
		this->model = "no name";
		this->price = 0;
		this->speed = 0;
		this->color = "white";
	}

	string getBrand() {
		return brand;
	}
	void setBrand(string brand) {
		this->brand = brand;
	}
	string getModel() {
		return model;
	}
	void setModel() {
		this->model = model;
	}
	double getPrice() {
		return price;
	}
	void setPrice(double price) {
		if (price > 0) {
			this->price = price;
		}
	}
	double getSpeed() {
		return speed;
	}
	void setSpeed(double speed) {
		if (speed > 0) {
			this->speed = speed;
		}
	}
	string getColor() {
		return color;
	}
	void setColor() {
		this->color = color;
	}

	~Auto() {
		cout << "Destructor" << endl;
	}

	string getInfo() {
		return "Auto:\nbrand = " + brand
			+ ";\nmodel = " + model
			+ ";\nprice = " + to_string(price)
			+ ";\nspeed = " + to_string(speed)
			+ ";\ncolor = " + color;
	}
};