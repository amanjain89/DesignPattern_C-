#include<iostream>
#include "AFDPObjects.cpp"

//GuiAbstractFactory

class GuiAbstractFactory {
public:
	static IFactory* CreateFactory(std::string osType) {
		if (osType == "windows") {
			return new WindowsFactory();
		}
		else if (osType == "mac") {
			return new MacFactory();
		}
		return new MacFactory();
	}

};