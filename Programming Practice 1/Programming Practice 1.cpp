#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float x, y, q, w, Result;

    cout << "Задание 1.2:" << endl;
    
    cout << "Введите x:" << endl;
    cin >> x;

    Result = sin(5 * x) + 2 * tan(pow(x,2));    
    
    cout << "Результат: " << Result << endl;
    cout << endl;

        cout << "Задание 1.2:" << endl;
    
        cout << "Введите x, а затем y" << endl;
        cin >> q >> y;

        Result = 2 * x + 3 * pow(y,2) - sin(3 * x);

        cout << "Результат: " << Result << endl;
        cout << endl;




    return 0;
}
