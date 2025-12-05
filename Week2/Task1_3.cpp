#include <iostream>
using namespace std;
int listing() {

	int array[5] = {11,22,33,44,55};
	int* ptr = array;

	for (int i = 0; i < 5; i++) {
		cout << *ptr << endl;
		ptr++;
	}

	return 0;

}