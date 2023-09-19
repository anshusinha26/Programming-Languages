// // Exercise 1
// // Write a C++ program that outputs the following text on screen:
// // Oh what
// // a happy day!
// // Oh yes,
// // what a happy day!

// #include<iostream>
// using namespace std;

// int main() {
//     cout << "Oh what" << endl;
//     cout << "a happy day!" << endl;
//     cout << "Oh yes," << endl;
//     cout << "what a happy day!" << endl;

//     return 0;
// }

/////

// // Exercise 2 
// // The following program contains several errors:
// // */ Now you should not forget your glasses //
// // #include <stream>
// // int main
// // {
// //   cout << "If this text",
// //   cout >> " appears on your display, ";
// //   cout << " endl;"
// //   cout << 'you can pat yourself on '
// //        << " the back!"  << endl.
// //   return 0;
// // )
// // Resolve the errors and run the program to test your changes.

// #include<iostream>
// using namespace std;

// int main() {
//     cout << "If this text,";
//     cout << " appears on your display, " << endl;
//     cout << "you can pat yourself on";
//     cout << " the back!" << endl;

//     return 0;
// }

///// 

// Exercise 3
#include<iostream>
using namespace std;

void pause();

int main() {
    cout << endl << "Dear reader, " << endl << "have a ";
    pause();
    cout << " ! " << endl;

    return 0;
}

void pause() {
    cout << "Break";
}