// // Exercise 1
// // accessing objects with equal names

// #include<iostream>
// #include<iomanip>
// using namespace std;

// int var = 0;

// namespace special {
//     int var = 100;
// }

// int main() {
//     int var = 10;
//     cout << setw(10) << var;
//     {
//         int var = 20;
//         cout << setw(20) << var << endl;
//         {
//             ++var;
//             cout << setw(10) << var;
//             cout << setw(10) << ++ ::var;
//             cout << setw(10) << special::var * 2 << endl;
//         }
//         cout << setw(10) << var - ::var;
//     }
//     cout << setw(10) << var << endl;

//     return 0;
// }

/////-----/////

// // Exercise 2
// // You are developing a large-scale program and intend to use two commercial
// // libraries, tool1 and tool2.The names of types, functions, macros, and so on are
// // declared in the header files tool1.h and tool2.h for users of these libraries.
// // Unfortunately, the libraries use the same global names in part. In order to use
// // both libraries, you will need to define namespaces.

// // Write the following program to simulate this situation:

// // ■ Define an inline function called calculate() that returns the sum of two
// // numbers for the header file tool1.h.The function interface is as follows:
// // double calculate(double num1, double num2);

// // ■ Define an inline function called calculate() that returns the product of
// // two numbers for a second header file tool2.h.This function has the
// // same interface as the function in tool1.h.

// // ■ Then write a source file containing a main function that calls both functions
// // with test values and outputs the results.
// // To resolve potential naming conflicts, define the namespaces TOOL1 and
// // TOOL2 that include the relevant header files.

// #include<iostream>
// #include<string>
// using namespace std;

// namespace TOOL1 {
//     #include "tool1.h"
//     string mess = "within namespace TOOL1\n";
// }

// namespace TOOL2 {
//     #include "tool2.h"
//     string mess = "within namespace TOOL2\n";
// }

// int main() {
//     cout << TOOL1::mess;
//     cout << TOOL1::calculate(10.1, 11.2) << endl;

//     cout << TOOL2::mess;
//     cout << TOOL2::calculate(21.3, 11.5) << endl;

//     return 0;
// }

/////-----/////

// // Exercise 3
// // tests an internal static variable

// #include<iostream>
// #include<iomanip>
// using namespace std;

// double x = 0.5, fun(void);

// int main() {
//     while (x < 10.0) {
//         x += fun();
//         cout << "\twithin main(): " << setw(5) <<  x << endl;
//     }
    
//     return 0;
// }

// double fun() {
//     static double x = 0;
//     cout << "\twithin fun(): " << setw(5) << x++;

//     return x;
// }

/////-----/////

// Exercise 4
// a. The function getPassword(), which checks password input, was introduced
// previously as an example of the use of static variables. Modify the
// source file Passw1.cpp, which contains the function getPassword(), by
// adding the function changePassword().This function allows the user to
// change his or her password. Save the modified source file as
// Passw2.cpp.

// b. A large-scale program with several users is used to perform bookings.
// Only authorized users, that is, users that have access to the password, are
// allowed to perform bookings.
// In the initial stages of program development, you need to test the
// functionality of the source file, Passw2.cpp.To do so, create a new
// source file with a main function that contains only the following menu
// items in its main loop:

// B = Booking
// E = End of program

// When B is typed, the password is first checked. If the user enters the
// correct password, he or she can change the password.The program does
// not need to perform any real bookings.