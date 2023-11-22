// Constructor overloading is a concept in which one class can have multiple constructors with different parameters. 
// The main thing to note here is that the constructors will run according to the arguments.

#include<iostream>
using namespace std;

class Complex {
    
    int a, b;

    public:
        Complex() { // default constructor
            a = 0;
            b = 0;
        }

        Complex(int n1, int n2) { // parameterized constructor
            a = n1;
            b = n2;
        }

        Complex(int n1) { // parameterized constructor
            a = n1;
            b = 0;
        }

        void printNumber(void) {
            cout << "Your number is: " << a << " + " << b << "i" << endl;
        }
};

int main() {
    Complex c1(1, 2);
    c1.printNumber();

    Complex c2 = Complex(3);
    c2.printNumber();

    Complex c3;
    c3.printNumber();

    return 0;
}