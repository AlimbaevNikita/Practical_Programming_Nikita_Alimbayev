#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    string faculty;
    int course;

public:
    Student(string name, string faculty, int course) {
        this->name = name;
        this->faculty = faculty;
        this->course = course;
    }

    string getFaculty() const {
        return faculty;
    }

    int getCourse() const {
        return course;
    }

    void printInfo() const {
        cout << "Name: " << name << endl;
        cout << "Faculty: " << faculty << endl;
        cout << "Course: " << course << endl;
    }
};

void printStudentsByFacultyAndCourse(const Student* students, int count) {
    string faculty;
    int course;

    cout << "Enter faculty: ";
    cin >> faculty;

    cout << "Enter course: ";
    cin >> course;

    cout << "Students of " << faculty << " faculty, " << course << " course:" << endl;

    bool found = false;
    for (int i = 0; i < count; i++) {
        if (students[i].getFaculty() == faculty && students[i].getCourse() == course) {
            students[i].printInfo();
            found = true;
        }
    }

    if (!found) {
        cout << "No students found for the specified faculty and course." << endl;
    }
}

int main() {
    Student students[] = {
       Student("Twilight Sparkle", "CS", 3),
        Student("Rainbow Dash", "Math", 2),
        Student("Fluttershy", "Physics", 4),
        Student("Pinkie Pie", "CS", 1),
        Student("Rarity", "Math", 2),
        Student("Applejack", "Physics", 3)
    };

    int count = sizeof(students) / sizeof(Student);

    printStudentsByFacultyAndCourse(students, count);

    return 0;
}
