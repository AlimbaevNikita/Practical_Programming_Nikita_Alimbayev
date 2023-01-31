#pragma once
#include <iostream>
using namespace std;

double Square(double FirstSide, double  SecondSide, double  ThirdSide) {
	double Perimeter = (FirstSide + SecondSide + ThirdSide) / 2;
	double TreeSquare = sqrt(Perimeter * (Perimeter - FirstSide) * (Perimeter - SecondSide) * (Perimeter - ThirdSide));
	return TreeSquare;
}
int Factorial(int Number)
{
	if (Number < 1)
		return 0;

	if (Number == 1)
		return 1;

	return Number * Factorial(Number - 1);
}

string TextTask_1 = "\n\t\t\tДаны радиусы трех шаров. Вычислить среднее арифметическое объемов этих шаров. \n";
string TextTask_2 = "\n\t\t\tВычислить площадь Ёлки, состоящей из четырех треугольников с известными сторонами. \n";
string TextTask_3 = "\n\t\t\tВычислить значение выражения a! + b! + c! + d! \n";

string ArithmeticMeanVolumesText = "\n Cреднее арифметическое объемов этих шаров равно: ";
string TreeSquareText = "\n Площадь Ёлки, составляет: ";
string FactorialText = "\n Значение выражения данных факториалов равно: ";

string RadiusFirstBall = "\n Введите радиус первого шара: ";
string RadiusSecondBall = "\n Введите радиус второго шара: ";
string RadiusThirdBall = "\n Введите радиус третьего шара: ";

string FirstSideFirstTriangleText = "\n Введите первую сторону первого треугольника:  ";
string SecondSideFirstTriangleText = "\n Введите вторую сторону первого треугольника:  ";
string ThirdSideFirstTriangleText = "\n Введите третью сторону первого треугольника:  ";

string FirstSideSecondTriangleText = "\n Введите первую сторону второго треугольника:  ";
string SecondSideSecondTriangleText = "\n Введите вторую сторону второго треугольника:  ";
string ThirdSideSecondTriangleText = "\n Введите третью сторону второго треугольника:  ";

string FirstSideThirdTriangleText = "\n Введите первую сторону третьего треугольника:  ";
string SecondSideThirdTriangleText = "\n Введите вторую сторону третьего треугольника:  ";
string ThirdSideThirdTriangleText = "\n Введите третью сторону третьего треугольника:  ";

string FirstSideFourthTriangleText = "\n Введите первую сторону четвёртого треугольника:  ";
string SecondSideFourthTriangleText = "\n Введите вторую сторону четвёртого треугольника:  ";
string ThirdSideFourthTriangleText = "\n Введите третью сторону четвёртого треугольника:  ";

string FactorialFirstNumber = "\n Введите факториал первого числа:  ";
string FactorialSecondNumber = "\n Введите факториал второго числа:  ";
string FactorialThirdNumber = "\n Введите факториал третьего числа:  ";
string FactorialFourthNumber = "\n Введите факториал третьего числа:  ";

string Line = "\n\n------------------------------------------------------------------------------------------------------------------------";