#ifndef ITEMS_H
#define ITEMS_H

#include<iostream>
#include <string>

using namespace std;

#endif // !ITEMS_H
class Item {
public:
	//constructor
	Item();
	
	//overload 
	Item(string, double);

	//destructor
	~Item();

	string getName() const;

	double getPrice() const;

	void setName(string);
	void setPrice(double);



//private:
	string newName;
	double newPrice;

};
