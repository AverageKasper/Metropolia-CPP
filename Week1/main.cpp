#include <iostream>
#include <string>
#include "Task2_1.cpp"  
#include "Task2_3.cpp"
#include "Task3_3.cpp"
#include "Task3_4.cpp"
#include "Task4_1.cpp"
#include "Task4_2.cpp"
#include "Task6_3.cpp"

using namespace std;


int main() {
    string tasks[] = { "Task 2.1", "Task 2.3", "Task 3.3", "Task 3.4", "Task 4.1", "Task 4.2", "Task 6.3"};

    cout << "Tasks available: \n";
    for (int i = 0; i < 7; i++) {
        cout << (i + 1) << ": " << tasks[i] << "\n";
    }

    cout << "Select task: ";
    int task_selected;
    cin >> task_selected;

    switch (task_selected) {
    case 1:
        greeting();
        break;
    case 2:
        square();
        break;
    case 3:
        hemoglobin();
        break;
    case 4:
        leap_year();
        break;
    case 5:
        dividing();
        break;
    case 6:
        inches();
        break;
    case 7:
        gallons();
        break;
    default:
        cout << "Invalid selection!\n";
        break;
    }

    return 0;
}