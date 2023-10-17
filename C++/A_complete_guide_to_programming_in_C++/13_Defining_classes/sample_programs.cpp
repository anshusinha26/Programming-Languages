// Sample program 1
// example of a class

#ifndef __ACCOUNT__ // avoid multiple inclusions
#define __ACCOUNT__ // define ACCOUNT if not defined

#include<iostream>
#include<string>
using namespace std;

class ACCOUNT {
    private:
        string name;
        unsigned long nr;
        double balance;

    public: 
        bool init(const string&, unsigned long, double);
        void display();
};

#endif // __ACCOUNT__