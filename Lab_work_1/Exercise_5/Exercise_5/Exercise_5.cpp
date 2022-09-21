#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float pound;
    float shilling;
    int penny;
    cout << "Введите число десятичных фунтов: "; cin >> pound;
    shilling = pound * 20;
    penny = shilling * 12;
    shilling = (int)(penny / 12);
    penny = penny - shilling * 12;
    pound = (int)(shilling / 20);
    shilling = shilling - pound * 20;
    cout << "Эквивалентная сумма в старой форме записи: " << (int)pound << "." << (int)shilling << "." << penny << "\n \n";
    return 0;
}