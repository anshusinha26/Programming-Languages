// Default arguments of the constructor are those which are provided in the constructor declaration. 
// If the values are not provided when calling the constructor the constructor uses the default arguments automatically.

#include<iostream>
using namespace std;

class DataAllocation{

    int d1, d2, d3;

    public:
        DataAllocation(int n1, int n2 = 1, int n3 = 2) {
            d1 = n1;
            d2 = n2;
            d3 = n3;
        }

        void printData();
};

void DataAllocation::printData() {
    cout << "The value of d1, d2 and d3 is: " << d1 << ", " << d2 << " and " << d3 << endl; 
}

int main() {
    DataAllocation da1(1);
    da1.printData();

    return 0;
}