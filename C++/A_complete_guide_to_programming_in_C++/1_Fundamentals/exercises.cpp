// // Exercise 1
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