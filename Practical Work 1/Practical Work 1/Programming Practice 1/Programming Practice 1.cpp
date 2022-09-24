#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");

    float x, y, b, a,  Result;

    cout << "Задание 1.1    :" << endl;
    
    cout << "Введите x:" << endl;
    cin >> x;

    Result = sin(5 * x) + 2 * tan(pow(x,2));    
    
    cout << "Результат: " << Result << endl;
    cout << endl;

        cout << "Задание 1.2:" << endl;
    
        cout << "Введите x, а затем y" << endl;
        cin >> x >> y;

        Result = 2 * x + 3 * pow(y,2) - sin(3 * x);
        cout << endl;

        cout << "Результат: " << Result << endl;
        cout << endl;
            
            cout << "Задание 1.3:" << endl;

            cout << "Введите y:" << endl;
            cin >> x;

            Result = sqrt((sin(pow(x, 2))) / (2 * cos(2 * x))) + 2 * abs(tan(x) - 25);

            cout << "Результат: " << Result << endl;
            cout << endl;

            /*
            float x = 99999999;

            float x1 = pow(x, 2);
            float x2 = tan(x);
            float x3 = x2 - 25;
            float x4 = abs(x3);
            float x5 = 2 * x4;
            float x6 = cos(2 * x);
            float x7 = 2 * x6;
            float x8 = sin(x1);
            float x9 = x8 / x7;
            float x10 = sqrt(x9);




            Result = x10 + x5;

            cout << "Результат: " << x1 << endl << x2 << endl << x3 << endl << x4 << endl << x5 << endl << x6 << endl << x7 << endl << x8 << endl << x9 << endl  << x10 << endl << Result << endl;
            cout << endl;
            */

                cout << "Задание 1.4:" << endl;

                cout << "Введите x:" << endl;
                cin >> x;

                Result = sqrt(1 - (2 / pow(x, 2))) + abs(pow(x, 5) - 3 * x);
                
                cout << "Результат: " << Result << endl;
                cout << endl;

                        cout << "Задание 1.5:" << endl;

                        cout << "Введите x, а затем y" << endl;
                        cin >> x >> y;

                        Result = (2 * x * y + 4 * pow(x, 2) )/ (5 * y);

                        cout << "Результат: " << Result << endl;
                        cout << endl;
                            
                            cout << "Задание 1.6:" << endl;

                            cout << "Введите b" << endl;
                            cin >> b;

                            Result = 4*sqrt(cos(3 * b)-2*sin(b));

                            cout << "Результат: " << Result << endl;
                            cout << endl;
                                
                                cout << "Задание 1.7:" << endl;

                                cout << "Введите x, а затем y" << endl;
                                cin >> x >> y;

                                Result = -2 * cos(pow(x, 2)) + 2 * pow(y, 7);

                                cout << "Результат: " << Result << endl;
                                cout << endl;
                                    
                                    cout << "Задание 1.8:" << endl;

                                    cout << "Введите a, а затем b" << endl;
                                    cin >> a >> b;

                                    Result = (abs(2 * a + tan(3  * a)))/(sqrt(1+pow(b,8)+11));

                                    cout << "Результат: " << Result << endl;
                                    cout << endl;
                                    return 0;
}
