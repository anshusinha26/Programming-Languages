// defining methods

#include "account.h"
#include<iostream>
#include<iomanip>
using namespace std;

bool ACCOUNT::init(const string& i_name, unsigned long i_nr, double i_balance) {
    if (i_name.size() < 1) 
        return false;
    name = i_name;
    nr = i_nr;
    balance = i_balance;
    return true;
}

void ACCOUNT::display() {
    string line(50, '-');
    cout << fixed << setprecision(2) 
        << line << '\n'
        << "Account holder:\t\t" << name << '\n'
        << "Account number:\t\t" << nr << '\n'
        << "Account balance:\t\t" << balance << '\n'
        << line << endl;
}