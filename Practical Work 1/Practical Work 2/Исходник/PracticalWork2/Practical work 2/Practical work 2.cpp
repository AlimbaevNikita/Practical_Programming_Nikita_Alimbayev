// Practical work 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float v1,v2,a1,a2,s, Result;

    cout << "Определить время, через которое встретятся два тела, равноускоренно движущиеся навстречу друг к другу, если известны их начальные скорости, ускорение, начальное расстояние между ними." << endl;

    cout << "Введите начальную скорость 1 тела:" << endl;
    cin >> v1;
    cout << "Введите ускорение 1 тела:" << endl;
    cin >> a1;

    cout << "Введите начальную скорость 2 тела:" << endl;
    cin >> v2;
    cout << "Введите ускорение 2 тела:" << endl;
    cin >> a2;

    cout << "Введите расстояние между телами:" << endl;
    cin >> s;

    Result = ((-(v1 + v2) + sqrt((v1 + v2) * (v1 + v2) + 2 * (a1 + a2) * s)) / (a1 + a2) / 8 / 4);

    cout << "Результат: " << Result << "секунд" << endl;
    cout << endl;
}
