#include<iostream>
using namespace std;

class Employee {

    int id;
    static int count; // static data member

    public: 
        void setData(void) {
            cout << "Ente the id: ";
            cin >> id;
        }
        
        void getData(void) {
            cout << "The id of the employee with employee number " << count+1 << " is: " << id << endl;
            count++;
        }

        static void getCount(void) {
            cout << "The value of count is: " << count << "\n" << endl;
        }
};

int Employee::count;

int main() {    
    Employee e1, e2, e3;

    e1.setData();
    e1.getData();
    e1.getCount();

    e2.setData();
    e2.getData();
    Employee::getCount();

    e3.setData();
    e3.getData();
    Employee::getCount();

    return 0;
}