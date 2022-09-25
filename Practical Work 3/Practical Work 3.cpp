#include <iostream>
#include <math.h>

using namespace  std; 

int YearNumber, Day, Сourse, NumberApples, DailyNormFirstCourse, DailyNormSecondCourse, DailyNormThirdCourse;

int main()
{
    system("mode con cols=116 lines=25"); 

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

              if (Сourse > 4) { cout << "Курса под номером: " << Сourse << "Несуществует.";  if (Сourse < 0) { cout << "Курса под номером: " << Сourse << "Несуществует."; }
                
                if (Сourse == 1) {
                    if (NumberApples < DailyNormFirstCourse) { cout << endl << "Студент НЕ выполнил дневную норму, для студентов " << Сourse << "-ого курса дневная норма состовляет " << DailyNormFirstCourse << " яблок." << "Студент недособрал ";NumberApples = DailyNormFirstCourse - NumberApples; cout << NumberApples << " яблок. *Эпплджек бросает злобный взгляд*" << endl; }
                        else { cout << endl << "Студент выполнил дневную норму для своего курса. Дневная норма " << Сourse << "-ого курса состовляет " << DailyNormFirstCourse << " яблок.";  NumberApples = NumberApples - DailyNormFirstCourse; cout << " Студент набрал сверх нормы " << NumberApples << " яблок. *Эпплджек улыбается* "<< endl; }}

                if (Сourse == 2) {
                    if (NumberApples < DailyNormSecondCourse) { cout << endl << "Студент НЕ выполнил дневную норму, для студентов " << Сourse << "-ого курса дневная норма состовляет " << DailyNormSecondCourse << " яблок." << "Студент недособрал ";NumberApples = DailyNormSecondCourse - NumberApples; cout << NumberApples << " яблок. *Эпплджек бросает злобный взгляд*" << endl; }
                        else { cout << endl << "Студент выполнил дневную норму для своего курса. Дневная норма " << Сourse << "-ого курса состовляет " << DailyNormSecondCourse << " яблок.";  NumberApples = NumberApples - DailyNormSecondCourse; cout << " Студент набрал сверх нормы " << NumberApples << " яблок. *Эпплджек улыбается*" << endl; }
                }


                if (Сourse == 3) {
                    if (NumberApples < DailyNormThirdCourse) { cout << endl << "Студент НЕ выполнил дневную норму, для студентов " << Сourse << "-ого курса дневная норма состовляет " << DailyNormThirdCourse << " яблок." << "Студент недособрал ";NumberApples = DailyNormThirdCourse - NumberApples; cout << NumberApples << " яблок. *Эпплджек бросает злобный взгляд*" << endl; }
                        else { cout << endl << "Студент выполнил дневную норму для своего курса. Дневная норма " << Сourse << "-ого курса состовляет " << DailyNormThirdCourse << " яблок.";  NumberApples = NumberApples - DailyNormThirdCourse; cout << " Студент набрал сверх нормы " << NumberApples << " яблок. *Эпплджек улыбается*" << endl; }
                }
        
    return 0;
}