#include <iostream>
using namespace std;
void first() {
	setlocale(LC_ALL, "RUS");
	int quantity;
	double UAH, USD, EUR, RUB, remainder;
	cout << "¬ведите сумму в гривнах: ";
	cin >> UAH;
	cout << " урс доллара: ";
	cin >> USD;
	cout << " урс евро: ";
	cin >> EUR;
	cout << " урс рубл€: ";
	cin >> RUB;
	quantity = UAH / USD;
	remainder = UAH - quantity * USD;
	cout << endl;
	cout << quantity << " USD и " << remainder << " UAH.\n\n";
	quantity = UAH / EUR;
	remainder = UAH - quantity * EUR;
	cout << quantity << " EUR и " << remainder << " UAH.\n\n";
	quantity = UAH / RUB;
	remainder = UAH - quantity * RUB;
	cout << quantity << " RUB и " << remainder << " UAH.\n\n";
}