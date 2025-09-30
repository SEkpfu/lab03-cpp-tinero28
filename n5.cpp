#include <iostream>
using namespace std;

int main() {
	double eps = 0.001, sum = 0.0;
	for (int i = 0; fabs((pow(-1, i) / (i * 2 + 1))) > eps; i++) {
		sum += (pow(-1, i) / (i * 2 + 1));
	}
	cout << sum;
	return 0;
}