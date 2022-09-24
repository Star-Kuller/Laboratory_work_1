#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b,c,d, answ_up, answ_down, nod;
    char dummychar;
    cout << "Введите первую дробь: "; cin >> a >> dummychar >> b;
    cout << "Введите вторую дробь: "; cin >> c >> dummychar >> d;
    // сложение
    answ_up = (a * d + b * c);
    answ_down = (b * d);
    // сокращение
    if (answ_up < answ_down) {
        for (int i = 1; i < answ_down; i++) {
            if ((answ_up % i == 0) & (answ_down % i == 0)) { // нахождение НОД, если знаменатель больше числителя
                nod = i;
            }
        }
    }
    else {
        for (int i = 1; i < answ_up; i++) {
            if ((answ_up % i==0) & (answ_down % i==0)) { // нахождение НОД, если числитель больше знаменателя
                nod = i;
            }
        }
    }
    if (answ_up % answ_down == 0) { // проверка является ли число целым
        cout << "Сумма равна: " << answ_up / nod << "\n \n"; // вывод целого числа, если целое
    }
    else {
        cout << "Сумма равна: " << answ_up / nod << "/" << answ_down / nod << "\n \n"; // вывод дробного числа, если дробное
    }
    return 0;
}