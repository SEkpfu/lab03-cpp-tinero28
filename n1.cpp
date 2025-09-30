#define	_USE_MATH_DEFINES
#include <iostream>
#include <iomanip>
using namespace std;

int n1a();
int n1b();
int n1c();
int n1d();

int main() {
	n1d();
	return 0;
}

int n1a() {
	double tC = 0, tF = 0;
	while (tC <= 100) {
		cout << tC << "°C\t";
		tF = 9.0 / 5 * tC + 32;
		cout << tF << "°F\n";
		tC += 10;
	}
	return 0;
}

int n1b() {
	double x = 0.0, y = 0.0;
	do {
		y = log(x + 1) * sin(x);
		cout << x << '\t' << y << endl;
		x += 0.5;
	} while (x < 5.5);
	return 0;
}

int n1c() {
	double y = 0.0;
	for (double x = 0.0; x < 2.1 * M_PI; x += M_PI / 6.0) {
		y = cos(x);
		cout << setw(10);
		cout << left <<  x << "\t" << left << y << endl;
	}
	return 0;
}

int n1d() {
	double y = 0.0;
	for (double x = -1.5; x < 1.6; x += 0.25) {
		if (x < -0.5) {
			y = 1 - pow(x, 2);
			cout << x << "\t" << y << endl;
		}
		else if (x <= 1) {
			y = x + 1;
			cout << x << "\t" << y << endl;
		}
		else {
			y = 1 + sqrt(fabs(cos(x)));
			cout << x << "\t" << y << endl;
		}
	}
	return 0;
}