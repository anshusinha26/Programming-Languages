#include<iostream>
using namespace std;

// Destructor never takes an argument nor does it return any value 
int objCount = 0;

class Num {
    
    public:
        Num() {
            cout << "Constructor call for object number: " << objCount << endl;
            objCount++;
        }

        ~Num() {
            cout << "Destructor call for object number: " << objCount << endl;
            objCount--;
        }
};

int main() {
    cout << "Inside the main function:\n"
    << "Creating first object n1" << endl;
    Num n1;

    {
        cout << "Entering this block:\n"
        << "Creating two more objects" << endl;
        Num n2, n3;
        cout << "Exiting the block" << endl;
    }

    cout << "Back to main" << endl;

    return 0;
}