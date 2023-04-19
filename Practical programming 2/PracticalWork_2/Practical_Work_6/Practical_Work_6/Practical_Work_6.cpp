#include <iostream>
#include <cmath>

using namespace std;

class Triangle {
private:
    int a, b, c;

public:
    Triangle(int a = 0, int b = 0, int c = 0) : a(a), b(b), c(c) {}

    void display_info() {
        cout << "Треугольник со сторонами " << a << ", " << b << ", " << c << endl;
    }

    int perimeter() {
        return a + b + c;
    }

    double area() {
        double p = perimeter() / 2.0;
        return sqrt(p * (p - a) * (p - b) * (p - c));
    }

    void set_sides(int a, int b, int c) {
        this->a = a;
        this->b = b;
        this->c = c;
    }

    bool is_valid() {
        return (a + b > c) && (b + c > a) && (a + c > b);
    }

    Triangle& operator++() {
        ++a;
        ++b;
        ++c;
        return *this;
    }

    Triangle& operator--() {
        --a;
        --b;
        --c;
        return *this;
    }

    Triangle operator*(int scalar) {
        return Triangle(a * scalar, b * scalar, c * scalar);
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    Triangle t(3, 4, 5);
    t.display_info();
    cout << "Периметр: " << t.perimeter() << endl;
    cout << "Площадь: " << t.area() << endl;

    t.set_sides(5, 12, 13);
    t.display_info();
    cout << "Является ли треугольник допустимым: " << t.is_valid() << endl;

    ++t;
    t.display_info();
    --t;
    t.display_info();

    Triangle t2 = t * 2;
    t2.display_info();

    return 0;
}