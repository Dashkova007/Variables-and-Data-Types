#include <iostream>
using namespace std;
void fourth() {
	setlocale(LC_ALL, "RUS");
	float number;
	int penny, hryvnia;
	cout << "Введите число = ";
	cin >> number;
	hryvnia = int(number);
	penny = (number - hryvnia) * 100;
	cout << hryvnia << " грн. " << penny << " коп.\n";
}
