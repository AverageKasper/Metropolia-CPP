#include <iostream>

int main() {
    int* pointer = nullptr;

    if (pointer == nullptr) {
        std::cout << "Pointer is nullptr" << std::endl;
    }

    int num = 5;
    pointer = &num;

    if (pointer != nullptr) {
        std::cout << "Pointer is not nullptr. Value: " << *pointer << std::endl;
    }

    return 0;
}