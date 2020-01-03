#include <iostream>
using namespace std;
void fifth() {
	setlocale(LC_ALL, "RUS");
	int year, centuries;
	cout << "¬ведите год = ";
	cin >> year;
	centuries = (year - 1) / 100 + 1;
	cout << centuries << " столетие\n";
}