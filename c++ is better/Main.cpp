#include <iostream>
#include "Items.h"
#include "Header.h"
#include <string>
#include <vector>
#include <algorithm>
#include "Cart.h"

using namespace std;

void addItems(vector<Item>&);
void menuAdmin();
void menuUser();
void mainMenu();
void printItems(const vector<Item>&);
void addCartItems(vector <Item>&);




int main() {

	vector<Item> Store;
	mainMenu();
	
	
	
	/*addItems(Store);
	printItems(Store);
	*/


}


void menuUser() {
	bool begin = true;
	int input1;
	vector<Item> Store;

	while (begin) {

		cout << "choose a menu\n";
		cout << "1 - view Items\n2 - buy items\n 3 - view cart\n 4 - exit\n 	";

		input1 = getInt(0,5);
		switch (input1) {
		case 1: printItems(Store);

			break;
		case 2: 


			break;
		case 3:
			break;
		case 4:
			begin = false;
			break;

		default: cout << "something went horribly wrong\n";

		}
	}

}

void mainMenu() {
	bool begin = true;
	int input;

	while (begin) {

		cout << "choose a menu\n";
		cout << "1 - admin\n2 - user\n3 - exit	";
		input = getInt(0, 4);
		switch (input) {
		case 1: menuAdmin();


			break;

		case 2: menuUser();
			break;

		case 3: begin = false;

		default: cout << "something went horribly wrong\n";

		}



	}

}


void menuAdmin() {
vector<Item> Store;
bool r = true;

//vector<item> p;
//int n;
while (r) {
	cout << "choose an option\n";
	cout << "1 - add item\n2 - view catalogue\n3 - exit\n";
	int input1 = getInt(0, 4);

	switch (input1) {
	case 1: addItems(Store);
		break;
	case 2: printItems(Store);
		break;

	case 3:
		cout << "the program will now exit the menu\n";
		r = false;
		break;

	default: cout << ("something went wrong\n");
	}
}
}

void addCartItems(vector <Item>& newCart) {
	vector<Item> Store;
	vector <Cart> myCart;
	printItems(Store);

	cout << "enter the name of the item you want";
	int userinput;
	cin >> userinput;




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
		price = getInt(0, 999999999999);
	
		
		Item newItem(name, price);
		newStore.push_back(newItem);

		cout << "items in store:\n";
		for_each(newStore.begin(), newStore.end(), [](Item newItem) {cout << newItem.getName() << " " << newItem.getPrice() << " " << "\n"; });
	}

	cout << endl;

}

void printItems(const vector<Item>& newStore) {
	for (unsigned int i = 0; i < newStore.size(); i++) {
		cout << "Item Name: " << "		" << newStore[i].getName() << "item Price:" << "		" << newStore[i].getPrice();

		cout << endl;
	}
}



