#ifndef __Date__
#define __Date__

#include<iostream>
using namespace std;

class Date {
    private: 
        int day, month, year;

    public:
        void init(int month, int day, int year);
        void init(void);
        void print(void);
};

#endif