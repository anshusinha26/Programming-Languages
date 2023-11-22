// #include<iostream>
// using namespace std;

// * “this” is a keyword that is an implicit pointer. 
// * “this” pointer points to the object which calls the member function.

// class A {
//     int a;

//     public:
//         void setData(int a) {
//             this->a = a;
//         }

//         void getData() {
//             cout << "The value of a is: " << a << endl;
//         }
// };

// int main() {
//     A a;
//     a.setData(5);
//     a.getData();

//     return 0;
// }

/////-----/////

#include<iostream>
using namespace std;

class A {
    int a;

    public:
        A & setData(int a) {
            this->a = a;
            return *this;
        }

        void getData() {
            cout << "The value of a is: " << a << endl;
        }
};

int main() {
    A a;
    a.setData(5).getData();
    return 0;
}