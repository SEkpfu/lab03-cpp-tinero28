#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i{ 0 }; i < n; i++) { // цикл, реализовывающий вывод n строк 

		if (i % 2 == 0) for (int m{ 0 }; m < n; m += 2) cout << "  * "; // циклы, реализовывающие вывод n элементов 

		else for (int m{ 0 }; m < n; m += 2) cout << "*   "; // за счет "if"/"else" реализована смена символов в начале строки 
		cout << endl;
	}
}