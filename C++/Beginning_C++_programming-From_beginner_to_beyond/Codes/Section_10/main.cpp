//// 96. C-style strings
//#include <iostream>
//
//using namespace std;
//
//int main() {
//    char first_name [20] {};
//    char last_name [20] {};
//    char full_name [50] {};
//    char temp [50] {};
//
//    cout << "Enter your first name: ";
//    cin >> first_name;
//
//    cout << "Enter your last name: ";
//    cin >> last_name;
//    cout << "---------------------------" << endl;
//
//    cout << "Your first name has " << strlen(first_name) << " characters";
//    cout << " and your last name has " << strlen(last_name) << " characters." << endl;
//
//    strcpy(full_name, first_name); // copying first_name to full_name
//    strcat(full_name, " "); // concatenating space to full_name
//    strcat(full_name, last_name); // concatenating last_name to full_name
//
//    cout << full_name << endl;
//
//    strcpy(temp, full_name);
//
//    if (strcmp(temp, full_name) == 0) {
//        cout << temp << " and " << full_name << " are the same" << endl;
//    }
//    else {
//        cout << "Not same!" << endl;
//    }
//
//    return 0;
//}

//// 97. C++ strings
//#include <iostream>
//#include <string>
//
//using namespace std;
//
//int main() {
////    // Declaring and initializing
////    string s1;
////    string s2 {"Frank"};
////    cout << s2 << endl;
////    string s3 {s2};
////    cout << s3 << endl;
////    string s4 {"Frank", 3};
////    cout << s4 << endl;
////    string s5 {s3, 0, 2};
////    cout << s5 << endl;
////    string s6 {3, 'X'};
////    cout << s6 << endl;
//
////    // Assignment
////    string s1;
////    s1 = "C++ sucks!";
////
////    string s2;
////    s2 = s1;
////
////    cout << s1 << "\n" <<  s2 << endl;
//
////    // Concatenation
////    string s1 {"C++"};
////    string s2 {" is a powerful"};
////
////    string sentence = s1 + s2 + " language";
////    cout << sentence << endl;
//
////    // substr(start_index, length)
////    string s1 {"This is a test"};
////
////    cout << s1.substr(0, 4) << endl;
////    cout << s1.substr(5, 2) << endl;
////    cout << s1.substr(8, 1) << endl;
////    cout << s1.substr(10, 4) << endl;
//
////    // Searching - find()
////    string s1 {"This is a test"};
////
////    cout << s1.find("This") << endl;
////    cout << s1.find('e') << endl;
//
////    // Removing characters - erase(start_index, length), clear()
////    string s1 {"This is a test"};
////
////    cout << s1.erase(0, 4) << endl;
////    s1.clear();
////    cout << s1 << endl;
//
////    // length()
////    string s1 {"This is a test"};
////    cout << s1.length() << endl;
//
//    return 0;
//}

