#include<iostream>
#include"Objects.cpp"

class ToyFactory {

public:
	static Toy* createToy(int type) {
		Toy* toy = NULL;
		switch (type) {
		case 1:
			toy = new Car();
			break;
		case 2:
			toy = new Bike();
			break;
		case 3:
			toy = new Plane();
			break;
		default:
			std::cout << "Invalid Toy Type Please ReEnter Toy Type" << std::endl;
			return NULL;
		}

		toy->prepareParts();
		toy->combineParts();
		toy->assembleParts();
		toy->applyLabel();

		return toy;
	}

};