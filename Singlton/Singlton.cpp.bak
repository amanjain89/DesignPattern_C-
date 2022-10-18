#include<iostream>
#include<string>

class GameSetting {
	static GameSetting* _instance;
	int _brightness;
	int	_width;
	int _height;
	GameSetting() : _width(1024), _height(2400), _brightness(75) {}
public:
	static GameSetting* getInstance() {
		if (_instance == NULL)
			_instance = new GameSetting();
		return _instance;
	}

	void setWidth(int width) { _width = width; }
	void setHeight(int height) { _height = height; }
	void setBrightNess(int brightness) { _brightness = brightness; }

	int getWidth() { return _width; }
	int getHeight() { return _height; }
	int getBrightNess() { return _brightness; }

	void displaySetting() {
		std::cout << "Width : " << _width << std::endl;
		std::cout << "Height : " << _height << std::endl;
		std::cout << "Brightness : " << _brightness << std::endl;
	}
};

GameSetting* GameSetting::_instance = NULL;

void call2ndInstance() {
	GameSetting* otherSetting = GameSetting::getInstance();
	otherSetting->displaySetting();
	std::cout << "Address of _instance pointed by otherSetting pointer is :" << otherSetting << std::endl;
}

void SingltonMain() {
	GameSetting* setting = GameSetting::getInstance();
	setting->displaySetting();
	setting->setBrightNess(100);
	call2ndInstance();
	std::cout << "Address of _instance pointed by setting pointer is :" << setting << std::endl;
	std::cout << "Address of _instance  :" << GameSetting::getInstance() << std::endl;
	std::cin.get();
}



/*
Output is :

Width : 1024
Height : 2400
Brightness : 75
Width : 1024
Height : 2400
Brightness : 100
Address of _instance pointed by otherSetting pointer is :014AE7E0
Address of _instance pointed by setting pointer is :014AE7E0
Address of _instance  :014AE7E0
*/
