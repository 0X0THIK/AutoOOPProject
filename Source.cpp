#include <ctime>
#include "Auto.h"
#include "AutoShop.h"
#include "Manager.h"

void changePrice(Auto avto) {
	srand(time(NULL));
	avto.setPrice(rand() % 7 + 4);
}

int main() {

	Auto avto;

	cout << avto.getInfo() << endl;

	return 0;
}