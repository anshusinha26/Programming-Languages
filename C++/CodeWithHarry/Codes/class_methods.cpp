// #include<iostream>
// using namespace std;

// class Employee {

//     private:
//         int a, b, c;

//     public:
//         int d, e;

//         void setData(int a1, int b1, int c1);
        
//         void getData() {
//             cout << "The value of a is: " << a << "\n";
//             cout << "The value of b is: " << b << "\n";
//             cout << "The value of c is: " << c << "\n";
//             cout << "The value of d is: " << d << "\n";
//             cout << "The value of e is: " << e << endl;
//         }
// };

// void Employee :: setData(int a1, int b1, int c1) {
//     a = a1;
//     b = b1;
//     c = c1;
// }

// int main() {
//     Employee anshu; // an object anshu of class Employee
//     // anshu.a = 46;  // will throw an error, can't access the private member outside the scope of the class
//     anshu.d = 32;
//     anshu.e = 45;
//     anshu.setData(1, 2, 3);
//     anshu.getData();

//     return 0;
// }

/////-----/////

// Modelling a dog class

#include<iostream>
#include<string>
using namespace std;


class Dog {

    private:
        string a, b;

    public: 
        string c, d, e;

    void setData(string f1, string f2);

    void getData() {
        cout << "A dog has a " << a << "\n";
        cout << "A dog has a " << b << "\n";
        cout << "A dog can " << c << "\n";
        cout << "A dog can " << d << "\n";
        cout << "A dog can " << e << endl;
    }
};

// accessing the setData method outside the class Dog
void Dog :: setData(string f1, string f2) {
    a = f1;
    b = f2;
}

int main() {
    Dog d1;
    d1.setData("brain", "heart");
    d1.c = "eat";
    d1.d = "bark";
    d1.e = "walk";
    d1.getData();

    return 0;
}