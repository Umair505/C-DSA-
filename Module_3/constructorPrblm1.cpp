#include <iostream>
using namespace std;

class Student {
public:
    int roll;
    char section;
    int math_marks;
    int cls;
    
    Student(int roll, char section, int math_marks, int cls) {
        this->roll = roll;
        this->section = section;
        this->math_marks = math_marks;
        this->cls = cls;
    }
};

int main() {
    Student moinul(162, 'S', 100, 10);   // 'S' represents science
    Student sadik(159, 'C', 89, 10);     // 'C' represents commerce
    Student alin(160, 'A', 95, 10);      // 'A' represents arts

    if (moinul.math_marks > sadik.math_marks && moinul.math_marks > alin.math_marks) {
        cout << "Moinul";
    } else if (sadik.math_marks > moinul.math_marks && sadik.math_marks > alin.math_marks) {
        cout << "Sadik";
    } else {
        cout << "Alin";
    }

    return 0;
}
