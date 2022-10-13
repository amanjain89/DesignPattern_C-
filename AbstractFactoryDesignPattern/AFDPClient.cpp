#include<iostream>
#include"AFDPFactory.cpp"

void AFDPClientmain() {
	std::cout << "Enter your OS Name:" << std::endl;
	std::string osType;
	std::cin >> osType;

	IFactory* fac = GuiAbstractFactory::CreateFactory(osType);

	IButton* button = fac->createButton();
	button->press();

	ITextBox* textBox = fac->createTextBox();
	textBox->ShowText();

}