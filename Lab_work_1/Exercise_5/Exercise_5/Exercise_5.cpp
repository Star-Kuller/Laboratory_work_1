#include <iostream>
#include <wchar.h>
#include <io.h>
#include <fcntl.h>

using namespace std;

int main()
{
    _setmode(_fileno(stdout), _O_U16TEXT);
    float pound;
    float shilling;
    int penny;
    wcout << L"Введите число десятичных фунтов: "; cin >> pound;
    shilling = pound * 20;
    penny = shilling * 12;
    shilling = (int)(penny / 12);
    penny = penny - shilling * 12;
    pound = (int)(shilling / 20);
    shilling = shilling - pound * 20;
    wchar_t F = L'\u00A3';
    wcout << L"Эквивалентная сумма в старой форме записи: " << F << (int)pound << "." << (int)shilling << "." << penny << "\n \n";
    return 0;
}