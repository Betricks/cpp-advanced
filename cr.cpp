#include <iostream>


using namespace std;


void foo(int a){
    cout << a << endl;
}

void baz(){
    int x;
    cout << x << endl;
}


void foobaz(int a){
    cout << a << endl;
}


int main(){

    foo(10);
    baz();
    foobaz(20);
    baz();


}



