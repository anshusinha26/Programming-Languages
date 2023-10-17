#include "account.h"

int main() {
    ACCOUNT current1, current2; // creating two objects

    current1.init("Cheers, Mary", 1234, -1200.99);
    current2.display();

    // current1.balance += 100; // error: private member

    current2 = current1;
    current2.display();

    current1.init("Jones, Tom", 32443, 23.23);
    current2.display();

    ACCOUNT& mtr = current1; // mtr is an alias name for the object current1

    mtr.display();

    return 0;
}