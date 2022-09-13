#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	
	int n, k, Result;

	cout << "Задание 2.1:" << endl;
	
	cout << "Введите количество белок (N):" << endl;
	cin >> n;

	cout << "Введите количество орешков (K):" << endl;
	cin >> k;

	Result = k / n;

	cout << "Каждая белка получила по: " << Result << " орешков (>^_^)> <(^_^<)" << endl;
	cout << endl;

		cout << "Задание 2.2:" << endl;

		cout << "Введите количество белок (N):" << endl;
		cin >> n;

		cout << "Введите количество орешков (K):" << endl;
		cin >> k;

		Result = k % n;

		cout << "Осталось: " << Result << " орешков (>^_^)>" << endl;
		cout << endl;
			
			cout << "Задание 2.3:" << endl;

			cout << "Введите натуральное число:" << endl;
			cin >> n;

			Result = n % 10;

			cout << "Последняя цифра " << Result << " <(^_^<)" << endl;
			cout << endl;

				cout << "Задание 2.3:" << endl;

				cout << "Введите натуральное число:" << endl;
				cin >> n;

				Result = n / 10;

				cout << "Первая цифра " << Result << " (>^_^)>" << endl;
				cout << endl;
	
	return 0;
}
