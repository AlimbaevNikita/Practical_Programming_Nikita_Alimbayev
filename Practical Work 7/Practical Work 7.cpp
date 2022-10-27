#include <iostream>
#include <cmath>
#include <iomanip>
#include <fstream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{

	float sumArrayElements = 0.0; // сумма элементов массива.

	//случайно генерует степень от 1 до 10 для 10 елементов
	int arrayElements[10]{};
	srand(time(NULL));
	
	for (int i = 0; i < 10; i++)
	{
		arrayElements[i] = 1 + rand() % 10;    
	}

	setlocale(LC_ALL, "rus");
	cout << endl << "1)Массив c числами oт 1 до 10: ";
	for (int i = 0; i < 10; i++)
	{
		//выводим на консоль готовый массив
		cout << arrayElements[i] << "  ";
	}

	for (int x = 0; x < 10; x++)
	{
		sumArrayElements += arrayElements[x];
	}

	cout << endl;
	cout << endl <<"2) Сумма элементов массива равна: " << sumArrayElements <<endl;
	srand(time(NULL));

	const size_t size = 10;
	int arrayElementsTask2[size];
	int sumArrayElementMultiple7 = 0;

	std::cout << "\nЭлементы массива: ";
	for (std::size_t i = 0; i != size; ++i) {

		arrayElementsTask2[i] = rand() % 101 - 50;
		std::cout << arrayElementsTask2[i] << " ";

		if (arrayElementsTask2[i] % 7 == 0)
			sumArrayElementMultiple7 += arrayElementsTask2[i];

	}

	std::cout << "\nСумма элементов массива кратных 7: " << sumArrayElementMultiple7 << "\n";

	int Array[10] = { 1, 3, 2, 4, 8, 11, 3, 3, 8, 7 };
	int MaximumArrayElement = Array[0];

	for (int i = 0; i < 10; ++i) {
		if (Array[i] > MaximumArrayElement) {
			MaximumArrayElement = Array[i];
		}
	}

	cout << "\n3) Максимальный элемент массива равен: " << MaximumArrayElement << endl;

	cout << "\nЗадание 2. 5. Заменить отрицательные числа в массиве их квадратами, оставив остальные без изменения." << endl;
	
	const int n = 10;
	int arrayToReplace[n] = { -5, -4, -3, -2, -1, 0, 1, 2, 3, 4 };

	for (int i = 0; i < n; i++)
		if (arrayToReplace[i] < 0)
			arrayToReplace[i] *= arrayToReplace[i];

	for (int i = 0; i < n; i++)
		cout << arrayToReplace[i] << ' ';

	cout << endl;

	return 0;

}