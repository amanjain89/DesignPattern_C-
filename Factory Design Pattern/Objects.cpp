#include<iostream>
#include<string>

class Toy {
protected:
	int price;
	std::string name;

public:
	virtual void prepareParts() = 0;
	virtual void combineParts() = 0;
	virtual void assembleParts() = 0;
	virtual void applyLabel() = 0;
	virtual void showProduct() = 0;
};

class Car : public Toy {
	void prepareParts() {
		std::cout << "Preparing Parts for Car" << std::endl;
	}
	void combineParts() {
		std::cout << "Combining Parts for Car" << std::endl;
	}
	void assembleParts() {
		std::cout << "Assembling Parts for Car" << std::endl;
	}
	void applyLabel() {
		std::cout << "Applying Label" << std::endl;
		name = "Car";
		price = 50000;
	}
	void showProduct() {
		std::cout << "Showing Product " << name << " And Price is: " << price << std::endl;
	}
};

class Bike : public Toy {
	void prepareParts() {
		std::cout << "Preparing Parts for Bike" << std::endl;
	}
	void combineParts() {
		std::cout << "Combining Parts for Bike" << std::endl;
	}
	void assembleParts() {
		std::cout << "Assembling Parts for Bike" << std::endl;
	}
	void applyLabel() {
		std::cout << "Applying Label" << std::endl;
		name = "Bike";
		price = 30000;
	}
	void showProduct() {
		std::cout << "Showing Product " << name << " And Price is: " << price << std::endl;
	}
};

class Plane : public Toy {
	void prepareParts() {
		std::cout << "Preparing Parts for Plane" << std::endl;
	}
	void combineParts() {
		std::cout << "Combining Parts for Plane" << std::endl;
	}
	void assembleParts() {
		std::cout << "Assembling Parts for Plane" << std::endl;
	}
	void applyLabel() {
		std::cout << "Applying Label" << std::endl;
		name = "Plane";
		price = 10000000;
	}
	void showProduct() {
		std::cout << "Showing Product " << name << " And Price is: " << price << std::endl;
	}
};
