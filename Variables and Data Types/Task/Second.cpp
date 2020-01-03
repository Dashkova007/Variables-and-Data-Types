#include <iostream>
using namespace std;
void second() {
	setlocale(LC_ALL, "RUS");
	int hryvnia, difference;
	float penny, sum;
	cout << "Введите сумму в гривнах: ";
	cin >> hryvnia;
	cout << "Введите сумму в копейках: ";
	cin >> penny;
	penny = penny / 100;
	sum = hryvnia + penny;
	difference = sum * 100;
	cout << sum << " грн. " << difference << " коп.\n";
}