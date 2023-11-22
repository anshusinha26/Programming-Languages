#include<iostream>
#include<string>
using namespace std;

class Binary {

    string s; // by default string s is part of the private member function

    public:
        void read(void);
        void chk_bin(void);
        void ones_complement(void);
        void display(void);
};

void Binary :: read(void) {
    cout << "Enter a binary number: ";
    cin >> s;
    chk_bin(); // nesting member fucntion
}

void Binary :: chk_bin(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] != '0' && s[i] != '1') {
            cout << "Not a binary number" << endl;
            exit(0);
        }
    }
}

void Binary :: ones_complement(void) {
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0') {
            s[i] = '1';
        }
        else {
            s[i] = '0';
        }
    }
}

void Binary :: display(void) {
    cout << s << endl;
}



int main() {
    Binary b1;
    b1.read();
    // b1.chk_bin();
    cout << "Before one's complement: ";
    b1.display();
    cout << "After one's complement: ";
    b1.ones_complement();
    b1.display();

    return 0;
}