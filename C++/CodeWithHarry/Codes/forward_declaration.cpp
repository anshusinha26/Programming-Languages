#include<iostream>
using namespace std;

// forward declaration
class Y;

class X {

    int data;

    // friend member function
    friend void add(X, Y);

    public: 
        void setValue(int value) {
            data = value;
        }
};

class Y {

    int num;

    // friend member function
    friend void add(X, Y);

    public: 
        void setValue(int value) {
            num = value;
        }
};

void add(X d1, Y d2) {
    cout << "The sum of data of X and Y objects is: " << d1.data + d2.num << endl;
}

int main() {
    X d1;
    Y d2;
    d1.setValue(1);
    d2.setValue(2);

    add(d1, d2);

    return 0;
}