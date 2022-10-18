#include <iostream>
#include "Header.h"

using namespace std;
int main() {
	// Задание 1.

	setlocale(LC_ALL, "rus");

	double Radius1, Radius2, Radius3, ArithmeticMeanVolumes, AreaTree = 0;
	const double NumberPi = 3.1415926535;
	int ArithmeticMeanRealRootsResult = 0;

	cout << TextTask_1;
	cout << RadiusFirstBall; cin >> Radius1;
	cout << RadiusSecondBall; cin >> Radius2;
	cout << RadiusThirdBall; cin >> Radius3;
	
	ArithmeticMeanVolumes = (4 * (NumberPi * Radius1 * Radius1 * Radius1) / 3 + 4 * (NumberPi * Radius2 * Radius2 * Radius2) / 3 + 4 * (NumberPi * Radius3 * Radius3 * Radius3) / 3) / 3;

	cout << ArithmeticMeanVolumesText << ArithmeticMeanVolumes;
	cout << Line;

		// Задание 2.
		double  FirstSideFirstTriangle, SecondSideFirstTriangle, ThirdSideFirstTriangle, FirstSideSecondTriangle, SecondSideSecondTriangle, ThirdSideSecondTriangle, FirstSideThirdTriangle, SecondSideThirdTriangle, ThirdSideThirdTriangle, FirstSideFourthTriangle, SecondSideFourthTriangle, ThirdSideFourthTriangle;

		cout << TextTask_2;

		cout << FirstSideFirstTriangleText; cin >> FirstSideFirstTriangle;
		cout << SecondSideFirstTriangleText; cin >> SecondSideFirstTriangle;
		cout << ThirdSideFirstTriangleText; cin >> ThirdSideFirstTriangle;

			cout << FirstSideSecondTriangleText; cin >> FirstSideSecondTriangle;
			cout << SecondSideSecondTriangleText; cin >> SecondSideSecondTriangle;
			cout << ThirdSideSecondTriangleText; cin >> ThirdSideSecondTriangle;
	
				cout << FirstSideThirdTriangleText; cin >> FirstSideThirdTriangle;
				cout << SecondSideThirdTriangleText; cin >> SecondSideThirdTriangle;
				cout << ThirdSideThirdTriangleText; cin >> ThirdSideThirdTriangle;
					
					cout << FirstSideFourthTriangleText; cin >> FirstSideFourthTriangle;
					cout << SecondSideFourthTriangleText; cin >> SecondSideFourthTriangle;
					cout << ThirdSideFourthTriangleText; cin >> ThirdSideFourthTriangle;


		AreaTree += Square(FirstSideFirstTriangle, SecondSideFirstTriangle, ThirdSideFirstTriangle) + Square(FirstSideSecondTriangle, SecondSideSecondTriangle, ThirdSideSecondTriangle) + Square(FirstSideThirdTriangle, SecondSideThirdTriangle, ThirdSideThirdTriangle) + Square(FirstSideFourthTriangle, SecondSideFourthTriangle, ThirdSideFourthTriangle);
		cout << TreeSquareText << AreaTree;
		cout << Line;

			// Задание 3.
			cout << TextTask_3;
			double Factorial_A,Factorial_B, Factorial_C, Factorial_D;

				cout << FactorialFirstNumber; cin >> Factorial_A;
				cout << FactorialSecondNumber; cin >> Factorial_B;
				cout << FactorialThirdNumber; cin >> Factorial_C;
				cout << FactorialFourthNumber; cin >> Factorial_D;

			cout << FactorialText << Factorial(Factorial_A) + Factorial(Factorial_B) + Factorial(Factorial_C) + Factorial(Factorial_D);
			cout << Line;		
}