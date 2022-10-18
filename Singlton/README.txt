Defines a class that has only one interface and provides a glocal point of access to that interface

Requirements are :
	1) One and only one instance
	2) Global Access
	3) No Ownership
	4) Lazy Initialization

Advantages are :
	a) Save Memory : Only one is required
	2) Single Access Point
		so Usefull in Applications such as Logger , DB Connection
	3) Flexibility
		Changes anytime you want

Usage:
	1) Multithread
		Thread Pool
	2) DB Applications:
		Logging
	3) Configuration Settings:
		Game Settings , App settings.

Things Needed :
	1) Static Members
	2) Private Constructor
	3) Static Functions
	


