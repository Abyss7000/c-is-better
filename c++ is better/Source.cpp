#include <iostream>
#include "Items.h"
#include "Header.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void addItems(vector<Item>&);
//void printItems(const vector<Item>&);





int main() {

	vector<Item> Store;
	addItems(Store);
	//printItems(Store);



}


void addItems(vector <Item>& newStore) {
	string name;
	double price;


	int n;
	cout << "how many items would you like to add?\n";
	cin >> n;


	for (int i = 0; i < n; i++) {
		cout << "\nenter item name ";
		cin >> name;
		cout << "\n enter price of item ";
		cin >> price;
	
		
		Item newItem(name, price);
		newStore.push_back(newItem);

		cout << "items in store:\n";
		for_each(newStore.begin(), newStore.end(), [](Item newItem) {cout << newItem.getName() << " " << newItem.getPrice() << " " << "\n"; });
	}

	cout << endl;

}

/*void printItems(const vector<Item>& newStore) {
	for (unsigned int i = 0; i < newStore.size(); i++) {
		cout << "Item Name: " << "		" << newStore[i].getName() << "item Price:" << "		" << newStore[i].getPrice();

		cout << endl;
	}
}
*/