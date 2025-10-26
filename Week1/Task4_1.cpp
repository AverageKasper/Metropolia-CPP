#include <iostream>
using namespace std;
static int dividing() {
	int number = 1;

	do
	{
		if (number % 3 == 0) {
			cout << number << "\n";
			number += 1;
		}
		else
		{
			number += 1;
		}
	} while (number <= 1000);

	return 0;

}