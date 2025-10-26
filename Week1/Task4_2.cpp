#include <iostream>
using namespace std;

static int inches() {
	int inch;
	cout << "Input inches\n";
	cin >> inch;
	cout << inch << " inches is " << inch * 2.54 << " cm";
	return 0;
}