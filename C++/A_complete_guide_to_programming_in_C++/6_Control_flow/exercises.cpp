// // Exercise 1
// // Rewrite the EuroDoll.cpp program in this chapter to replace both the for loops with while loops.

// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main() {
//     long euro, maxEuro;
//     double rate;

//     cout << "\n* * * TABLE OF EXCHANGE " <<  " Euro - US-$ * * *\n\n";
//     cout << "\nPlease give the rate of exchange: " << " one Euro in US-$: ";
//     cin >> rate;
//     cout << "\nPlease enter the maximum euro: ";
//     cin >> maxEuro;

//     cout << '\n' << setw(12) << "Euro" << setw(20) << "US-$" << "\t\tRate: " << rate << endl;

//     cout << fixed << setprecision(2) << endl;

//     long lower=1, upper, step=1;
//     while (lower <= maxEuro) {
//         euro = lower;
//         upper = step*10;
//         while (euro <= upper && euro <= maxEuro) {
//             cout << setw(12) << euro << setw(20) << euro*rate << endl;
//             euro+=step;
//         }
//         step*=10;
//         lower=2*step;
//     }

//     return 0;
// }

/////

// Exercise 2
// Write a C++ program that outputs a complete multiplication table.

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    cout << "\n\t\t\t***** MULTIPLICATION TABLE *****\n\n\n";

    int table = 10;
    for (int i = 1; i <= table; i++) {
        cout << "\t" << i;
    }
    cout << endl << "     ";

    string line(78, '-');
    cout << line << endl;

    for (int i = 1; i <= 10; i++) {
        cout << setfill(' ') << setw(3) << right << i << " |";
        for (int j = 1; j <= 10; j++) {
            cout << "\t" << i*j;
        }
        cout << endl;
    }

    return 0;
}
