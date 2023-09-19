// // Exercise 1
// // The sizeof operator can be used to determine the number of bytes occupied in memory by a variable of a certain type. For example, sizeof(short) is equivalent to 2.
// // Write a C++ program that displays the memory space required by each fundamental type on screen.

// #include<iostream>
// using namespace std;

// int main() {
//     cout << "Type               " << "Size" << endl;
//     cout << "-----------------------" << endl;
//     cout << "char               " << sizeof(char) << endl;
//     cout << "signed char        " << sizeof(signed char) << endl;
//     cout << "unsigned char      " << sizeof(unsigned char) << endl;
//     cout << endl;
//     cout << "int                " << sizeof(int) << endl;
//     cout << "unsigned int       " << sizeof(unsigned int) << endl;
//     cout << endl;
//     cout << "short              " << sizeof(short) << endl;
//     cout << "unsigned short     " << sizeof(unsigned short) << endl;
//     cout << endl;
//     cout << "long               " << sizeof(long) << endl;
//     cout << "unsigned long      " << sizeof(unsigned long) << endl;
//     cout << endl;
//     cout << "-----" << endl;
//     cout << endl;
//     cout << "float              " << sizeof(float) << endl;
//     cout << "double             " << sizeof(double) << endl;
//     cout << "long double        " << sizeof(long double) << endl; 
//     return 0;
// }

///// 

// // Exercise 2
// #include<iostream>
// using namespace std;

// int main() {
//     cout << "\n";
//     cout << "\t\tI\n";
//     cout << "\t\t\t\t\"Rush\"\n";
//     cout << "\t\t\t\t\t\\To\\\n";
//     cout << "\t\t\t\tAND\n";
//     cout << "\t\t /Fro/\n";

//     return 0;
// }

///// 

// Exercise 4
// Write a C++ program that two defines variables for floating-point numbers and initializes them with the values
// 123.456 and 76.543
// Then display the sum and the difference of these two numbers on screen.

#include<iostream>
using namespace std;

int main() {
    float n1 = 123.456;
    float n2 = 76.543;

    cout << "Sum:           " << n1 + n2 << endl;
    cout << "Difference:    " << n1 - n2 << endl;

    return 0;
}