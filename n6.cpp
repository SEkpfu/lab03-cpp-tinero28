#include <iostream>
using namespace std;

int main()
{
    int n, count = 0, countCh = 0;
    string r = "да";
    cout << "введите число ";
    cin >> n;
    while (r != "нет") {
        if (n % 2 == 0) countCh++;
        count++;
        cout << "если хотите прекратить ввод чисел, введите \"нет\": ";
        cin >> r;
        if (r != "нет") {
            cout << "введите число ";
            cin >> n;
        }
    }
    cout << "всего введено чисел: " << count << "\nчетных: " << countCh;

}
