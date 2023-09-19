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

// Sample program 3
#include<iostream>
using namespace std;

int main() {
    cout << "\nThis is\t a string\n\t\t"
            " with \"many\" escape sequences!\n";

    return 0;
}