// Single inheritance is a type of inheritance in which a derived class is inherited with only one base class.

#include<iostream>
using namespace std;

class Base {
    int data1; // * private by default and is not inheritable

    public:
        int data2;
        void setData();
        int getData1();
        int getData2();
};

void Base::setData() {
    data1 = 10;
    data2 = 20;
}

int Base::getData1() {
    return data1;
}

int Base::getData2() {
    return data2; 
}

class Derived:public Base { // * class is being derived publicly

    int data3;

    public: 
        void process();
        void display();
};

void Derived::process() {
    data3 = data2 * getData1();
}

void Derived::display() {
    cout << "Value of data1 is: " << getData1() << endl;
    cout << "Value of data2 is: " << data2 << endl;
    cout << "Value of data3 is: " << data3 << endl;
}

int main() {
    Derived d1;
    d1.setData();
    d1.process();
    d1.display();

    return 0;
}