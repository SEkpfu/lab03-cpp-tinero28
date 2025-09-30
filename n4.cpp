#include <iostream>
#include <cmath>
using namespace std;

int n4a();
int n4b();

int main() {
	n4b();
	return 0;
}

int n4a() {
	int n;
	double x;
	cout << "введите n ";
	cin >> n;
	cout << "введите х ";
	cin >> x;
	double k = cos(x);
	for (int i = 1; i < n; i++) k = cos(x + k);
	cout << k;
	return 0;
}

int n4b() {
	int n;
	double x;
	cout << "введите n ";
	cin >> n;
	cout << "введите х ";
	cin >> x;
	double k = sqrt(x);
	for (int i = 1; i < n; i++) k = sqrt(x + k);
	cout << k;
	return 0;
}