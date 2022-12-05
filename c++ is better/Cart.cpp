#include "Cart.h"

Cart::Cart() {
	
	newBoughtItem = ' ';
}

Cart::Cart(string BoughtItem,double CartPrice, double FinalCartPrice) {
	newBoughtItem = BoughtItem;
	newCartPrice = CartPrice;
	newFinalCartPrice = FinalCartPrice;
}




Cart::~Cart() {

}

double Cart::getFinalCartPrice()const {
	return newFinalCartPrice;
}


double Cart::getCartPrice() const {
	return newCartPrice;
}

string Cart::getBoutghtItem() const {
	return newBoughtItem;
}

void Cart::setBoughtItem(string BoughtItem) {
	newBoughtItem = BoughtItem;
}

void Cart::setCartPrice(double CartPrice) {
	newCartPrice = CartPrice;
}

void Cart::setFinalCartPrice(double FinalCartPrice) {
	newFinalCartPrice = FinalCartPrice;
}

