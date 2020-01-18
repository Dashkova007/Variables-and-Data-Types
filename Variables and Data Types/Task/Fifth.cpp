#include <iostream>
using namespace std;
void fifth() {
	setlocale(LC_ALL, "RUS");
	int year, centuries;
	cout << "Введите год = ";
	cin >> year;
	centuries = (year - 1) / 100 + 1;
	cout << centuries << " столетие\n";
}
