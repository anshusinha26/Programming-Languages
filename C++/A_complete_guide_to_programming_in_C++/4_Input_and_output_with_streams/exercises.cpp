// // Exercise 2
// // Formulate statements to perform the following:
// // a. Left-justify the number 0.123456 in an output field with a width of 15.
// // b. Output the number 23.987 as a fixed point number rounded to two dec- imal places, right-justifying the output in a field with a width of 12.
// // c. Output the number –123.456 as an exponential and with four decimal spaces. How useful is a field width of 10?

// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main() {
//     cout << setw(15) << left << 0.123456 << endl; // a
//     cout << fixed << setprecision(2) << setw(12) << right << 23.987 << endl; // b
//     cout << scientific << setprecision(4) << setw(10) << -123.456 << endl; // c
    
// }

///// 

// // Exercise 3
// // Write a C++ program that reads an article number, a quantity, and a unit price from the keyboard and outputs the data on screen as displayed on the opposite page.

// #include<iostream>
// #include<string>
// #include<iomanip>
// using namespace std;

// int main() {
//     long article;
//     int pieces;
//     double price;
//     string line(72, '-');

//     cin >> article >> pieces >> price;

//     cout << "Article number\t\tNumber of Pieces\t\tPrice per piece" << endl;
//     cout << line << endl;
//     cout  << "\t" << article << "\t\t\t" << pieces << "\t\t\t\t" << setprecision(2) << price << "$" << endl;

//     return 0;
// }

/////

// // Exercise 4
// // Write a C++ program that reads any given character code (a positive integer) from the keyboard and displays the corresponding character and the character code as a decimal, an octal, and a hexadecimal on screen.

// #include<iostream>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     cout << dec << n << endl;
//     cout << oct << n << endl;
//     cout << hex << n << endl;

//     return 0;
// }

///// 

// Exercise 5

#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

int main() {
    string word;

    cout << "Let's go! Press the return key: ";
    cin.get(); // allows to read spaces, newline character

    cout << "Enter a word containing three characters at most: ";
    cin >> setw(3) >> word;

    cout << "Your input: " << word << endl;

    return 0;
}