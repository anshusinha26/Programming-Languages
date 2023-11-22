#include<iostream>
using namespace std;

// Base class
class Employee {

    public: 
        int id;
        float salary;

        Employee(int empId) {
            id = empId;
            salary = 34;
        }

        Employee() {}
};

// Derived class with visibility mode set to public
class Programmer: public Employee {

    public: 
        int languageCode;
        
        Programmer(int empId) {
            id = empId;
            languageCode = 1;
        }

        void getData(void) {
            cout << id << endl;
        }
};

int main() {
    Employee e1(1), e2(2);
    cout << e1.salary << endl;
    cout << e2.salary << endl;

    Programmer p1(10);
    cout << p1.languageCode << endl;
    p1.getData();

    return 0;
}