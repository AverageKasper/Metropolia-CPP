#include <iostream>
using namespace std;
static int greeting() {
	string name;
	cout << "Insert name: \n";
	cin >> name;
	cout << "Hello " << name << "!";

	return 0;

}