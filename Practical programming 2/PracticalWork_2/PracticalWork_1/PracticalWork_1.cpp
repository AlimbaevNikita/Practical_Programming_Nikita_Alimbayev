#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <vector>
#include <sstream>
#include <string>

using namespace std;

double calculateFunctionValue(double x);

double calculateExpression(int n, double x) {
    return pow(x, n) / n;
}

unsigned long long double_factorial(unsigned int n) {
    unsigned long long result1 = 1;

    if (n % 2 == 0) {
        for (unsigned int i = 2; i <= n; i += 2) {
            result1 *= i;
        }
    }
    else {
        for (unsigned int i = 1; i <= n; i += 2) {
            result1 *= i;
        }
    }

    return result1;
}

int main()
{
    setlocale(LC_ALL, "Russian");

    cout << "Задание 1\n";
    cout << "Требуется определить, бьет ли ферзь, стоящий на клетке с указанными координатами (номер строки и номер столбца), фигуру, стоящую на другой указанной клетке.\n\n";

    cout << "Введите координаты ферзя и другой фигуры: ";
    int queen_row, queen_col, piece_row, piece_col;
    cin >> queen_row >> queen_col >> piece_row >> piece_col;

    bool can_capture = (queen_row == piece_row) || (queen_col == piece_col) || (abs(queen_row - piece_row) == abs(queen_col - piece_col));
    cout << (can_capture ? "Да, ферзь может побить фигуру" : "Нет, ферзь не может побить фигуру") << endl;


        double lowerBound, upperBound, step;
        cout << "Задание 2: Таблица значений функции с помощью условных операторов" << endl;
        cout << "Введите границы интервала [нижняя граница, верхняя граница] и шаг через пробел: ";
        cin >> lowerBound >> upperBound >> step;

        cout << setw(10) << "x" << setw(15) << "y" << endl;
        cout << setfill('-') << setw(25) << "-" << setfill(' ') << endl;

        for (double x = lowerBound; x <= upperBound; x += step) {
            double y = calculateFunctionValue(x);
            cout << fixed << setw(10) << setprecision(2) << x << setw(15) << setprecision(4) << y << endl;
        }

            int r;
            cout << "Задание 3\n";
            cout << "Требуется вывести среди данных N чисел количество нулей, положительных, отрицательных чисел\n\n";
            cout << "Введите количество чисел: ";
            cin >> r;

            vector<int> numbers(r);

            int countZero = 0, countPositive = 0, countNegative = 0;
            for (int i = 0; i < r; i++) {
                cout << "Введите число #" << i + 1 << ": ";
                cin >> numbers[i];
                if (numbers[i] == 0) {
                    countZero++;
                }
                else if (numbers[i] > 0) {
                    countPositive++;
                }
                else {
                    countNegative++;
                }
            }

            cout << "Количество нулей: " << countZero << endl;
            cout << "Количество положительных чисел: " << countPositive << endl;
            cout << "Количество отрицательных чисел: " << countNegative << endl;

                const double x = 2.0;
                double result4 = 0.0;

                cout << "Задание 4" << endl;
                cout << "Разработать функцию которая для заданного натурального числа n и вещественного х находит значение выражения" << endl;

                result4 += calculateExpression(2, x) + calculateExpression(4, x) + calculateExpression(6, x);

                cout << "Результат: " << result4 << endl;

                    cout << "Задание 5" << endl;
                    cout << "Описать функцию, вычисляющую двойной факториал:" << endl;

                    unsigned int n = 7;
                    unsigned long long result1 = double_factorial(n);

                    cout << "Двойной факториал " << n << " равен " << result1 << endl;

                        cout << "Задание 6" << endl;
                        cout << "Дана последовательность из 𝑛 действительных чисел" << endl;
                        const int kArraySize = 10; 
                        vector<double> array(kArraySize); 
                        double xt; 
                        int count_greater_than_x = 0; 
                        double sum_of_all_elements = 0;

                        for (int i = 0; i < kArraySize; i++) {
                            cout << "Введите элемент " << i << " массива: ";
                            cin >> array[i];
                        }

                        cout << "Введите число x: ";
                        cin >> xt;
                        cout << "Номера элементов, больших " << xt << ": ";
                        for (int i = 0; i < kArraySize; i++) {
                            if (array[i] > xt) {
                                cout << i << " ";
                                count_greater_than_x++;
                            }
                        }
                        if (count_greater_than_x == 0) {
                            cout << "Нет таких элементов" << endl;
                        }
                        cout << endl;

                        for (int i = 0; i < kArraySize; i++) {
                            sum_of_all_elements += array[i];
                        }

                        if (sum_of_all_elements >= 10 && sum_of_all_elements < 100) {
                            cout << "Сумма всех элементов является двузначным числом" << endl;
                        }
                        else {
                            cout << "Сумма всех элементов не является двузначным числом" << endl;
                        }
                            
                            cout << "Задание 7" << endl;
                            cout << "По данным ФИО сформируйте строку, содержащую фамилию с инициалами. Например, по ‘Ivanov Ivan Ivanovich’ получите \"Ivanov I.I\"" << endl;
                            string full_name = "Ivanov Ivan Ivanovich";
                            istringstream iss(full_name);
                            string last_name, first_name, middle_name;
                            iss >> last_name >> first_name >> middle_name;
                            string result2 = last_name + " " + first_name.substr(0, 1) + "." + middle_name.substr(0, 1) + ".";
                            cout << result2 << std::endl;
    return 0;
}

double calculateFunctionValue(double x) {
    double result;
    if (x >= 0.9) {
        result = 1 / pow(0.1 + x, 2);
    }
    else if (x >= 0 && x < 0.9) {
        result = 0.2 * x + 0.1;
    }
    else {
        result = pow(x, 2) + 0.2;
    }
    return result;
}