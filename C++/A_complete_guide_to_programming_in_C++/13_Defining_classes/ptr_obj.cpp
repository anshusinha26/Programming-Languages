#include "account.h"

bool getAccount(ACCOUNT *pAccount);

int main() {
    ACCOUNT current1, current2, *ptr = &current1;

    ptr->init("Cheers, Mary", 5324, 342.33); // current1.init(.....)
    ptr->display();

    ptr = &current2;
    if (getAccount(ptr))
        ptr->display();
    else 
        cout << "Invalid input!" << endl;
    
    return 0;
}