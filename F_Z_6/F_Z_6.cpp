// F_Z_6.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include<Windows.h>
/*Написать функцию, которая принимает две даты (т.е. функция принимает шесть параметров) и
вычисляет разность в днях между этими датами. Для решения этой задачи необходимо также
написать функцию, которая определяет, является ли год високосным.

*/
using namespace std;


bool vys(int year)
{
    bool res = false;
    if (year % 4 == 0)
        res = true;
    if (year % 100 == 0)
        res = false;
    if (year % 400 == 0)
        res = true;
    return res;
}
int date(int d, int m, int y)
{
    int k = d;
    if (vys(y) && (m > 2))
        k += y * 366;
    else k += y * 365;
    switch (m - 1)
    {
    case 12: k += 31;
    case 11: k += 30;
    case 10: k += 31;
    case  9: k += 30;
    case  8: k += 31;
    case  7: k += 31;
    case  6: k += 30;
    case  5: k += 31;
    case  4: k += 30;
    case  3: k += 31;
    case  2: k += 28;
    case  1: k += 31;
    }
    return k;
}
int difference(int d1, int d2, int m1, int m2, int y1, int y2)
{
    int k = date(d2, m2, y2) - date(d1, m1, y1);
    return k;
}
int main()
{
    SetConsoleOutputCP(1251);
    int d1, d2, m1, m2, y1, y2;
    cout << "Введите первый день: ";
    cin >> d2;
    cout << "Введите первый месяц: ";
    cin >> m2;
    cout << "Введите первый год: ";
    cin >> y2;
    cout << "Введите второй день: ";
    cin >> d1;
    cout << "Введите второй месяц: ";
    cin >> m1;
    cout << "Введите второй год: ";
    cin >> y1;
    cout << "Разность в днях между этими датами составляет " << Difference(d1, d2, m1, m2, y1, y2) << " дней.\n";
    system("PAUSE");
}

