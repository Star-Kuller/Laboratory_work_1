#include <iostream>
#include <wchar.h>
#include <io.h>
#include <fcntl.h>
using namespace std;

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    int pound;
    int shilling;
    int penny;
    wcout << L"Введите количество фунтов: "; cin >> pound;
    wcout << L"Введите количество шиллингов: "; cin >> shilling;
    wcout << L"Введите количество пенсов: "; cin >> penny;
    penny = penny + (shilling * 12);
    wchar_t F = L'\u00A3';
    wcout << L"Десятичных фунтов: " << F << round((float)(pound + (((float)penny / 12) / 20)) * 100) / 100 << "\n \n";
    return 0;
}