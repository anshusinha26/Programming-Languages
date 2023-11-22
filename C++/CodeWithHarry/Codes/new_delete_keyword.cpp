#include<iostream>
using namespace std;

int main() {
    int a = 4;
    int* ptr = &a; // * a pointer ptr storing the address of a
    cout << ptr << endl;
    cout << *(ptr) << endl; // * dereferencing ptr

    // * new keyword
    int* p = new int(5);
    cout << p << endl;
    cout << *p << endl;

    int* arr = new int[3]; // * dynamically created an array of size of three, assigned to pointer arr
    arr[0] = 1;
    arr[1] = 2;
    arr[2] = 3;
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    // * delete keyword
    delete[] arr;
    cout << "The value of arr[0] is: " << arr[0] << endl;
    cout << "The value of arr[1] is: " << arr[1] << endl;
    cout << "The value of arr[2] is: " << arr[2] << endl;

    return 0;
}