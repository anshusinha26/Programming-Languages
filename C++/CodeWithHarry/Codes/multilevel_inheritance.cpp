// * Multilevel inheritance is a type of inheritance in which one derived class is inherited from another derived class. 

#include<iostream>
using namespace std;

class Student {
    protected:
        int rollNo;

    public:
        void setRollNo(int);
        void getRollNo(void);
};

void Student::setRollNo(int r) {
    rollNo = r;
}

void Student::getRollNo(void) {
    cout << "The roll number is: " << rollNo << endl;
}

class Exam:public Student {
    protected:
        float maths;
        float physics;

    public:
        void setMarks(float, float);
        void getMarks(void);
};

void Exam::setMarks(float m1, float m2) {
    maths = m1;
    physics = m2;
}

void Exam::getMarks(void) {
    cout << "The marks obtained in maths is: " << maths << endl;
    cout << "The marks obtained in physics is: " << physics << endl;
}

class Result:public Exam {
    float percentage;

    public: 
        void displayResult() {
            getRollNo();
            getMarks();
            cout << "Your result is: " << (maths+physics)/2 << "%" << endl;
        }
};

int main() {
    Result r1;
    r1.setRollNo(1);
    r1.setMarks(95, 98);
    r1.displayResult();

    return 0;
}