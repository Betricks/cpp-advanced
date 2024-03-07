#include <iostream>


using namespace std;


int main(){

    int* p = new int(1);
    cout << "Newly allocated Memory location: " << &p << endl;
    delete p;
    cout << "Newly deleted Memory location: " << p << endl;
    p = NULL;
    cout << "Newly allocated Memory location: " << p << endl;


}