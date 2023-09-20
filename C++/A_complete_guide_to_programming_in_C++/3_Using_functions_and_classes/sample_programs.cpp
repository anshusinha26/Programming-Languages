// Sample program 1
//  Calculating powers with
//  the standard function pow()
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x = 2.5, y;

    // y = pow("x", 3.0);
    // y = pow(x + 3.0);
    y = pow(x, 3.0);
    y = pow(x, 3);

    cout << "2.5 raised to 3 yields:                 " << y << endl;
    cout << "2 + (5 raised to the power 2.5) yields: " <<  2.0 + pow(5.0, x) << endl;

    return 0; 
}