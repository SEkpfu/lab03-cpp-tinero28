#include <iostream>
using namespace std;

int main() {
	int n;
	double sum = 0.0;
	cout << "введите n ";
	cin >> n;
	for (double i = 1; i <= n; i++) {
		sum += (1.0 / (2 * i));
	}
	cout << sum;
	return 0;
}
