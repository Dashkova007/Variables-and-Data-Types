#include <iostream>
using namespace std;
void first() {
	setlocale(LC_ALL, "RUS");
	int quantity;
	double UAH, USD, EUR, RUB, remainder;
	cout << "������� ����� � �������: ";
	cin >> UAH;
	cout << "���� �������: ";
	cin >> USD;
	cout << "���� ����: ";
	cin >> EUR;
	cout << "���� �����: ";
	cin >> RUB;
	quantity = UAH / USD;
	remainder = UAH - quantity * USD;
	cout << endl;
	cout << quantity << " USD � " << remainder << " UAH.\n\n";
	quantity = UAH / EUR;
	remainder = UAH - quantity * EUR;
	cout << quantity << " EUR � " << remainder << " UAH.\n\n";
	quantity = UAH / RUB;
	remainder = UAH - quantity * RUB;
	cout << quantity << " RUB � " << remainder << " UAH.\n\n";
}