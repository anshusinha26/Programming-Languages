// // Sample program 1
// // function definition

// #include<iostream>
// using namespace std;

// void test(int, double); // prototype

// int main() {
//     cout << "Now function test() will be called\n";
//     test(10, -7.5);
//     cout << "\nAnd back again in main()." << endl;

//     return 0;
// }

// void test(int arg1, double arg2) {
//     cout << "\nIn function test()." << "\n 1. argument: " << arg1 << "\n 2. argument: " << arg2 << endl;
// }

/////

// // Sample program 2
// // area of a rectangle

// #include<iostream>
// #include<iomanip>
// using namespace std;

// double area(double, double); // prototype

// int main() {
//     double x = 3.5, y = 7.3, res;

//     res = area(x, y);

//     cout << "The area of a rectangle" << endl;
//     cout << "with width" << setw(10) << x << endl;
//     cout << "and length" << setw(10) << y << endl;
//     cout << "is" << setw(20) << res << endl;

//     return 0;
// }

// double area(double width, double length) {
//     return (width * length);
// }

/////

// // Sample program 3
// // recursive funtion to read a line and print it in reverse order

// #include<iostream>
// using namespace std;

// void getput(void); // prototype

// int main() {
//     cout << "Please enter a line of text:\n";
//     getput();
//     cout << "\nBye bye!" << endl;

//     return 0;
// }

// void getput() {
//     char c;
//     if (cin.get(c) && c != '\n') {
//         getput();
//     }
//     cout.put(c);
// }