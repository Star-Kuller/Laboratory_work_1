#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    double t;
    cout << "Введите температуру в градусах цельсия: "; cin >> t; cout << endl;
    cout << "Температура по Фаренгейту: " << (t * 9 / 5) + 32 << "\n \n";
    return 0;
}