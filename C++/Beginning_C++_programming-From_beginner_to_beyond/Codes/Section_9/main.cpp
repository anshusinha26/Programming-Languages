//// 77. if statement
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int num;
//    const int min {10};
//    const int max {100};
//
//    cout << "Enter a number between " << min << " and " << max << ": " << endl;
//    cin >> num;
//
//    if (num >= min) {
//        cout << num << " is greater than " << min << endl;
//    }
//
//    if (num <= max) {
//        cout << num << " is lesser than " << max << endl;
//    }
//
//    return 0;
//}

//// 78. if else statement
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int num;
//    const int target {10};
//
//    cout << "Enter a number: " << endl;
//    cin >> num;
//
//    if (num >= target) {
//        cout << num << " is greater than " << target << endl;
//        int diff {num - target};
//        cout << num << " is " << diff << " greater than " << target << endl;
//    }
//    else {
//        cout << num << " is lesser than " << target << endl;
//        int diff {target - num};
//        cout << num << " is " << diff << " lesser than " << target << endl;
//    }
//
//    return 0;
//}

//// 80. switch-case statement
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char grade;
//    cout << "Enter a grade: " << endl;
//    cin >> grade;
//
//    switch(grade) {
//        case 'a':
//        case 'A':
//            cout << "You got 90 or above" << endl;
//            break;
//        case 'b':
//        case 'B':
//            cout << "You got 80 - 89" << endl;
//            break;
//        case 'c':
//        case 'C':
//            cout << "You got 70 - 79" << endl;
//            break;
//        case 'd':
//        case 'D':
//            cout << "You got 60 - 69" << endl;
//            break;
//        case 'f':
//        case 'F':
//            cout << "You got 50 - 59";
//            break;
//        default:
//            cout << "Sorry, not a valid grade" << endl;
//    }
//    return 0 ;
//}

//// 81. Conditional operator
//#include <iostream>
//
//using namespace std;
//
//int main() {
////    int a {92};
////    int b = {20};
////    int score {98};
////    int result;
//
////    result = (a > b) ? a : b;
////    result = (a < b) ? a : b;
////
////    cout << result << endl;
////    cout << ((score > 90) ? "Excellent" : "Good") << endl;;
//
//    int num;
//    cout << "Enter a number: " << endl;
//    cin >> num;
//
//    cout << ((num % 2 == 0) ? "Even" : "Odd") << endl;
//
//    return 0;
//}

//// 83. for loop
//#include <iostream>
//
//using namespace std;
//
//int main() {
////    // print even nos between 1 to 10
////    for (int i {1}; i <= 10; i++) {
//////        cout << ((i % 2 == 0) ? i : 0) << endl;
////        if (i % 2 == 0) {
////            cout << i << " ";
////        }
////    }
//
////    for (int i {1}, j {5}; i <= 5; i++, j++) {
////        cout << i << " * " << j << " = " << i * j << endl;
////    }
//
//
//
//    return 0;
//}

//// 84. range-based loop
//#include <iostream>
//#include <vector>
//#include <iomanip>
//
//using namespace std;
//
//int main() {
////    int scores[] {10, 20, 30, 40 ,50};
////    for (auto score: scores) {
////        cout << score << " ";
////    }
//
//    vector <double> temp {89.3, 93.1, 99.4, 99.8, 100.1};
//    double avg{0};
//    double sum {0};
//
//    for (auto item: temp) {
//        sum += item;
//    }
//
//    avg = sum / temp.size();
//    cout << fixed << setprecision(1);
//    cout << avg << endl;
//
//    return 0;
//}

//// 85. while loop
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    int i {1};
//    while (i <= 10) {
//        if (i % 2 == 0) {
//            cout << i << endl;
//        }
//        i++;
//    }
//
//    int i {0};
//    int scores [] {99, 98, 100};
//    while (i < 3) {
//        cout << scores[i] << " ";
//        i++;
//    }
//
//    return 0;
//}

//// 86. do while loop
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char sel {};
//    do {
//        cout << "---------------------" << endl;
//        cout << "1. Do this" << endl;
//        cout << "2. Do that" << endl;
//        cout << "3. Do something else" << endl;
//        cout << "Q. Quit" << endl;
//        cout << "Enter your selection: ";
//        cin >> sel;
//    } while (sel != 'q' and sel != 'Q');
//    return 0;
//}

//// 90. Section challenge
//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main() {
//    vector<int> arr {1, 2, 3, 4, 5};
//    char sel {};
//    do {
//        cout << "------------------------" << endl;
//        cout << "P - Print numbers" << endl;
//        cout << "A - Add a number" << endl;
//        cout << "M - Display mean of the numbers" << endl;
//        cout << "S - Display the smallest number" << endl;
//        cout << "L - Display the largest number" << endl;
//        cout << "Q - Quit" << endl;
//        cout << endl;
//        cout << "Enter your choice: ";
//        cin >> sel;
//
//        if (sel == 'p' or sel == 'P') {
//            cout << "Elements of the array: " << endl;
//            for (auto item: arr) {
//                cout << item << " ";
//            }
//            cout << endl;
//        }
//
//        else if (sel == 'a' or sel == 'A') {
//            int num {};
//            cout << "Enter a number to add to the array: ";
//            cin >> num;
//            arr.push_back(num);
//            cout << num << " has been added to the array" << endl;
//        }
//
//        else if (sel == 'm' or sel == 'M') {
//            int sum {0};
//            int avg {0};
//            for (auto item: arr) {
//                sum += item;
//            }
//            avg = sum / arr.size();
//            cout << "Mean of the numbers: " << avg << endl;
//        }
//
//        else if (sel == 's' or sel == 'S') {
//            int small = arr[0];
//            for (auto item: arr) {
//                if (item < small) {
//                    small = item;
//                }
//            }
//            cout << "The smallest number in the array is: " << small << endl;
//        }
//
//        else if (sel == 'l' or sel == 'L') {
//            int large = arr[0];
//            for (auto item: arr) {
//                if (item > large) {
//                    large = item;
//                }
//            }
//            cout << "The largest number in the array is: " << large << endl;
//        }
//
//        else {
//            if (sel == 'q' or sel == 'Q') {
//                cout << "Program terminated!" << endl;
//            }
//            else {
//                cout << "Invalid selection!" << endl;
//            }
//        }
//    } while (sel != 'q' and sel != 'Q');
//
//    return 0;
//}