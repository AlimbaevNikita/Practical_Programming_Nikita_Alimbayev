#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
public:
    Person(string n, int a) {
        name = n;
        age = a;
    }
    void show() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    string major;
public:
    Student(string n, int a, string m) : Person(n, a) {
        major = m;
    }
    void show() {
        Person::show();
        cout << "Major: " << major << endl;
    }
};

class Teacher : public Person {
protected:
    string subject;
public:
    Teacher(string n, int a, string s) : Person(n, a) {
        subject = s;
    }
    void show() {
        Person::show();
        cout << "Subject: " << subject << endl;
    }
};

class TA : public Student, public Teacher {
public:
    TA(string n, int a, string m, string s) : Student(n, a, m), Teacher(n, a, s) {}
    void show() {
        Student::show();
        cout << "Teaching subject: " << Teacher::subject << endl;
    }
};

int main() {
    Person p("Twilight", 25);
    Student s("Spooky", 20, "Computer Science");
    Teacher t("Dr. Starlight", 40, "Mathematics");
    TA ta("Katy", 22, "Computer Science", "Programming");

    p.show();
    cout << endl;
    s.show();
    cout << endl;
    t.show();
    cout << endl;
    ta.show();
    cout << endl;

    return 0;
}