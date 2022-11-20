#include "Items.h"


Item::Item() {
	newName = ' ';
}

Item::Item(string name, double price) {
	newName = name;
	newPrice = price;

}


Item::~Item() {

}

string Item::getName() const {
	return newName;

}

double Item::getPrice() const {
	return newPrice; 
}


void Item::setName(string name) {
	newName = name;

}

void Item::setPrice(double price) {
	newPrice = price;
}