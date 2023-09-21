// // Sample program 1
// //  Calculating powers with
// //  the standard function pow()
// #include <iostream>
// #include <cmath>
// using namespace std;

// int main() {
//     double x = 2.5, y;

//     // y = pow("x", 3.0);
//     // y = pow(x + 3.0);
//     y = pow(x, 3.0);
//     y = pow(x, 3);

//     cout << "2.5 raised to 3 yields:                 " << y << endl;
//     cout << "2 + (5 raised to the power 2.5) yields: " <<  2.0 + pow(5.0, x) << endl;

//     return 0; 
// }

/////

// // Sample program 2
// #include<iostream>
// #include<cstdlib>
// using namespace std;

// int main() {
//     unsigned int seed;
//     int z1, z2, z3;

//     // cout << "To initialize the random number generator, please enter an integer value: " << endl;
//     // cin >> seed;

//     // srand(seed);

//     z1 = rand();
//     z2 = rand();
//     z3 = rand();

//     cout << "Three random numbers:" << endl;
//     cout << z1 << " " << z2 <<  " " << z3 << endl;

//     return 0;
// }

///// 

// // Sample program 3
// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string prompt = "What is your name: ",
//             name, line(40, '-'),
//             total = "Hello ";

//     cout << prompt;
//     getline(cin, name);
//     total += name;

//     cout << line << endl;
//     cout << total << endl;
//     cout << "Your name is " << name.length() << " characters long!" << endl;

//     return 0;
// }