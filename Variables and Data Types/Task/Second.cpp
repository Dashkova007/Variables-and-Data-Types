#include <iostream>
using namespace std;
void second() {
	setlocale(LC_ALL, "RUS");
	int hryvnia, difference;
	float penny, sum;
	cout << "������� ����� � �������: ";
	cin >> hryvnia;
	cout << "������� ����� � ��������: ";
	cin >> penny;
	penny = penny / 100;
	sum = hryvnia + penny;
	difference = sum * 100;
	cout << sum << " ���. " << difference << " ���.\n";
}