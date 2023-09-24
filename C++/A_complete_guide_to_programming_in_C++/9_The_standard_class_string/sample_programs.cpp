// // Sample program 1

// #include<iostream>
// #include<string>
// using namespace std;

// string prompt("Enter a line of text: "), line(50, '-');

// int main() {
//     string text;
//     cout << line << endl << prompt << endl;

//     getline(cin, text);
//     cout << line << endl << "Your text is " << text.length() << " charaters long!" << endl;

//     string copy(text), start(text, 0, 10);

//     cout << "Your text:\n" << copy << endl;
//     text = "1234567890";

//     cout << line << endl << "The first 10 characters:\n" << start << endl << text << endl;

//     return 0;
// }

/////

// // Sample program 2
// // Reads several line of text and ouputs in reverse order
// #include<iostream>
// #include<string>
// using namespace std;

// string prompt("Please enter some text!"), line(50, '-');

// int main() {
//     prompt += "\nTerminate the input with an empty line.\n";
//     cout << line << endl << prompt << line << endl;

//     string text1, text2;
//     while (true) {
//         getline(cin, text2); // I, am, a, good, boy
//         if (text2.length() == 0) {
//             break;
//         }
//         text1 = text2 + "\n" + text1; // 
//     }

//     cout << line << "\nYour line of text in reverse order:\n" << line << endl;

//     cout << text1 << endl;

//     return 0;
// }

