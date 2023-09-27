// // Exercise 1
// // a. Write the function sum() with four parameters that calculates the arguments
// // provided and returns their sum.
// // Parameters: Four variables of type long.
// // Returns: The sum of type long.
// // Use the default argument 0 to declare the last two parameter of the
// // function sum().Test the function sum() by calling it by all three possible
// // methods. Use random integers as arguments.

// #include<iostream>
// #include<random>
// using namespace std;

// long sum(long, long, long=0, long=0); // prototype


// int main() {
//     long n1, n2, n3, n4, res;

//     random_device rd; // obtain a random seed from the hardware
//     mt19937 gen(rd()); // Mersenne Twister pseudo random generator
//     uniform_int_distribution<long> dist(1, 100000); // uniform distributor, in range

//     n1 = dist(gen);
//     n2 = dist(gen);
//     n3 = dist(gen);
//     n4 = dist(gen);

//     res = sum(n1, n2, n3, n4);

//     cout << "The sum of numbers: " << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << " is\n";
//     cout << res << endl;

//     return 0;

// }

// long sum(long n1, long n2, long n3, long n4) {
//     return (n1+n2+n3+n4);
// }

/////

// // Exercise 2
// // a. Write an inline function, Max(double x, double y), which returns
// // the maximum value of x and y. (Use Max instead of max to avoid a collision
// // with other definitions of max.) Test the function by reading values
// // from the keyboard.
// // Can the function Max() also be called using arguments of the types
// // char, int, or long?

// // b. Now overload Max() by adding a further inline function Max(char x,
// // char y) for arguments of type char .
// // Can the function Max() still be called with two arguments of type
// // int?

// #include<iostream>
// using namespace std;

// inline double Max(double x, double y) {
//     return (x > y ? x : y);
// }

// inline char Max(char x, char y) {
//     return (x > y ? x : y);
// }

// int main() {
//     double x, y, res;
//     cout << "Enter two values: ";
//     if (cin >> x && cin >> y) {
//         res = Max(x, y);
//         cout << res << endl;
//     }
//     else {
//         cout << "Invalid input!" << endl;
//     }

//     char a, b, cres;
//     cout << "Enter two character values: ";
//     if (cin >> a && cin >> b) {
//         res = Max(a, b);
//         cout << res << endl;
//     }
//     else {
//         cout << "Invalid input!" << endl;
//     }

//     return 0;
// }

/////

// // Exercise 3
// // The factorial n! of a positive integer n is defined as
// // n! = 1*2*3 . . . * (n-1) * n
// // Where 0! = 1
// // Write a function to calculate the factorial of a number.
// // Argument: A number n of type unsigned int.
// // Returns: The factorial n! of type long double.
// // Formulate two versions of the function, where the factorial is
// // a. calculated using a loop
// // b. calculated recursively
// // Test both functions by outputting the factorials of the numbers 0 to 20 as shown
// // opposite on screen.

// // a
// #include<iostream>
// using namespace std;

// int main() {
//     int n, prod;
//     cout << "Enter a number: ";

//     if (cin >> n) {
//         prod = n;
//         for (int i = n-1; i > 0; i--) {
//             prod *= i;
//         }
//         cout << "Factorial of " << n << " is " << prod << endl;
//     }

//     else {
//         cout << "Invalid input!" << endl;
//     }

//     return 0;
// }

// // b
// #include<iostream>
// using namespace std;

// void factorial(int n, int &res) {
//     if (n == 0)
//         return;
//     factorial(n-1, res);
//     res *= n;
// }

// int main() {
//     int n, res;
//     cout << "Enter a number: ";
//     if (cin >> n) {
//         res = 1;
//         factorial(n, res);
//         cout << "Factorial of " << n << " is " << res << endl;
//     }
//     else {
//         cout << "Invalid input!" << endl;
//     }

//     return 0;
// }

/////

// // Exercise 4
// // Write a function pow(double base, int exp) to calculate integral powers of
// // floating-point numbers.
// // Arguments: The base of type double and the exponent of type int.
// // Returns: The power baseexp of type double.
// // For example, calling pow(2.5, 3) returns the value
// // 2.53 = 2.5 * 2.5 * 2.5 = 15.625

// #include<iostream>
// using namespace std;

// void power(double, int, double &); // prototype

// int main() {
//     double b, res=1;
//     int e;
//     cout << "Enter a double base and an integral power: ";
//     if (cin >> b && cin >> e && e > 0) {
//         power(b, e, res);
//         cout << b << "^" << e << " = " << res << endl;
//     }
//     else {
//         cout << "Invalid input!" << endl;
//     }

//     return 0;
// }

// void power(double b, int exp, double &res) {
//     for (int i = 0; i < exp; i++) {
//         res *= b;
//     }
// } 