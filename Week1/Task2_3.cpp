#include <iostream>
using namespace std;

static int square() {
	cout << "Squares width:";
	float sqr_width;
	cin >> sqr_width;
	cout << "Square height";
	float sqr_height;
	cin >> sqr_height;
	float area = sqr_height * sqr_width;
	float edge = sqr_height * 2 + sqr_width *  2;
	cout << "Squares area is: " << area << "\n";
	cout << "Square edge is: " << edge << "\n";
	return 0;
}