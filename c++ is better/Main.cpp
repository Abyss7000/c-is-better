#include <iostream>
#include "Items.h"
#include "Header.h"
#include <string>
#include <vector>
#include <algorithm>
#include "Cart.h"
#include <numeric>

using namespace std;

void addItems(vector<Item>&);
void menuAdmin(vector<Item>&);
void menuUser(vector<Item>&, vector <Cart>&);
void mainMenu(vector<Item>&, vector <Cart>&);
void printItems(const vector<Item>&);
//void ShopAdd(vector<Item>&, vector<Cart>&);
void addCartItems(vector<Item>&,vector <Cart>&);




int main() {

	vector<Item> Store;
	vector <Cart> myCart;
	mainMenu(Store, myCart);
	
	
	
	/*addItems(Store);
	printItems(Store);
	*/


}


void menuUser(vector<Item>& newStore, vector<Cart>& newCart) {
	bool begin = true;
	int input1;
	int sum =0;
	//vector<double>Sum;
	

	while (begin) {

		cout << "choose a menu\n";
		cout << "1 - view Items\n2 - buy items\n3 - view cart\n4 - exit\n 	";

		input1 = getInt(0,5);
		switch (input1) {
		case 1: printItems(newStore);

			break;
		case 2:
		
			addCartItems(newStore,newCart);

			break;
		case 3:
			//for_each(newCart.begin(), newCart.end(), [](double Sum, Cart newCart) {Sum = newCart.getCartPrice(); });
			for_each(newCart.begin(), newCart.end(), [](Cart newCart) {cout << newCart.getBoutghtItem() << " " << newCart.getCartPrice() << " "  << "\n"; });
			cout << "Sum of all the items is: \n" << endl;
			
			for (int i = 0; i < newCart.size(); i++) {
				sum += newCart.at(i).getCartPrice();
			}
			cout << sum;
			cout << endl;

			
			break;
		case 4:
			begin = false;
			break;

		default: cout << "something went horribly wrong\n";

		}
	}

}





void mainMenu(vector<Item>& newStore, vector<Cart>& newCart) {
	bool begin = true;
	int input;

	while (begin) {

		cout << "choose a menu\n";
		cout << "1 - admin\n2 - user\n3 - exit	";
		input = getInt(0, 4);
		switch (input) {
		case 1: menuAdmin(newStore);


			break;

		case 2: menuUser(newStore, newCart);
			break;

		case 3: begin = false;

		default: cout << "something went horribly wrong\n";

		}



	}

}


void menuAdmin(vector <Item>& newStore) {
//vector<Item> Store;
bool r = true;

//vector<item> p;
//int n;
while (r) {
	cout << "choose an option\n";
	cout << "1 - add item\n2 - view catalogue\n3 - exit\n";
	int input1 = getInt(0, 4);

	switch (input1) {
	case 1: addItems(newStore);
		break;
	case 2: printItems(newStore);
		break;

	case 3:
		cout << "the program will now exit the menu\n";
		r = false;
		break;

	default: cout << ("something went wrong\n");
	}
}
}

void addCartItems(vector<Item>& newStore, vector <Cart>& newCart) {
	string userItem;
	string BoughtItem;
	double CartPrice;
	double FinalCartPrice;

	cout << "enter the name of the item you want:\n";
	//string userItem;
	cin >> userItem;
	for (int i = 0; i < newStore.size(); i++) {
		if (userItem == newStore.at(i).getName()) {
			cout << "Item added to cart: " << "		" << newStore.at(i).getName();
			cout << endl;
			//ShopAdd(newStore, newCart);
			BoughtItem = newStore.at(i).getName();
			CartPrice = newStore.at(i).getPrice();

			


			FinalCartPrice = 0;
			Cart newShop(BoughtItem, CartPrice, FinalCartPrice);
			newCart.push_back(newShop);

			

		}
		else {
			//cout << "item not found\n";
			break;
		}
	}
	//for_each(newCart.begin(), newCart.end(), [](Cart newCart) {cout << newCart.getBoutghtItem() << " " << newCart.getCartPrice() << " " << "\n"; });

	




}



void addItems(vector <Item>& newStore) {
	string name;
	double price;


	int n;
	cout << "how many items would you like to add?\n";
	n = getInt(0, 32767);


	for (int i = 0; i < n; i++) {
		cout << "\nenter item name ";
		cin >> name;
		cout << "\n enter price of item ";
		price = getInt(0, 999999999);
	
		
		Item newItem(name, price);
		newStore.push_back(newItem);

		//cout << "items in store:\n";
		for_each(newStore.begin(), newStore.end(), [](Item newStore) {cout << newStore.getName() << " " << newStore.getPrice() << " " << "\n"; });
	}

	cout << endl;

}

void printItems(const vector<Item>& newStore) {
	for_each(newStore.begin(), newStore.end(), [](Item newStore) {cout << newStore.getName() << " " << newStore.getPrice() << " " << "\n"; });
	}




