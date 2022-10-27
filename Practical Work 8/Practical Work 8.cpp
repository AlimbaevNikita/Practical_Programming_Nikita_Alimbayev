#include <iomanip>
#include <iostream>
using namespace std;
#define M 4
#define N 6

int main(void) {
	string textTask1 = "\n1.Найти количество элементов в каждом столбце прямоугольной вещественной матрицы, меньших среднего арифметического элементов рассматриваемого столбца.\n\n";
	string textTask2 = "\n2.Вывести на экран максимальные элементы каждой строки двумерного массива с указанием их индексов.\n";

	setlocale(LC_ALL, "rus");
	int i, k, a[M][N];
	srand(time(NULL));
	cout << textTask1;
	for (i = 0; i < M; i++) {
		for (k = 0; k < N; k++)
			cout << setw(6) << (a[i][k] = rand() % 101 - 50);
		cout << endl;
	}

	cout << endl;
	for (k = 0; k < N; k++) {
		int SumElements = 0;
		for (i = 0; i < M; i++)
			SumElements += a[i][k];

		double avg = (double)SumElements / M;

		int count = 0;
		for (i = 0; i < M; i++)
			if (a[i][k] > avg)
				count++;

		cout << setw(6) << count;
	}
	cout << endl;

	cout << textTask2;
	int minimum = 1; int maximum = 20;

	const int p = 5; const int j = 5; const int size = 5;
	int array[p][j], maximumElement[size] = { 0 }, numberInArray, ctr = 0;
	cout << endl;
	for (int q = 0; q < i; q++) {
		for (int w = 0; w < j; w++) {
			array[q][w] = rand() % (maximum - minimum + 1) + minimum;
			cout << array[q][w] << "\t";
		}
		cout << endl;
	}
	for (int q = 0; q < i; q++)
	{
		numberInArray = array[q][0];
		for (int w = 1; w < j; w++)
		{
			if (numberInArray < array[q][w]) {
				maximumElement[ctr] = array[q][w];
				numberInArray = array[q][w];
			}
			else
				maximumElement[ctr] = numberInArray;
		}
		ctr++;
	}
	cout << "\nМаксимальные элементы строк: \n\n";
	for (int w = 0; w < size; w++)
		cout << maximumElement[w] << "\t";
		cout << "\n";

	return 0;
}