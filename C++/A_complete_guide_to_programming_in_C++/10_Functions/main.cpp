// Exercise 1
// b. Now restructure your program to store the functions main() and
// sum() in individual source files, for example, sum_t.cpp and sum.cpp

#include<iostream>
#include<random>
#include "sum.h"
using namespace std;

int main() {
    long n1, n2, n3, n4, res;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<long> dist(1, 100000);

    n1 = dist(gen);
    n2 = dist(gen);
    n3 = dist(gen);
    n4 = dist(gen);

    res = sum(n1, n2, n3, n4);

    cout << "The sum of numbers: " << n1 << ' ' << n2 << ' ' << n3 << ' ' << n4 << " is\n";
    cout << res << endl;

    return 0;
}