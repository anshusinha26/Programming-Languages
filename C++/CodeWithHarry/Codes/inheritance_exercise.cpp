#include<iostream>
using namespace std;

class SimpleCalc{ // ! SimpleCalc base class
    float num1, num2;

    public:
        float resAdd, resSub, resMul, resDiv;

        void setNum(float n1, float n2) {
            num1 = n1;
            num2 = n2;
        }

        void performCalc() {
            addition();
            subtraction();
            multiplication();
            division();
        }

        void addition() {
            resAdd = num1 + num2;
        }
        void subtraction() {
            resSub = num1 - num2;
        }
        void multiplication() {
            resMul = num1 * num2;
        }
        void division() {
            if (num2!=0) 
                resDiv = num1 / num2;
            else 
                cout << "Division by zero not possible!" << endl;
        }

        void displayResult() {
            cout << "Addition of " << num1 << " and " << num2 << ": " << resAdd << endl;
            cout << "Subtraction of " << num1 << " and " << num2 << ": " << resSub << endl;
            cout << "Multiplication of " << num1 << " and " << num2 << ": " << resMul << endl;
            cout << "Division of " << num1 << " and " << num2 << ": " << resDiv << endl;
        }
};

int main() {
    SimpleCalc s1;

    float a, b;
    cout << "Enter two number: ";
    cin >> a >> b;

    s1.setNum(a, b);
    s1.performCalc();
    s1.displayResult();

    return 0;
}