#include<iostream>
#include<memory>

class IndinSocket {

public:
	virtual void IndianSocket(int type) = 0;
};

class USASocket {

public:
	void connectUSASocket() {
		std::cout << "USA Socket Connected" << std::endl;
	}
};

class GermanySocket {
public:
	void connectGermanySocket() {
		std::cout << "Germany Socket Connected"<<std::endl;
	}

};


class SocketAdapter : public IndinSocket, public GermanySocket, public USASocket {

public:
	void IndianSocket(int type) {
		switch (type) {
		case 1:
			connectGermanySocket();
			break;
		case 2:
			connectUSASocket();
			break;
		default:
			std::cout << "Indian Socket Connected" << std::endl;
		}
	}
};

void ADPMain() {
	
	//SocketAdapter* socket = new SocketAdapter();
	std::unique_ptr<IndinSocket> socket = std::make_unique<SocketAdapter>();

	socket->IndianSocket(1);

	socket->IndianSocket(2);

	socket->IndianSocket(4);
}
