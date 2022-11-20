#include "Header.h"
#include <iostream>

using namespace std;

int getInt() {
	int input;
	while (!(cin >> input))
	{
		cout << "Invalid input detected. Try again\n";
		cin.clear();
		cin.ignore(32767, '\n');
	}
	return input;
}
int getInt(int limit, int limit2) {
	int input;
	input = getInt();
	while (input <= limit ||input >= limit2) {
		cout << "Value must be " << "more than " << limit << " less than " << limit2 << ". Try again\n";
		input = getInt();
	}
	return input;
}

