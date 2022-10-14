#include<iostream>
#include<list>
#include<string>

class ISubscriber {
protected:
	
public:
	std::string _name;
	ISubscriber(std::string name) :
		_name(name) {}
	virtual void update(std::string msg) = 0;
};
//Concrete Class for Observer
class Subscriber : public ISubscriber {


public:
	Subscriber(std::string name) :
		ISubscriber(name) {}
	void update(std::string msg) {
		std::cout << "Hello " << _name <<" Here is a new Message: "<<msg<<std::endl;
	}

};


//Concrete Class of subject
class Channel {
private:
	std::list<ISubscriber*> subscribers;
	std::string _channelName;
public:
	Channel(std::string channel) :
		_channelName(channel) {}
	std::string _msg;

	void subscribe(ISubscriber* sub) {
		std::cout << sub->_name <<" Subscribed..." << std::endl;
		subscribers.push_back(sub);
	}
	void unsubscribe(ISubscriber* sub) {
		std::cout << sub->_name << " Unsubscribed..." << std::endl;
		subscribers.remove(sub);
	}
	void notifyAll()
	{
		std::string msg = "Channel:"+_channelName+" "+_msg;
		for (auto subs : subscribers)
			subs->update(msg);
	}

	void upload(std::string msg) {
		_msg = msg;
		notifyAll();
	}

};


void ODPMain() {
	//Create a Channel
	Channel* sonyChannel = new Channel("Sony");
	Channel* MaxChannel = new Channel("Max");
	//Create Subscriber who wants to subscribe to channel
	Subscriber* sub1 = new Subscriber("Aman");
	Subscriber* sub2 = new Subscriber("Amit");
	Subscriber* sub3 = new Subscriber("Ankit");
	Subscriber* sub4 = new Subscriber("Amita");
	Subscriber* sub5 = new Subscriber("Mili");
	Subscriber* sub6 = new Subscriber("Arth");
	
	//channel subscribes subscribers 
	sonyChannel->subscribe(sub1);
	sonyChannel->subscribe(sub2);
	sonyChannel->subscribe(sub3);

	MaxChannel->subscribe(sub4);
	MaxChannel->subscribe(sub5);
	MaxChannel->subscribe(sub6);


	sonyChannel->upload(" New Action Video Uploaded for you \n");
	MaxChannel->upload(" New Comedy Video Uploaded for you\n");
	sonyChannel->unsubscribe(sub1);
	sonyChannel->upload(" New Horror Video Uploaded for you\n");
	MaxChannel->unsubscribe(sub4);
	MaxChannel->upload(" New Videwo Video Uploaded for you\n");
}
