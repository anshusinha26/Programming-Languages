// Sample program 2
#include<iostream>
using namespace std;

int main() {
    double x = 12.0;
    cout.precision(5); // sets the precision to 5 decimal points

    cout << "By default: " << x << endl;
    cout << "showpoint: " << showpoint << x << endl;
    cout << "fixed: " << fixed << x << endl;
    cout << "scientific: " << scientific << x << endl;

    return 0;
}