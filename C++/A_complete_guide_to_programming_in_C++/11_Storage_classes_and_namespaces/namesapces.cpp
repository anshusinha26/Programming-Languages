// defines and tests namespaces 

#include<string>
using namespace std;

namespace my_space {
    string mess = "within namespace my_space";
    int count = 0;
    double f(double);
}

namespace your_space {
    string mess = "within namespace your_space";
    void f() {
        mess += "!";
    }
}

namespace my_space {
    int g(void);
    double f(double y) {
        return y / 10.0;
    }
}

int my_space::g() {
    return ++count;
}

#include<iostream>

int main() {
    cout << "Testing namespaces!\n\n" << my_space::mess << endl;
    my_space::g();
    cout << "\nReturn value g(): " << my_space::g() << "\nReturn value f(): " << my_space::f(1.2)
            << "\n- - - - - - - - - -" << endl;

    your_space::f();
    cout << your_space::mess << endl;

    return 0;
}