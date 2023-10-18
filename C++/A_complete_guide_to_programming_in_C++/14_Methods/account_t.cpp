// constructor calls

#include "account.h"

int main() {
    Account giro("Cheers, Mary", 123231, -34.32), save("Lucky, Luke");
    
    giro.display();
    save.display();

    Account temp("Funny, Susy", 98433, 34.34);
    save = temp; // object assignment
    save.display();

    save.init("Lucky, Luke", 2342, 232.23);
    save.display();

    return 0;
}