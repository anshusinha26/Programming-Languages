#include<iostream>
using namespace std;

class Shop {

    int itemId[100];
    int itemPrice[100];
    int counter;

    public:
        void initCounter(void) {counter = 0;}
        void setItemId(void);
        void setItemPrice(void);
        void incrementCounter(void);
        void displayItemPrice(void);
};

void Shop :: setItemId(void) {
    cout << "Enter the ID of the item number " << counter+1 << ": ";
    cin >> itemId[counter];
}

void Shop :: setItemPrice(void) {
    cout << "Enter the price of the item number " << counter+1 << ": ";
    cin >> itemPrice[counter];
}

void Shop :: incrementCounter(void) {
    counter++;
}

void Shop :: displayItemPrice(void) {
    cout << endl;
    for (int i = 0; i < counter; i++) {
        cout << "The price of the item number " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main() {
    Shop s1;
    s1.initCounter();
    for (int i = 0; i < 5; i++) {
        s1.setItemId();
        s1.setItemPrice();
        s1.incrementCounter();
    }
    s1.displayItemPrice();

    return 0;
}