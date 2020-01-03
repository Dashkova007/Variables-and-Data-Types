#include <iostream>
using namespace std;
void third() {
	enum days_week { MONDAY = 1, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY, SUNDAY };
	cout << "Today is the " << MONDAY << "st day of the week\n";
	cout << "Today is the " << TUESDAY << "st day of the week\n";
	cout << "Today is the " << WEDNESDAY << "st day of the week\n";
	cout << "Today is the " << THURSDAY << "st day of the week\n";
	cout << "Today is the " << FRIDAY << "st day of the week\n";
	cout << "Today is the " << SATURDAY << "st day of the week\n";
	cout << "Today is the " << SUNDAY << "st day of the week\n";
}