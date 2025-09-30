#include <iostream>
using namespace std;

int main()
{
    int n, max{ 0 }, count{ 0 };
    cin >> n;

    while (n != 0) {
        if (n > max) { // если найден новый наибольший элемент
            max = n;   // присваиваем его значение переменной макс
            count = 1; // сбрасываем счётчик 
        }
        else if (n == max) count++; // если найдено число, равное текущему наибольшему элементу - прибавляем 1 к значению счётчика 
        cin >> n;
    }
    cout << count;
}
