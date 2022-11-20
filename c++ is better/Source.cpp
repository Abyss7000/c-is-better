#include <string>
#include <iostream>
#include <vector>
#include <algorithm>
#include "Header.h"
using namespace std;

class item {
public:
	string name;
	double price;
	int quantity;
	
};

void UserMenu();
void AdminMenu(vector<item> p, int n);
void addItems(vector<item> p, int n);
void DelItems(vector<item> p, int n);



void AdminMenu(vector<item> p, int n) {
	bool r = true;
	
	//vector<item> p;
	//int n;
	while (r) {
		cout << "choose an option\n";
		cout << "1 - add item\n2 - delete item\n3 - edit item\n4 - exit\n";
		int input1 = getInt(0, 5);

		switch (input1) {
		case 1:

			cout << "\nhow many items would you like to add? ";
			n = getInt(0, 5);
			addItems(p, n);
			

		case 2: cout << "Enter item name\n";
			DelItems(p, n);

			break;

		case 4: 
			cout << "the program will now exit the menu\n";
			r = false;
			break;

		default: cout << ("something went wrong\n");
		}
	}
}

void DelItems(vector<item> p, int n) {
	string temp;
	cin >> temp;
	for (int i = 0; i < p.size; i++) {

	}

}

	//find(p.begin(), p.end(), temp) != p.end(); 
	/*if (std::find(p.begin(), p.end(), temp) != p.end()) {
		//for_each(p.begin(), p.end(), [](item p) {cout << p.name << " " << p.price << " " << p.quantity << "\n"; });

		cout << "we found it!\n";

	}
	else {
		cout << "we did not find it\n";
		
	}
}
*/

void UserMenu() {

}

// [cc] (p) {fd};
// [] (int x) {std::cout<<	x<< "\n";}

void addItems(vector<item> p, int n) {
	for (int i = 0; i < n; i++) {
		item cool1;
		cout << "enter item name ";
		cin >> cool1.name;
		cout << "\n enter price of item ";
		cin >> cool1.price;
		cout << "\n enter quantity of item ";
		cin >> cool1.quantity;
		p.push_back(cool1);
		for_each(p.begin(), p.end(), [](item p) {cout << p.name << " " << p.price << " " << p.quantity << "\n"; });

	}
}

int main() {
	

	int n = 0;
	vector<item> p;
	
	bool begin = true;
	int input = -1;

	while (begin) {
		
		cout << "choose a menu\n";
		cout << "1 - admin\n2 - user\n 3 - exit	";
		cin >> input;
		switch (input) {
		case 1: AdminMenu(p,n);
			

			break;

		case 2: cout << "this menu is meant for user\n";
			break;

		case 3: begin = false;

		}

		

	}
	
	
	/*int n;

	cout << "how many items would you like to add? ";
	cin >> n;

	vector<item> p;
	addItems(p, n);
	*/

	

	//for_each(p.begin(), p.end(), [](item p) {cout << p.name << " " << p.price << " " << p.quantity << "\n"; });
	
	
	/*cout << "enter name";
	string customer_name;
	getline(cin, customer_name);
	for (int i = 0; i < customer_name.length(); i++) {
		cout << char(toupper(customer_name[i]));
	}
*/



}