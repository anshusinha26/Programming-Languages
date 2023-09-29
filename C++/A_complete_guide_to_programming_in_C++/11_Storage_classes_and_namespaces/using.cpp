// Demonstrates the use of using-declarations and using-directives

#include<iostream>

void message() {
    std::cout << "within function ::message()\n";
}

namespace A {
    using namespace std;
    void message() {
        cout << "within function A::message\n";
    }
}

namespace B {
    using std::cout;
    void message(void);
}

void B::message(void) {
    cout << "withing function B::message()\n";
}

int main() {
    using namespace std;
    using B::message;

    cout << "testing namespaces!\n";
    cout << "\ncall of A::message()" << endl;
    A::message();
    cout << "\ncall of B::message()" << endl;
    message();

    cout << "\ncall of::message()" << endl;
    ::message();

    return 0;
}