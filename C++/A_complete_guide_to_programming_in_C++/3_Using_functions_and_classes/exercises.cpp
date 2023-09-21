// // Exercise 1
// // Create a program to calculate the square roots of the numbers 4 12.25 0.0121
// // and output them as shown opposite.Then read a number from the keyboard and output the square root of this number.
// // To calculate the square root, use the function sqrt(), which is defined by the following prototype in the math.h (or cmath ) header file:
// // double sqrt( double x);

// #include<iostream>
// #include<cmath>
// using namespace std;

// int main() {
//     double a=4, b=12.25, c=0.0121;
//     cout << sqrt(a) << endl << sqrt(b) << endl << sqrt(c) << endl;

//     return 0;
// }

///// 

// // Exercise 2
// #include<iostream>
// #include<string>
// #include<cstdlib>
// using namespace std;

// int main() {
//     string message = "\nLearn from your mistakes!";
//     cout << message << endl;

//     int len = message.length();
//     cout << "Length of the string: " << len << endl;

//     int a, b;
//     srand(12);
//     b = rand();
//     cout << "\nRandom number: " << b << endl;

//     return 0;
// }

///// 

// Exercise 3
// Create a C++ program that defines a string containing the following character sequence:
// I have learned something new again!
// and displays the length of the string on screen.
// Read two lines of text from the keyboard. Concatenate the strings using " * "
// to separate the two parts of the string. Output the new string on screen.

#include<iostream>
#include<string>
using namespace std;

int main() {
    string prompt = "I have learned something new again!", line(40, '-'), l1, l2, new_string;
    cout << prompt << endl;
    cout << line << endl;
    cout << "The length of the above string is: " << prompt.length() << endl;

    cout << line << endl;

    getline(cin, l1);
    getline(cin, l2);

    new_string = l1 + " * " + l2;
    cout << new_string << endl;

    return 0;
}