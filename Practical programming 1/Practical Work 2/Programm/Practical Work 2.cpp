#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a, b, С, S;
    double n, j;

    setlocale(0, "Rus");
    
    cout << endl << "\t\t\t\t\t\t\t  Задание 1.1" << endl << endl  << "Даны катеты прямоугольного треугольника. Найти его гипотенузу и площадь.";
    
    cout << endl << endl << "Введите катет 1: "; cin >> a; cout << endl << "Введите катет 2: "; cin >> b;
    
        С = sqrt(a * a + b * b);
        S = a * b / 2;
    
    cout << endl << "Гипотенуза = : " << С << endl << "Плошадь = : " << S << endl;

            
            cout << endl << "\t\t\t\t\t\t\t  Даны два действительных числа. Найти среднее арифметическое и среднее геометрическое этих чисел";

            cout << endl << endl << "Введите целое число 1: "; cin >> n;
            cout << endl << endl << "Введите целое число 2: "; cin >> j

            cout << endl << "Cреднее арифметическое этих чисел состовляет: " << (n + j) / 2 << " а, среднее геометрическое этих чисел составляет: " << sqrt(n * j) << "." << endl;
     return 0;
}