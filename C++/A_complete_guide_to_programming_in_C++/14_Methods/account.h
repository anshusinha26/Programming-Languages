#ifndef __Account__
#define __Account__

#include<string>
using namespace std;

class Account {
    private: 
        string name;
        unsigned long nr;
        double state;

    public: 
        Account(const string&, unsigned long, double);
        Account(const string&);
        bool init(const string&, unsigned long, double);
        void display();
};

#endif