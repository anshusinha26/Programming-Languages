// // Exercise 1
// // Write a C++ program to
// // ■ initialize a string s1 with the string "As time by ..." and a second string s2 with the string "goes",
// // ■ insert string s2 in front of "by" in string s1,
// // ■ erase the remainder of string s1 after the substring "by", ■ replace the substring "time" in s1 with "Bill".
// // In each case, your program should determine the position of the substring. Output string s1 on screen at the beginning of the program and after every
// // modification.

// #include<iostream>
// #include<string>
// using namespace std;

// int main() {
//     string s1 = "As time by ...", s2 = "goes ";

//     s1.insert(s1.find("by"), s2);
//     s1.erase(s1.find("by")+2);
//     s1.replace(s1.find("time"), 4, "Bill");

//     cout << s1 << endl;

//     return 0;
// }

/////

// Exercise 2
// Write a C++ program that reads a word from the keyboard, stores it in a string, and checks whether the word is a palindrome.A palindrome reads the same from left to right as from right to left.The following are examples of palindromes:“OTTO, ” “deed, ” and “level.”
// Use the subscript operator []. Modify the program to continually read and check words.

#include<iostream>
#include<string>
using namespace std;

int main() {
    string s1;
    while (true) {
        cout << "Enter a word: ";
        getline(cin, s1);

        if (s1.length() == 0) {
            break;
        }
        
        int l = 0, r = s1.length() - 1, flag = 1;
        while (l <= r) {
            if (s1[l] == s1[r]) {
                l++;
                r--;
            }
            else {
                flag = 0;
                break;
            }
        }
        if (flag == 0) {
            cout << "Not a palindrome!\n\n";
        }
        else {
            cout << "A palindrome\n\n";
        }
    }

    return 0;
}