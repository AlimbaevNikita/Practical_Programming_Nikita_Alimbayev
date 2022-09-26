#include <iostream>
#include <math.h>

using namespace  std; 

int YearNumber, Day, Сourse, NumberApples, DailyNormFirstCourse, DailyNormSecondCourse, DailyNormThirdCourse, Price, Price2, NoneDiscount, NoneDiscount2,Result3, Result, Result2;
double Discount, Discount2, MinimumDiscount, MinimumDiscount2, AverageMinimumDiscount, AverageMinimumDiscount2, HighDiscount, HighDiscount2, UltraDiscount, UltraDiscount2;
string AJ;


int main()
{
    system("mode con cols=116 lines=35"); 

    setlocale(LC_ALL, "Russian");\

        //Первое задание:
    cout << endl << "\t\t\t\t\t\t  Задание 1.19" << endl << endl << "В григорианском календаре каждый год, номер которого делится на 4, является високосным, за исключением тех, которые делятся на 100 и не делятся на 400 нацело. Определить число дней в году по номеру года." << endl << endl << "Введите ваш год: "; cin >> YearNumber;

    if (YearNumber % 4 == 0)
    {
        Day = 366;

        if ((YearNumber % 100 == 0) && (YearNumber % 400 != 0)) { Day = 365; }
    }
    else { Day = 365; }

    if (Day == 365) cout << endl << "Это не високосный год, дней в году ровно: " << Day << "дней." << endl;
    else cout << endl << "Это високосный год, дней в году ровно: " << Day << "дней." << endl;

        //Второе задание:
        DailyNormFirstCourse = 50;
        DailyNormSecondCourse = 60;
        DailyNormThirdCourse = 70;
        

        cout << endl << "\t\t\t\t\t\t  Задание 2.24" << endl << endl << "Студенты убирают яблоки. нормы следующие: студент 1 курса должен собрать в день не менее 50 кг яблок, студент второго курса – не менее 60 кг в  день, студент 3 курса – не менее 70 кг в день. зная курс, на котором учится студент, определить, выполнил ли он дневную норму." << endl;

            cout << endl << "Курс: "; cin >> Сourse; cout << endl << "Яблоки: "; cin >> NumberApples; 

            if (Сourse > 4) {
                cout << "Курса под номером: " << Сourse << " Несуществует.";}  if (Сourse < 0) { cout << "Курса под номером: " << Сourse << "Несуществует."; }

                if (Сourse == 1) {
                    if (NumberApples < DailyNormFirstCourse) { cout << endl << "Студент НЕ выполнил дневную норму, для студентов " << Сourse << "-ого курса дневная норма состовляет " << DailyNormFirstCourse << " яблок." << "Студент недособрал ";NumberApples = DailyNormFirstCourse - NumberApples; cout << NumberApples << " яблок. *Эпплджек бросает злобный взгляд*" << endl; }
                    else { cout << endl << "Студент выполнил дневную норму для своего курса. Дневная норма " << Сourse << "-ого курса состовляет " << DailyNormFirstCourse << " яблок.";  NumberApples = NumberApples - DailyNormFirstCourse; cout << " Студент набрал сверх нормы " << NumberApples << " яблок. *Эпплджек улыбается* " << endl; }
                }

                if (Сourse == 2) {
                    if (NumberApples < DailyNormSecondCourse) { cout << endl << "Студент НЕ выполнил дневную норму, для студентов " << Сourse << "-ого курса дневная норма состовляет " << DailyNormSecondCourse << " яблок." << "Студент недособрал ";NumberApples = DailyNormSecondCourse - NumberApples; cout << NumberApples << " яблок. *Эпплджек бросает злобный взгляд*" << endl; }
                    else { cout << endl << "Студент выполнил дневную норму для своего курса. Дневная норма " << Сourse << "-ого курса состовляет " << DailyNormSecondCourse << " яблок.";  NumberApples = NumberApples - DailyNormSecondCourse; cout << " Студент набрал сверх нормы " << NumberApples << " яблок. *Эпплджек улыбается*" << endl; }
                }


                if (Сourse == 3) {
                    if (NumberApples < DailyNormThirdCourse) { cout << endl << "Студент НЕ выполнил дневную норму, для студентов " << Сourse << "-ого курса дневная норма состовляет " << DailyNormThirdCourse << " яблок." << "Студент недособрал ";NumberApples = DailyNormThirdCourse - NumberApples; cout << NumberApples << " яблок. *Эпплджек бросает злобный взгляд*" << endl; }
                    else { cout << endl << "Студент выполнил дневную норму для своего курса. Дневная норма " << Сourse << "-ого курса состовляет " << DailyNormThirdCourse << " яблок.";  NumberApples = NumberApples - DailyNormThirdCourse; cout << " Студент набрал сверх нормы " << NumberApples << " яблок. *Эпплджек улыбается*" << endl; }
                }

                    //Третье задание
                MinimumDiscount = 200 <= Price && Price < 500;
                MinimumDiscount2 = 200 <= Price2 && Price2 < 500;
                AverageMinimumDiscount = 500 <= Price && Price < 800;
                AverageMinimumDiscount2 = 500 <= Price2 && Price2 < 800;
                HighDiscount = 800 <= Price && Price < 1000;

                cout << endl << "\t\t\t\t\t\t  Задание 3.4" << endl << endl << "при покупке товара на сумму от 200 до 500 руб предоставляется скидка 3%, при покупке товара на сумму от 500 до 800 – скидка 5%, при покупке товара  на сумму от 800 до 1000 руб – скидка 7%, свыше 1000 руб – скидка 10%. покупатель приобрел 8 рулонов обоев по цене х1 и две банки краски по цене  х2. сколько он заплатил?" << endl;

                       cout << endl << "Введите цену рулона обоев: "; cin >> Price;
                        
                     cout << endl << "Введи цену банки краски: "; cin >> Price2;
                      
                       if (MinimumDiscount) {
                           Discount = Price * 0.03;
                       }
                       
                       else if(AverageMinimumDiscount) {
                           Discount = Price * 0.06;
                       }
                       
                       else if (800 <= Price && Price < 1000) {
                           Discount = Price * 0.07;
                       }

                           if (200 <= Price2 && Price2 < 500) {
                               Discount2 = Price2 * 0.03;
                           }
                           else if (500 <= Price2 && Price2 < 800) {
                               Discount2 = Price2 * 0.06;
                           }
                           else if (800 <= Price2 && Price2 < 1000) {
                               Discount2 = Price2 * 0.07;
                           }
                               else if (Price > 1000) {
                                   Discount = Price * 0.10;
                               }
                               else if (Price2 > 1000) {
                                   Discount2 = Price2 * 0.10;
                               }
                                   else if (Price < 200) {
                                   Discount2 = Price + Price;
                                   }
                                   else if (Price2 < 200) {
                                   Discount2 = Price2 + Price2;
                                   }

                       Result = Price - Discount;
                       Result2 = Price2 - Discount2;
                       // *8;
                       cout << Result << "    " << Result2;
                       /*
                        if (Price < 200) { Result = Price - NoneDiscount; }  if (Price2 < 200) { Result2 = NoneDiscount2; }
                        else {
                            if (minimum <= x && x < maximum)
                            
                                /*if (Price > 1000) { Result = Price - UltraDiscount; } if (Price2 > 1000) { Result2 = Price2 - UltraDiscount2; }
                            
                            for (int i = 800; i <= 999; ++i) { Result = Price - HighDiscount;} for (int i = 800; i <= 999; ++i) { Result2 = Price2 - HighDiscount2; }
                             for (int i = 500; i <= 799; ++i) { Result = Price - AverageMinimumDiscount; } for (int i = 500; i <= 799; ++i) { Result2 = Price2 - AverageMinimumDiscount2; }
                              for (int i = 200; i <= 499; ++i) { Result = Price - MinimumDiscount; } for (int i = 200; i <= 499; ++i) { Result2 = Price2 - MinimumDiscount2;}
                                
                        }
                            Result3 = (Result * 8) + (Result2 * 2);
                            */
                          //  cout << endl << "Вы должны заплатить: " << Result3 << " Битсов." << endl ;
    return 0;
}