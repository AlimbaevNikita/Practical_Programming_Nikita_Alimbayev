#pragma once
#include <iostream>
using namespace std;

float Cost1(float Price) {
    if (Price < 200) {
        return 0;
    }
    else if (200 <= Price && Price < 500) {
        return Price * 0.03;
    }
    else if (500 <= Price && Price < 800) {
        return Price * 0.06;
    }
    else if (Price && Price < 1000) {
        return Price * 0.07;
    }
    else {
        return Price * 0.10;
    }
}

void Task1TextOutput() {
    cout << endl << "\t\t\t\t\t\t  Задание 1.19" << endl << endl << "В григорианском календаре каждый год, номер которого делится на 4, является високосным, за исключением тех, которые делятся на 100 и не делятся на 400 нацело. Определить число дней в году по номеру года." << endl << endl << "Введите ваш год: ";
}

void Task2TextOutput() {
    cout << endl << "\t\t\t\t\t\t  Задание 2.24" << endl << endl << "Студенты убирают яблоки. нормы следующие: студент 1 курса должен собрать в день не менее 50 кг яблок, студент второго курса – не менее 60 кг в  день, студент 3 курса – не менее 70 кг в день. зная курс, на котором учится студент, определить, выполнил ли он дневную норму." << endl;
}

void Task3TextOutput() {
    cout << endl << "\t\t\t\t\t\t  Задание 3.4" << endl << endl << "при покупке товара на сумму от 200 до 500 руб предоставляется скидка 3%, при покупке товара на сумму от 500 до 800 – скидка 5%, при покупке товара  на сумму от 800 до 1000 руб – скидка 7%, свыше 1000 руб – скидка 10%. покупатель приобрел 8 рулонов обоев по цене х1 и две банки краски по цене  х2. сколько он заплатил?" << endl;
}

void NotLeapYear() {
    cout << endl << "Это не високосный год, дней в году ровно: ";
}
void LeapYear() {
    cout << endl << "Это високосный год, дней в году ровно: ";
}

void DayFunction() {
    cout << "дней." << endl;
}

void СourseInput() {
    cout << endl << "Введите курс: ";
}

void AppleInput() {
    cout << endl << "Введите сколько килограмм яблок собрал студент: ";
}

void CourseNumber() {
    cout << "Курса под номером: ";
}

void CourseNone() {
    cout << " Несуществует.";
}

void StudentCouldNot() {
    cout << endl << "Студент НЕ выполнил дневную норму, для студентов ";
}

void DailyNormFalse() {
    cout << "-ого курса дневная норма состовляет ";
}

void ApplesInput() {
    cout << " килограмм яблок" << " Студент недособрал ";
}
void ApplesInput2() {
    cout << " килограмм яблок.";
}

void ApplesInputElse() {
    cout << " килограмм яблок. *Эпплджек бросает злобный взгляд*." << endl;
}

void StudentCouldTrue() {
    cout << endl << "Студент выполнил дневную норму для своего курса. Дневная норма ";
}

void StudentCouldTrueText() {
    cout << "- ого курса состовляет ";
}

void OverNorm() {
    cout << " Студент набрал сверх нормы ";
}

void OverNormeAJGoodHorse() {
    cout << " килограмм яблок. * Эпплджек улыбается * " << endl;
}

void PriceWallpaper() {
    cout << endl << "Введите цену рулона обоев: ";
}

void PaintBottle() {
    cout << endl << "Введи цену банки краски: ";
}

void CalculationAmount() {
    cout << endl << "Цена одного рулона обоев составляет: ";
}

void CalculationAmount1() {
    cout << endl << "Cкидка на 1 единицу товара составила: ";
}

void CalculationAmount2() {
    cout << endl << "Цена одной банки краски состовляет: ";
}

void CalculationAmount3() {
    cout << endl << "Вы приобрели 8 рулонов обоев. Цена с учётом скидки составила: ";
}

void CalculationAmount4() {
    cout << endl << "Вы приобрели 2 банки краски. Цена с учётом скидки составила: ";
}

void CalculationAmount5() {
    cout << endl << "Общая стоймость товаров составила:  ";
}

void Bits() {
    cout << " битс." << endl;
}
void line() {
    cout << "------------------------------------------------------------" << endl;
}