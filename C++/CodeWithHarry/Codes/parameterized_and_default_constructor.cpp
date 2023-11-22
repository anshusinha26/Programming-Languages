// Parameterized constructors are those constructors that take one or more parameters. 
// Default constructors are those constructors that take no parameters.
// Constructors are written in the public section of the class

#include<iostream>
using namespace std;

class Complex {

    int a, b;

    public:
        Complex(int n1, int n2); // parameterized constructor

        void printNumber() {
            cout << "Your number is: " << a << " + " << b << "i" << endl;
        }
};

Complex::Complex(int n1, int n2) {
    a = n1;
    b = n2;
}

int main() {
    Complex c1(1, 2); // implicit call
    c1.printNumber();

    Complex c2 = Complex(3, 4); // explicit call
    c2.printNumber();

    return 0;
}