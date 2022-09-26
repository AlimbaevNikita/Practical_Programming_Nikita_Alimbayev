#pragma once
#include <iostream>
using namespace std;

void Task1TextOutput() {
    cout << endl << "\t\t\t\t\t\t  Задание 1" << endl << endl << "Напишите программу, которая определяет, является ли заданное натуральное число трёхзначным.";
}

void Task2TextOutput() {
    cout << endl << "\t\t\t\t\t\t  Задание 2" << endl << endl << "Напишите программу, которая принимает целое число x и определяет, принадлежит ли данное число указанному промежутку. (-1;17)";
}

void Task3TextOutput() {
    cout << endl << "\t\t\t\t\t\t  Задание 3" << endl << endl << "По данному трехзначному числу, определите все ли его цифры различны.";

}

void Task4TextOutput() {
    cout << endl << "\t\t\t\t\t\t  Задание 4" << endl << endl << "Требуется определить, бьет ли ладья, стоящая на клетке с указанными координатами (номер строки и номер столбца), фигуру, стоящую на другой указанной клетке.";

}
void EnterNumber() {
    cout << endl << endl << "Введите число: ";
}

void NumberYeaNot() {
    cout << endl << endl << "Число: ";
}
void YesThreeDigitNumber2() {
    cout << " является трёхзначным." << endl;
}
void NoThreeDigitNumber2() {
    cout << " не является трёхзначным." << endl;
}

void line() {
    cout << endl << "------------------------------------------------------------" << endl;
}

void YesInInterval() {
    cout << " находится в промежутке. " << endl;
}
void NoInterval() {
    cout << " не находтся в промежутке. " << endl;
}

void NotAllDigitRepeated() {
    cout << "Повторяются не все цифры." << endl;
}

void AllDigitRepeated() {
    cout << "Повторяются все цифры." << endl;
}

void RookKnocksPiece() {
    cout << "Ладья сбила фигуру." << endl;
}

void RookNoKnockPiece() {
    cout << "Ладья не сбивает фигуру." << endl;
}

void EnterX1Сoordinate() {
    cout << endl << endl << "Введите координату х1: ";
}

void EnterX2Сoordinate() {
    cout << endl << endl << "Введите координату х2: ";
}

void EnterY1Сoordinate() {
    cout << endl << endl << "Введите координату y1: ";
}

void EnterY2Сoordinate() {
    cout << endl << endl << "Введите координату y2: ";
}

void EnterXСoordinate() {
    cout << endl << endl << "Введите координату точки x: ";
}
void EnterYСoordinate() {
    cout << endl << endl << "Введите координату точки y: ";
}