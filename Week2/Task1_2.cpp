#include <iostream>
using namespace std;
int double_point() {
	
	double num = 69;
	double* ptr = &num;
	cout << num << endl;
	*ptr = 55.0;
	cout << num << endl;
	cout << *ptr << endl;

	return 0;

}