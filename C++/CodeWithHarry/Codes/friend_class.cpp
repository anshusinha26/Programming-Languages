#include<iostream>
using namespace std;

class Complex {

    int a, b;

    // friend class
    friend class Calculator;

    public:
        void setNumber(int n1, int n2) {
            a = n1;
            b = n2;
        }

        void printNumber(void) {
            cout << "Your number is: " << a << " + " << b << 'i' << endl;
        }
};

class Calculator {

    public: 
        int sumRealcomplex(Complex o1, Complex o2);
        int sumImgComplex(Complex o1, Complex o2);
};

int Calculator::sumRealcomplex(Complex o1, Complex o2) {
    return (o1.a + o2.a);
}

int Calculator::sumImgComplex(Complex o1, Complex o2) {
    return (o1.b + o2.b);
}

int main() {

    Complex c1, c2;
    c1.setNumber(1, 2);
    c1.printNumber();

    c2.setNumber(3, 4);
    c2.printNumber();

    Calculator calc;
    int resm = calc.sumRealcomplex(c1, c2);
    cout << "Sum of real part: " << resm << endl;

    int imgsm = calc.sumImgComplex(c1, c2);
    cout << "Sum of imaginary part: " << imgsm << endl;
    
    return 0;
}