// #include<iostream>
// using namespace std;

// class Employee {

//     int id;
//     int salary;

//     public:
//         void setId(void) {
//             salary = 1040203;
//             cout << "Enter the id of the employee: ";
//             cin >> id;
//         }

//         void getId(void) {
//             cout << "The id of the employee is: " << id << endl;
//         }
// };

// int main() {
//     int count = 5;
//     Employee appl[count]; // array of objects
//     for (int i = 0; i < count; i++) {
//         appl[i].setId();
//         appl[i].getId();
//     }

//     return 0;
// }

/////-----/////

#include<iostream>
using namespace std;

class Complex {

    int a, b;

    public:
        void setData(int v1, int v2) {
            a = v1;
            b = v2;
        }

        void setDataBySum(Complex o1, Complex o2) {
            a = o1.a + o2.a;
            b = o1.b + o2.b;
        }

        void printNumber(void) {
            cout << "Your complex number is " << a << " + " << b << "i" << endl;
        }
};

int main() {
    Complex c1, c2, c3;
    c1.setData(1, 2);
    c1.printNumber();

    c2.setData(3, 4);
    c2.printNumber();

    // passing objects as function arguments 
    c3.setDataBySum(c1, c2);
    c3.printNumber();

    return 0;
}