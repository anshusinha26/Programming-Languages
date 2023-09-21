// // Exercise 1
// // What values do the following arithmetic expressions have? a. 3/10 b. 11%4 c. 15/2.0
// // d. 3 + 4 % 5 e. 3 * 7 % 4 f. 7 % 4 * 3

// #include<iostream>
// using namespace std;

// int main() {
//     cout << 3/10 << endl; // 0
//     cout << 11%4 << endl; // 3 
//     cout << 15/2.0 << endl; // 7.5
//     cout << 3+4%5 << endl; // 7
//     cout << 3*7%4 << endl; // 1
//     cout << 7%4*3 << endl; // 9

//     return 0;
// }

/////

// // Exercise 2 
// // a. How are operands and operators in the following expression associated?
// // x = –4 * i++ – 6 % 4;
// // Insert parentheses to form equivalent expressions.
// // b. What value will be assigned in part a to the variable x if the variable i has a value of –2?

// #include<iostream>
// using namespace std;

// int main() {
//     // int i = 1;
//     // int x = -4 * i++ - 6 % 4; // -6
//     // cout << x << endl;

//     // cout << (-4 * --i) - (6%4) << endl; // i was increment so we had to decrement i first in order to get the same result as above

//     int i = -2;
//     int x = -4 * i++ - 6 % 4; // 6
//     cout << x << endl;

//     return 0;
// }

///// 

// // Exercise 3
// // The int variable x contains the number 7. Calculate the value of the following logical expressions:
// // a. x < 10 && x >= –1
// // b. !x && x >= 3
// // c. x++ == 8 || x == 7

// #include<iostream>
// using namespace std;

// int main() {
//     int x = 7;
//     cout << boolalpha << (x < 10 && x >= -1) << endl; // true
//     cout << boolalpha << (!x && x >=3) << endl; // false
//     cout << boolalpha << (x++ == 8 || x == 7) << endl; // false, x was first 7 and then in second comparision it went up by 1, so now x = 8

//     return 0;
// }