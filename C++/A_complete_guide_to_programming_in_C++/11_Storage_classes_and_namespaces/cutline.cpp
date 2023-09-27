// Source file 1
// A filter to remove white-spaces characters at the ends of the lines
#include<iostream>
#include<string>
using namespace std;

void cutline(void);
string line;

int main() {
    while (getline(cin, line)) {
        cutline();
        cout << line << endl;
    }

    return 0;
}