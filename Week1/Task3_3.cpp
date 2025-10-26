#include <iostream>
using namespace std;

static int hemoglobin() {
	cout << "Male or Female (m/f): ";
	string gender;
	cin >> gender;
	cout << "Hemoglobin levels (g/l): ";
	float hemoglobin;
	cin >> hemoglobin;

	if (gender == "m") {
		if (hemoglobin < 134) {
			cout << "Hemoglobin low!";
		}
		else if (hemoglobin > 195) {
			cout << "Hemoglobin high!";
		}
		else {
			cout << "Hemoglobin normal!";
		}
	}
	else if (gender == "f") {
		if (hemoglobin < 117) {
			cout << "Hemoglobin low!";
		}
		else if (hemoglobin > 175) {
			cout << "Hemoglobin high!";
		}
		else {
			cout << "Hemoglobin normal!";
		}
	}
	else {
		cout << "Invalid input";
	}
	return 0;
}