class Zoo;
class Animal {
	friend void Zoo::add(Animal& animal);
	friend void Shop::add(Animal& animal);
private:
	double power;
};

class Zoo {
public:
	void add(Animal& animal);
};
void Zoo::add(Animal& animal) {
	double pow = animal.power;
}

class Shop {
public:
	void add(Animal animal) {
		double pow = animal.power;
	}

};