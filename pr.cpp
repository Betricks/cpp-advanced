
#include <iostream>

using namespace std;



int main(){
    int* poin;

    {
        int i = 10;
        poin = &i;
        cout << "pointer address: " << poin << endl;
        cout << "pointer value: " << *poin << endl;
    }

    {
        int x = 20;
        poin = &x;
        cout << "pointer address: " << poin << endl;
        cout << "pointer value: " << *poin << endl;
    }

    cout << "pointer address: " << poin << endl;
    cout << "pointer value: " << *poin << endl;
}