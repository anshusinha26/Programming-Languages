#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

struct Representative {
    string name;
    double sales;
};

void print(const Representative& v) {
    cout << fixed << setprecision(2)
        << left << setw(20) << v.name   
        << right << setw(20) << v.sales << endl;
}

int main() {
    Representative john;
    string line(50,'-');
    john.name = "Hopkins, John";
    john.sales = 4234.32;

    john.sales += 100;

    cout << "\tRepresentative\t\tSales\n"
        << line << endl;
    
    print(john);
    cout << "\nTotal sales: "
        << john.sales << '\n' << endl;

    return 0;
}