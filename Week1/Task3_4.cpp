#include <iostream>
using namespace std;

static int leap_year() {
	cout << "What Year?\n";
	int given_year;
	cin >> given_year;

	if (given_year % 4 != 0) {
		cout << "No Leapyear";
		return 0;
	}
	else if (given_year % 100 != 0) {
		cout << "leap year";
		return 0;
	}
	else if (given_year % 400 != 0) {
		cout << "no leap year";
		return 0;
	}
	else {
		cout << "leapyear for you";
		return 0;
	}

	return 0;
}