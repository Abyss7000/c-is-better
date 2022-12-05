#pragma once
#ifndef ITEMS_H
#define ITEMS_H

#include<iostream>

using namespace std;

#endif // !ITEMS_H
class Cart {
public:
	//constructor
	Cart();

	//overload 
	Cart(string, double, double);
	

	//destructor
	~Cart();


	double getCartPrice() const;
	string getBoutghtItem() const;
	double getFinalCartPrice() const;


	void setCartPrice(double);
	void setBoughtItem(string);
	void setFinalCartPrice(double);

private:
	double newCartPrice;
	string newBoughtItem;
	double newFinalCartPrice;

};
