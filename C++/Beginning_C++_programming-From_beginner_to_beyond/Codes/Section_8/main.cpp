//// 64. Assignment operator
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int num1 {10};
//    int num2 {20};
//
//    cout << "num1 is: " << num1 << endl;
//    cout << "num2 is: " << num2 << endl;
//
//    num1 = num2;
//    cout << endl;
//
//    cout << "num1 is: " << num1 << endl;
//    cout << "num2 is: " << num2 << endl;
//
//    num1 = num2 = 1000;
//    cout << endl;
//
//    cout << "num1 is: " << num1 << endl;
//    cout << "num2 is: " << num2 << endl;
//
//    return 0;
//}

//// 67. Increment/decrement operator
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int counter {10};
//    int result {0};
//
//    counter = counter + 1;
//    cout << "Counter: " << counter << endl;
//
//    counter++;
//    cout << "Counter: " << counter<< endl;
//
//    ++counter;
//    cout << "Counter: " << counter << endl;
//
//    counter--;
//    cout << "Counter: " << counter << endl;
//
//    --counter;
//    cout << "Counter: " << counter << endl;
//
//    return 0;
//}

// 68. Mixed expressions and conversions
#include <iostream>

using namespace std;

//int main() {
//    int t_amt {100};
//    int t_num {8};
//
//    double avg = t_amt / t_num;
//    cout << avg << endl;
//
//    avg = static_cast<double>(t_amt) / t_num;
//    cout << avg << endl;
//
//    return 0;
//}

//// WAP that asks a user to enter three integers and computes their output.
//int main() {
//    int num1, num2, num3;
//    int counter {0};
//    double avg;
//    cout << "Enter num1: " << endl;
//    counter ++;
//    cin >> num1;
//    cout << "Enter num2: " << endl;
//    counter++;
//    cin >> num2;
//    cout << "Enter num3: " << endl;
//    counter++;
//    cin >> num3;
//
//    avg = static_cast<double>(num1 + num2 + num3) / counter;
//    cout << avg << endl;
//
//    return 0;
//}

//// 69. Testing for equality
//int main() {
//    bool result {false};
//    int num1, num2;
//    cout << "Enter two integers separated by spaces: " << endl;
//    cin >> num1 >> num2;
//
//    cout << boolalpha;
//
//    result = (num1 == num2);
//    cout << result;
//
//    return 0;
//}

//// 70. Relational operators
//int main() {
//    int num1 {1};
//    int num2 {0};
//    bool r1, r2;
//
//    cout << boolalpha;
//
//    r1 = num1 and num2;
//    r2 =  num1 or num2;
//
//    cout << r1 << endl;
//    cout << r2 << endl;
//
//    return 0;
//}

//// 74. Section challenge
//int main() {
//    int cents;
//    int dollars, quarters, dimes, nickels, pennies, balance;
//    cout << "Enter number of cents: " << endl;
//    cin >> cents; // 267
//
//    dollars = cents / 100; // 2
//    balance = cents % 100; // 67
//    cents = balance; // 67
//
//    quarters = cents / 25; // 2
//    balance = cents % 25; // 17
//    cents = balance; // 17
//
//    dimes = cents / 10; // 1
//    balance = cents % 10; // 7
//    cents = balance; // 7
//
//    nickels = cents / 5; // 1
//    balance = cents % 5; // 2
//    cents = balance; // 2
//
//    pennies = cents / 1; // 2
//
//    cout << "Your change is as follows: " << endl;
//
//    cout << "dollars: " << dollars << endl;
//    cout << "quarters: " <<  quarters << endl;
//    cout << "dimes: " << dimes << endl;
//    cout << "nickels: " << nickels << endl;
//    cout << "pennies: " << pennies << endl;
//
//    return 0;
//}

