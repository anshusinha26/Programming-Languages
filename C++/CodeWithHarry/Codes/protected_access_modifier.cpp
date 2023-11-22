//* Protected access modifiers are similar to the private access modifiers but protected access modifiers can be accessed in the derived 
//* class whereas private access modifiers cannot be accessed in the derived class. 
//* A table is shown below which shows the behavior of access modifiers when they are derived “public”, “private”, and “protected”.

//*                         Public Derivation      	Private Derivation    	Protected Derivation
//* Private members           Not Inherited            Not Inherited          Not Inherited              
//* Protected members         Protected                Private                Protected                    
//* Public members            Public	               Private                Protected 

#include<iostream>
using namespace std;

class Base {
    protected: 
        int a;

    private: 
        int b;

    public:
        void setData();
        void display();    
};

void Base::setData() {
    b = 2;
}

void Base::display() {
    cout << "The value of b is: " << b << endl;
}

class Derived:protected Base {
    void setData() {
        a = 1;
    }

    void display() {
        cout << "The value of a is: " << a << endl;
    }
};

int main() {
    Base b1;
    b1.setData();
    b1.display();

    Derived d1;
    // ! d1.setData();      will not work since a is protected in both base as well as in derived class

    return 0;
}