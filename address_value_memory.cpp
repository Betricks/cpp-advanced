#include <iostream>

using namespace std;



int main(){
    int a = 10000;
    int b = 2;

    int* a_pointer = &a;
    int* b_pointer = &b; 

    cout << "address of a: " << &a << " \naddress of b: " << &b << endl;
    cout << "a_pointer: " << a_pointer << " \nb_pointer: " << b_pointer << endl;
    cout << "value of a_pointer: " << *a_pointer << " \nvalue of b_pointer: " << *b_pointer << endl;
     cout << "address of a_pointer: " << &a_pointer << " \naddress of b_pointer: " << &b_pointer << endl;
     *a_pointer = 1;
     *b_pointer = 0;
     cout << "a: " << a << "\nb: " << b << endl;
}