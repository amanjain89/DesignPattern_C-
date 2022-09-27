#include<iostream>
#include"ToyFactory.cpp"
void FactoryMain() {
	int type;
	while (1) {
		std::cout << "Enter type of toy" << std::endl;
		std::cin >> type;
		if (!type)
			break;
		Toy* t = ToyFactory::createToy(type);
		if (t) {
			t->showProduct();
			delete t;
		}
		
	}
	std::cout << "Exit..." << std::endl;
}