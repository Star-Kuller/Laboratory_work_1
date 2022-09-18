#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    int pound;
    int shilling;
    int penny;
    cout << "Введите количество фунтов: "; cin >> pound;
    cout << "Введите количество шиллингов: "; cin >> shilling;
    cout << "Введите количество пенсов: "; cin >> penny;
    penny = penny + (shilling * 12);
    cout << "Десятичных фунтов: " << round((float)(pound + ( ((float)penny / 12) / 20 ))*100)/100 << "\n \n";
    return 0;
}