// * Multiple inheritances are a type of inheritance in which one derived class is inherited with more than one base class. 

#include<iostream>
using namespace std;

class Base1 {
    protected:
        int base1int;

    public:
        void setBase1Val(int n1) {
            base1int = n1;
        }
};

class Base2 {
    protected:
        int base2int;

    public:
        void setBase2Val(int n2) {
            base2int = n2;
        }
};

class Base3 {
    protected:
        int base3int;

    public:
        void setBase3Val(int n3) {
            base3int = n3;
        }
};

// * Derived class
class Derived:public Base1, public Base2, public Base3 {
    public:
        void show() {
            cout << "The value of Base1 is: " << base1int << endl;
            cout << "The value of Base2 is: " << base2int << endl;
            cout << "The value of Base3 is: " << base3int << endl;

        }
};

int main() {
    Derived d1;
    d1.setBase1Val(1);
    d1.setBase2Val(2);
    d1.setBase3Val(3);
    d1.show();

    return 0;
}