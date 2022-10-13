#include<iostream>

//Button Interface
class IButton {

public:
	virtual void press() = 0;
};
//Concrete Class of MacButton
class MacButton : public IButton {
public:
	void press() {
		std::cout << "MacButton Pressed" << std::endl;

	}
};
//Concrete Class of WindowsButton
class WindowsButton : public IButton {
public:
	void press() {
		std::cout << "WindowsButton Pressed" << std::endl;

	}
};

//TextBox Interface
class ITextBox {

public:
	virtual void ShowText() = 0;
};

//Concrete Class of MacTexBox
class MacTextBox : public ITextBox {
public:
	void ShowText() {
		std::cout << "MacTextBox Edited" << std::endl;

	}
};
//Concrete class of WindowsTextBox
class WindowsTextBox : public ITextBox{
public:
	void ShowText() {
		std::cout << "WindowsTextBox Edited" << std::endl;

	}
};

//Factory Interface
class IFactory {
public:
	virtual IButton* createButton() = 0;
	virtual ITextBox* createTextBox() = 0;

};
//MacFactory class
class MacFactory : public IFactory {

public : 
	IButton* createButton() {
		return new MacButton();
	}
	ITextBox* createTextBox() {
		return new MacTextBox();
	}
};

//Windows Factory
class WindowsFactory : public IFactory {

public:
	IButton* createButton() {
		return new WindowsButton();
	}
	ITextBox* createTextBox() {
		return new WindowsTextBox();
	}
};

