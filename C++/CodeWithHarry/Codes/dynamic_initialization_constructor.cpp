// The dynamic initialization of the object means that the object is initialized at the runtime. 
// Dynamic initialization of the object using a constructor is beneficial when the data is of different formats.
#include<iostream>
using namespace std;

class BankDeposit {

    int principal;
    int years;
    float interestRate;
    float returnValue;

    public:
        BankDeposit() {};
        BankDeposit(int p, int y, float r);
        BankDeposit(int p, int y, int r);
        void show();
};

BankDeposit::BankDeposit(int p, int y, float r) {
    principal = p;
    years = y;
    interestRate = r;
    returnValue = principal;
    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

BankDeposit::BankDeposit(int p, int y, int r) {
    principal = p;
    years = y;
    interestRate = float(r) / 100;
    returnValue = principal;  
    for (int i = 0; i < y; i++) {
        returnValue = returnValue * (1 + interestRate);
    }
}

void BankDeposit::show() {
    cout << "Principal amount was: " << principal << "\n"
    << "Return value after " << years
    << " years is: " << returnValue << endl;
}

int main() {
    BankDeposit b1, b2, b3;
    int p, y, R;
    float r;

    cout << "Enter the value of p, y anf r: " << endl;
    cin >> p >> y >> r;
    b1 = BankDeposit(p, y, r);
    b1.show();

    cout << endl;

    cout << "Enter the value of p, y and R: " << endl;
    cin >> p >> y >> R;
    b2 = BankDeposit(p, y, R);
    b2.show();

    return 0;
}