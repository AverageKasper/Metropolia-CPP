#include <iostream>
using namespace std;

int ponter3() {
    int num = 42;
    cout << "original: " << num << endl;

    int* numPointer = &num;

    int** ptrPointer = &numPointer;

    **ptrPointer = 100;

    cout << "\After change:" << endl;
    cout << "num = " << num << endl;
    cout << "*numPointer = " << *numPointer << endl;
    cout << "**ptrPointer = " << **ptrPointer << endl;

    return 0;
}