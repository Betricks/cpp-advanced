#include <iostream>


using namespace std;


struct Point{
    double x;
    double y;
};


void func(Point *self){
    self->x = 11.09900;
    self->y = 0;
    
}


int main(){

    Point point;
    point.x = 10;
    point.y = 20;
    
    cout << func(&point) << endl;
    cout << point.x << " "<<point.y << endl;


}