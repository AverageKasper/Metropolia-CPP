#include <iostream>
using namespace std;

static int gallons() {
	int gallon;
	cout << "Input Gallons\n";
	cin >> gallon;
	cout << gallon << " gallons is " << gallon * 3.785 << " liters";

	return 0;
}