#include <iostream>
using namespace std;

void doubling(int* ptr) {
	if (ptr != nullptr) {
		*ptr = *ptr * 2;
	}
}



int testing() {


    int num1 = 5;
    std::cout << "before: " << num1 << std::endl;
    doubling(&num1);
    std::cout << "after: " << num1 << std::endl;


    int num2 = -3;
    std::cout << "before: " << num2 << std::endl;
    doubling(&num2);
    std::cout << "after: " << num2 << std::endl;

	return 0;

}