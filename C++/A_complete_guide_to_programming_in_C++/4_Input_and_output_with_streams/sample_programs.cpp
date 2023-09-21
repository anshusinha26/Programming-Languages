// // Sample program 1
// #include<iostream>
// using namespace std;

// int main() {
//     int number;
//     cout << "Please enter an integer: ";
//     cin >> number;

//     cout << uppercase << "octal \t decimal \t hexadecimal\n" << oct << number << " \t" << dec << " \t" << hex << number << endl;

//     return 0;
// }

/////

// // Sample program 2
// #include<iostream>
// using namespace std;

// int main() {
//     double x = 12.0;
//     cout.precision(5); // sets the precision to 5 decimal points

//     cout << "By default: " << x << endl;
//     cout << "showpoint: " << showpoint << x << endl;
//     cout << "fixed: " << fixed << x << endl;
//     cout << "scientific: " << scientific << x << endl;

//     return 0;
// }

/////

#include<iostream> // input output streams
#include<iomanip> // input output manipulators
#include<string>
using namespace std;

int main() {
    // cout << showpos << 123 << endl; // showpos manipulator, shows the sign of the number, here +123
    // cout << noshowpos << -123 << endl; // -123, no change

    // cout << hex << 11 << endl; // b
    // cout << hex << uppercase << 11 << endl; // B
    // cout << dec << -1 << "\t" << hex << -1 << endl; // -1    FFFFFFFFF   

    // double x = 12.0;
    // cout.precision(5);
    // cout << x << endl; // 12
    // cout << showpoint << x << endl; // 12.000
    // cout << fixed << x << endl; // 12.00000

    // cout << setfill('*') << setw(5) << 12 << endl; // filled by *, where width is 5 so ***12

    // cout << setfill('*') << setw(5) << left << 12 << endl; // 12***, 12 is left aligned
    // cout << setfill('*') << setw(5) << right << 12 << endl; // ***12
    // cout << setfill('?') << setw(20) << left << "flowers" << endl; // flowers?????????????

    // int i, j;
    // cin >> i >> j;

    // cout << i << j << endl;

    // cout.put('H') << endl; // takes only single character

    // string s;
    // getline(cin, s); // used to get a line of string
    // cout << s << endl;
    // getline(cin, s, '.');
    // cout << s << endl; // you can write as much by going next lines and so on, until you type a 
    //                    // delimiting character '.'

}