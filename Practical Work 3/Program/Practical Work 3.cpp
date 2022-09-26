#include <iostream>
#include <math.h>
#include "TextTrash.h"

using namespace  std; 

int YearNumber, Day, Сourse, NumberApples, DailyNormFirstCourse, DailyNormSecondCourse, DailyNormThirdCourse, Price, Price2, Result, Result2;

int main()
{
    system("mode con cols=116 lines=60"); 

    setlocale(LC_ALL, "Russian");\

        //Первое задание:
        Task1TextOutput(); cin >> YearNumber;
   
            if (YearNumber % 4 == 0)
            {
                Day = 366;
                if ((YearNumber % 100 == 0) && (YearNumber % 400 != 0)) { Day = 365; }
            }
            else { Day = 365; }

            if (Day == 365) { NotLeapYear(); cout << Day; DayFunction(); }
            else { LeapYear(); cout << Day; DayFunction(); };
            line();

        //Второе задание:
        DailyNormFirstCourse = 50;
        DailyNormSecondCourse = 60;
        DailyNormThirdCourse = 70;
        

        Task2TextOutput();

        СourseInput(); cin >> Сourse; AppleInput(); cin >> NumberApples;

            if (Сourse > 4) {
                CourseNumber(); cout << Сourse; CourseNone();
            }  if (Сourse < 0) { CourseNumber(); cout << Сourse; CourseNone(); }

                if (Сourse == 1) {
                    if (NumberApples < DailyNormFirstCourse) { StudentCouldNot(); cout << Сourse; DailyNormFalse(); cout << DailyNormFirstCourse; ApplesInput();  NumberApples = DailyNormFirstCourse - NumberApples; cout << NumberApples; ApplesInputElse(); }
                    else {
                        StudentCouldTrue(); cout << Сourse; StudentCouldTrueText(); cout << DailyNormFirstCourse;ApplesInput2(); NumberApples = NumberApples - DailyNormFirstCourse; OverNorm(); cout << NumberApples;  OverNormeAJGoodHorse();
                    }
                }

                if (Сourse == 2) {
                    if (NumberApples < DailyNormSecondCourse) { StudentCouldNot(); cout << Сourse; DailyNormFalse(); cout << DailyNormSecondCourse; ApplesInput(); NumberApples = DailyNormSecondCourse - NumberApples; cout << NumberApples; ApplesInputElse(); }
                    else { StudentCouldTrue(); cout << Сourse; StudentCouldTrueText(); cout << DailyNormSecondCourse;ApplesInput2(); NumberApples = NumberApples - DailyNormSecondCourse; OverNorm(); cout << NumberApples;  OverNormeAJGoodHorse(); }
                }


                if (Сourse == 3) {
                    if (NumberApples < DailyNormThirdCourse) { StudentCouldNot(); cout << Сourse; DailyNormFalse(); cout << DailyNormThirdCourse; ApplesInput(); NumberApples = DailyNormThirdCourse - NumberApples; cout << NumberApples; ApplesInputElse(); }
                    else { StudentCouldTrue(); cout << Сourse; StudentCouldTrueText(); cout << DailyNormThirdCourse;ApplesInput2();  NumberApples = NumberApples - DailyNormThirdCourse; OverNorm(); cout << NumberApples;  OverNormeAJGoodHorse(); }
                }

                    //Третье задание.

                line();

                Task3TextOutput();
                       PriceWallpaper(); cin >> Price;
                        
                       PaintBottle(); cin >> Price2;

                       Result = (Price - Cost1(Price))*8;
                       Result2 = (Price2 - Cost1(Price2))*2;
                       
                       CalculationAmount(); cout << Price; Bits(); CalculationAmount1(); cout << Cost1(Price); Bits(); CalculationAmount3(); cout << Result; Bits(); line(); CalculationAmount2(); cout << Price2; Bits(); CalculationAmount1(); cout << Cost1(Price2); Bits(); CalculationAmount4(); cout << Result2; Bits(); line(); CalculationAmount5(); cout << Result + Result2; Bits();
                     

    return 0;
}