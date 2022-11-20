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
	Cart(double);

	//destructor
	~Cart();


	double getCartPrice() const;

	
	void setCartPrice(double);



private:
	double newCartPrice;

};
