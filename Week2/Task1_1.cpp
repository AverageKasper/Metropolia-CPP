#include <iostream>
using namespace std;
int pointer() {
	
	int x = 1;
	int* y;
	y = &x;
	cout << x << endl;
	cout << *y;
	return 0;

}