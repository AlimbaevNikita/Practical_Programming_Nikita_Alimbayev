#include <iostream>
using namespace std;

class GraphicObject {
protected:
    int x, y;
public:
    GraphicObject(int x, int y) : x(x), y(y) {}
    virtual void printInfo() {
        cout << "Графический объект: x=" << x << ", y=" << y << endl;
    }
};

class Circle : public GraphicObject {
protected:
    int radius;
public:
    Circle(int x, int y, int r) : GraphicObject(x, y), radius(r) {}
    virtual void printInfo() {
        cout << "Круг: x=" << x << ", y=" << y << ", радиус=" << radius << endl;
    }
};

class Square : public GraphicObject {
protected:
    int side;
public:
    Square(int x, int y, int s) : GraphicObject(x, y), side(s) {}
    virtual void printInfo() {
        cout << "Квадрат: x=" << x << ", y=" << y << ", сторона=" << side << endl;
    }
};

int main() {
    setlocale(LC_ALL, "Russian");
    GraphicObject* obj1 = new Circle(10, 20, 5);
    GraphicObject* obj2 = new Square(30, 40, 8);

    obj1->printInfo();
    obj2->printInfo();

    delete obj1;
    delete obj2;

    return 0;
}