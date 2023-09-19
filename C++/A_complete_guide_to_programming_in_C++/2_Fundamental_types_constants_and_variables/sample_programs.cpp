// // Sample program 1
// #include <iostream>
// #include <climits>       // Definition of INT_MIN, ...
// using namespace std;
// int main() {
//     cout << "Range of types int and unsigned int"
//         << endl << endl;
//     cout << "Type             Minimum           Maximum"
//         << endl
//         << "--------------------------------------------"
//         << endl;
//     cout << "int            " <<  INT_MIN << "        "
//                                 <<  INT_MAX << endl;
//     cout << "unsigned int   " <<  "          0        "
//                                 << UINT_MAX << endl;
//     return 0; 
// }

/////

// // Sample program 2
// // To display hexadecimal integer literals and
// // decimal integer literals.
// //
// #include <iostream>
// using namespace std;
// int main() {
//     // cout outputs integers as decimal integers:
//     cout << "Value of 0xFF = " << 0xFF << " decimal" << endl; // Output: 255 decimal // The manipulator hex changes output to hexadecimal // format (dec changes to decimal format):
//     cout << "Value of 27 = " << hex << 27 <<" hexadecimal" << endl;              // Output: 1b hexadecimal
//     return 0;
// }

/////

// // Sample program 3
// #include<iostream>
// using namespace std;

// int main() {
//     cout << "\nThis is\t a string\n\t\t"
//             " with \"many\" escape sequences!\n";

//     return 0;
// }

///// 

// // Sample program 4
// // Definition and use of variables
// #include <iostream>
// using namespace std;
// int gVar1;
// int gVar2 = 2;
// int main() {
//     // Global variables,
//     // explicit initialization
//     char ch('A');  // Local variable being initialized
//                 // or:  char ch = 'A';
//     cout << "Value of gVar1:    " << gVar1  << endl;
//     cout << "Value of gVar2:    " << gVar2  << endl;
//     cout << "Character in ch:   " << ch     << endl;

//    int sum, number = 3; // Local variables with
//                         // and without initialization
//     sum = number + 5;
//     cout << "Value of sum:      " << sum  << endl;
//     return 0; 
// }

/////

// Sample program 5
#include<iostream>
using namespace std;

int main() {
    float radius = 1.5;
    const float pi = 3.141593;

    float circumference = 2 * pi * radius;
    float area = pi * radius * radius;

    cout << "Radius:        " << radius << endl;
    cout << "Circumference: " << circumference << endl;
    cout << "Area:          " << area << endl;

    return 0;
}