/*Complex Object Creation and that have lot of configuration and we need to do them step wise 
* Our Director will handle all those steps.
Components
1. Prodcut
2. Abstract Builder
3. Concrete Builder
4. Director
5. Client Needs Final Product

*/
#include<iostream>
// Desktop is our Final Product what we want
class Desktop {
private:
	std::string _type;
	std::string _mouse;
	std::string _keyboard;
	std::string _CPU;
public:
	Desktop(std::string desktopType) :
		_type(desktopType) {}

	std::string getMouse() {
		return _mouse;
	}
	std::string getKeyBoard() {
		return _keyboard;
	}
	std::string getCPU() {
		return _CPU;
	}

	void setMouse(std::string mouse) {
		_mouse = mouse;
	}

	void setKeyBoard(std::string keyboard) {
		_keyboard = keyboard;
	}

	void setCPU(std::string CPU) {
		_CPU = CPU;
	}

	void show() {
		std::cout << "---------------------------------------" << std::endl;
		std::cout << "Desktop Type :" << _type << std::endl;
		std::cout << "Mouse :" << _mouse << std::endl;
		std::cout << "KeyBoard :" << _keyboard << std::endl;
		std::cout << "CPU :" << _CPU << std::endl;
	}

};
//Abstract Class of DesktopBuilder
//All Builders must have these functions at least.
class DesktopBuilder {
protected:
	Desktop* _desktop;
public:
	virtual void createDesktopType() = 0;
	virtual void createKeyboard() = 0;
	virtual void createMouse() = 0;
	virtual void createCPU() = 0;

	Desktop* getDesktop() {
		return _desktop;
	}

};
// DesktopBuilder concrete class
// Knows only how to build DellDesktop
class DellDesktopBuilder : public DesktopBuilder {
	void createDesktopType() {
		_desktop = new Desktop("Dell");
	}
	void createKeyboard() {
		_desktop->setKeyBoard("Dell KeyBoard");
	}
	void createMouse() {
		_desktop->setMouse("Dell Mouse");
	}
	void createCPU() {
		_desktop->setCPU("Dell CPU");
	}
};
// DesktopBuilder concrete class
// Knows only how to build HPDesktop
class HPDesktopBuilder : public DesktopBuilder {
	void createDesktopType() {
		_desktop = new Desktop("HP");
	}
	void createKeyboard() {
		_desktop->setKeyBoard("HP KeyBoard");
	}
	void createMouse() {
		_desktop->setMouse("HP Mouse");
	}
	void createCPU() {
		_desktop->setCPU("HP CPU");
	}
};
// DesktopBuilder concrete class
// Knows only how to build AcerDesktop
class AcerDesktopBuilder : public DesktopBuilder {
	void createDesktopType() {
		_desktop = new Desktop("Acer");
	}
	void createKeyboard() {
		_desktop->setKeyBoard("Acer KeyBoard");
	}
	void createMouse() {
		_desktop->setMouse("Acer Mouse");
	}
	void createCPU() {
		_desktop->setCPU("Acer CPU");
	}
};


// DesktopBuilder concrete class
// Knows only how to build LenavoDesktop
class LenavoDesktopBuilder : public DesktopBuilder {
	void createDesktopType() {
		_desktop = new Desktop("Lenavo");
	}
	void createKeyboard() {
		_desktop->setKeyBoard("Lenavo KeyBoard");
	}
	void createMouse() {
		_desktop->setMouse("Lenavo Mouse");
	}
	void createCPU() {
		_desktop->setCPU("Lenavo CPU");
	}
};

// Defines steps and tells to the builder that build object executing steps in given order.
class DesktopDirector {
public:
	Desktop* createDesktop(DesktopBuilder* builder) {
		builder->createDesktopType();
		builder->createMouse();
		builder->createKeyboard();
		builder->createCPU();

		return builder->getDesktop();
	}
};


void BDPMain() {
	//Create Director
	DesktopDirector DD;
	
	//Create Builders
	HPDesktopBuilder HPD;
	DellDesktopBuilder DDB;
	AcerDesktopBuilder ADB;
	LenavoDesktopBuilder LDB;
	
	
	//Take Reference of particular Builder by Director and All the steps will be executed
	Desktop* hpdesktop = DD.createDesktop(&HPD);
	Desktop* delldesktop = DD.createDesktop(&DDB);
	Desktop* acerdesktop = DD.createDesktop(&ADB);
	Desktop* lenavodesktop = DD.createDesktop(&LDB);

	
	hpdesktop->show();
	delldesktop->show();
	acerdesktop->show();
	lenavodesktop->show();

}
