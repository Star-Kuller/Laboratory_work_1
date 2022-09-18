#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int a,b,c,d;
    char dummychar;
    cout << "Введите первую дробь: "; cin >> a >> dummychar >> b;
    cout << "Введите вторую дробь: "; cin >> c >> dummychar >> d;
    cout << "Сумма равна: " << (a * d + b * c) << "/" << (b * d) << "\n \n";
    return 0;
}