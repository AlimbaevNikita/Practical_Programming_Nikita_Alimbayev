#include <iostream>
#include <math.h>
#include "TextTrash.h"

using namespace std;
int main()
{
    //Задание 1
    setlocale(LC_ALL, "ru");
    uint32_t n;
    float a, b, c;
    Task1TextOutput();
    cout << "Введите n = "; cin >> n;
    for (uint32_t i = 0;i < n;i++) {
        cout << "a = "; cin >> a;
        cout << "b = "; cin >> b;
        cout << "c = "; cin >> c;

        cout << ((a + b > c) ? "Да" : "Нет") << endl;
    }
        //Задание 2
       Task2TextOutput();
        for (int i = 100; i < 1000; i++)
            if (i / 100 + i / 10 % 10 + i % 10 == (i / 100) * (i / 10 % 10) * (i % 10))
                cout << i << endl;

            //Задание 3
            Task3TextOutput();
            const float RydbergСonstant = 8.31441;
            double Pressure, temp = 10, AmountSubstance, Volume;
            int index = 0;

            AmountSubstance = pow(10, 16);
            Volume = 0.000001;

            while (index < temp) {
                Pressure = (index * AmountSubstance * RydbergСonstant) / Volume;
                cout << Pressure << endl;
                index++;
            };

    return 0;
}

