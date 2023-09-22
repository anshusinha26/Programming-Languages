// // Sample program 1
// // To find the average, until a something different than an integer is entered
// #include<iostream>
// using namespace std;

// int main() {
//     int x, count = 0;
//     float sum = 0.0;

//     cout << "Enter some integers: ";
//     while (cin >> x) {
//         sum += x;
//         ++count;
//     }

//     cout << "Average: " << sum / count << endl;

//     return 0;
// }

/////

// Example program 1

// #include<iostream>
// using namespace std;

// int main() {
//     int count = 0;
//     while (count < 10) {
//         cout << ++count << endl;
//     }
// }

///// 

// // Example program 2

// #include<iostream>
// using namespace std;

// int main() {
//     for (int i = 1; i < 10; ++i)
//         cout << i << endl;
// }

/////

// // Sample program 2
// // Euro to dollar

// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main() {
//     double rate = 1.15;
    
//     cout << "\tEuro \tDollar" << endl;

//     for (int euro = 1; euro <=5; euro++) {
//         cout << "\t" << euro << " \t" << fixed << setprecision(2) << euro * rate << endl;
//     }

//     return 0;
// }

/////

// // Example program 3

// #include<iostream>
// using namespace std;

// int main() {
//     int i, limit;
//     for (i = 0, limit = 10; i < limit; i+= 2) {
//         cout << i << endl;
//     }
// }

/////

// // Sample program 3
// #include<iostream>
// using namespace std;

// int main() {
//     int n = 10;

//     do {
//         cout << n << endl;
//         n--;
//     } while (n > 0);

//     return 0;
// }

/////

// // Sample program 4

// #include<iostream>
// using namespace std;

// int main() {
//     double x, y;
//     cout << "Enter two different numbers: ";

//     if (cin >> x && cin >> y) {
//         if (x > y) {
//             cout << x << endl;
//         }
//         else {
//             cout << y << endl;
//         }
//     }
//     else {
//         cout << "Invalid input!" << endl;
//     }

//     return 0;
// }

/////

// // Example program 4

// #include<iostream>
// using namespace std;

// int main() {
//     int x;

//     if (cin >> x && x > 0) {
//         if (x % 2 == 0) {
//             cout << "even" << endl;
//         }
//         else {
//             cout << "odd" << endl;
//         }
//     }
//     else {
//         cout << "Invalid input!" << endl;
//     }

//     return 0;
// }

/////

// // Sample program 5
// // Speed limit

// #include<iostream>
// using namespace std;

// int main() {
//     double speed_limit, driving_speed;

//     if (cin >> speed_limit && cin >> driving_speed && speed_limit > 0 && driving_speed >0) {
//         if (driving_speed > speed_limit) {
//             cout << "Handover your driver's license!" << endl;
//         }
//         else {
//             cout << "You are ok with the speed limit" << endl;
//         }
//     }
//     else {
//         cout << "Invalid input!" << endl;
//     }

//     return 0;
// }

/////

// // Sample program 6
// // Conditional expression

// #include<iostream>
// using namespace std;

// int main() {
//     float x, y;

//     if (!(cin >> x && cin >> y)) {
//         cout << "Invalid input!" << endl;
//     }
//     else {
//         cout << (x < y ? y : x) << endl; // if y > x, then print y else x
//     }

//     return 0;
// }

/////

// // Sample program 7
// // To output an ASCII code table

// #include<iostream>
// #include<iomanip>
// using namespace std;

// int main() {
//     int ac = 32; // begine with ASCII code 32

//     while (true) {
//         cout << "\nCharacter    Decimal    Hexadecimal\n\n";

//         int upper;

//         for (upper = ac + 20; ac < upper && ac < 256; ac++) {
//             cout << "    " << (char)ac << setw(10) << dec << ac << setw(10) << hex << ac << endl;
//         if (upper >= 256) break;
//         cout << "\nGo on -> <return>, Stop -> <q>+<return>";
        
//         char answer;
//         cin.get(answer);
//         if(answer == 'q' || answer == 'Q')
//             break;
//         cin.sync();
//         }

//         return 0;
//     }
// }

/////

// // Example program 5
// // goto and Labels

// #include<iostream>
// using namespace std;

// int main() {
//     int x = 10;
//     print: cout << "Hello" << endl; // print - label

//     for (int i = 0; i < 10; i++) {
//         if (i == 5) goto print; // goes to the print label, Hello is printed
//         break; // and the loop terminates
//     }

//     return 0;
// }