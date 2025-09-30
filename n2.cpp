#include <iostream>
using namespace std;

int main() {
	int n;
	int min = 999999, count = 0, sum = 0;
	cout << "введите 7 целых чисел\n";
	for (int i = 0; i < 7; i++) {
		cout << "введите " << i+1 << "-е число ";
		cin >> n;
		if (n < 0) count++;
		if ((n >= 10 && n < 100) || (n <= -10 && n > -100)) sum += n;
		if (n < min) min = n;
	}
	cout << "кол-во отрицательных чисел: " << count << "\nсумма двузначных чисел: " << sum << "\nнаименьшее число: " << min;
	return 0;
}
