#include <iostream>
#include "TextTrash.h"

using namespace std;

int DefinitionThreeDigitNumber, NumberInterval, ThirdDigit, SecondDigit, FirstDigit, NumerAldifferEnces, CoordinateX1, CoordinateX2, CoordinateY1, CoordinateY2, CoordinateX, CoordinateY;
bool HitResult;

int main()
{
	//Задание 1

	setlocale(0,"");
	Task1TextOutput();

	EnterNumber(); cin >> DefinitionThreeDigitNumber;

		if (100 <= DefinitionThreeDigitNumber && DefinitionThreeDigitNumber < 1000) {
			NumberYeaNot(); cout << DefinitionThreeDigitNumber; YesThreeDigitNumber2();
		}
		else {
			NumberYeaNot(); cout << DefinitionThreeDigitNumber; NoThreeDigitNumber2();
		}
	line();
	
		//Задание 2
		
		Task2TextOutput();
		EnterNumber(); cin >> NumberInterval;

				if (-1 <= NumberInterval && NumberInterval < 17) {
					NumberYeaNot(); cout << NumberInterval; YesInInterval();
				}
				else {
					NumberYeaNot();cout << NumberInterval; NoInterval();
				}
		line();
			//Задание 3
			Task3TextOutput();
			
			EnterNumber(); cin >> NumerAldifferEnces;

			ThirdDigit = NumerAldifferEnces % 10;

			SecondDigit = (NumerAldifferEnces % 100) / 10;

			FirstDigit = NumerAldifferEnces / 100;

			if (FirstDigit == SecondDigit && FirstDigit == ThirdDigit && SecondDigit == ThirdDigit)
			{
				AllDigitRepeated();
			}
			else
			{
				NotAllDigitRepeated();
			}
			line();

			//Задание 4
			Task4TextOutput();
			EnterX1Сoordinate(); cin >> CoordinateX1; EnterX2Сoordinate(); cin >> CoordinateX2;
			EnterY1Сoordinate(); cin >> CoordinateY1; EnterY2Сoordinate(); cin >> CoordinateY2;

				if ((CoordinateX1 == CoordinateX2) || (CoordinateY1 == CoordinateY2)) {
					RookKnocksPiece();
				}
				else {
					RookNoKnockPiece();
				}
				line();
					//Задание 5
					EnterXСoordinate(); cin >> CoordinateX;
					EnterYСoordinate(); cin >> CoordinateY;

					HitResult = (CoordinateX > 1 != 0 && CoordinateX < 4 != 0 && CoordinateY > 2 != 0 && CoordinateY < 7 != 0);

					cout << endl << endl << std::boolalpha << HitResult << endl;
					
					return(0);
}