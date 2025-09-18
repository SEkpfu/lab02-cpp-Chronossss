#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
#include <math.h>
#include <algorithm>
using namespace std;
int main() {
	int d, m, y, dn, mn, yn, s;
	cout << "Birthday: " << endl;
	cout << "Day: ";
	cin >> d;
	cout << "Month: ";
	cin >> m;
	cout << "Year: ";
	cin >> y;
	cout << "Day now: " << endl;
	cout << "Day: ";
	cin >> dn;
	cout << "Month: ";
	cin >> mn;
	cout << "Year: ";
	cin >> yn;
	if (mn > m) {
		s = yn - y;
	}
	else if (mn == m) {
		if (dn >= d) {
			s = yn - y;
		}
		else {
			s = yn - y - 1;
		}
	}
	else {
		s = yn - y - 1;
	}
	if (((s % 100) >= 10) && (((s % 100) <= 20))) {
		cout << "Vam " << s << " let";
	}
	 else if (s % 10 == 1) {
		cout << "Vam " << s << " god";
	}
	else if ((s % 10 == 2) || (s % 10 == 3) || (s % 10 == 4)) {
		cout << "vam " << s << " goda";
	}
	else {
		cout << "Vam " << s << " let";
	}
}