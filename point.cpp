#include <iostream>

#include "point.h";

using namespace std;


Point initialize_point(double x, double y){
    Point initailize;

    initailize->x = x;
    initailize->y = y;

    return initailize
}



void print_point(Point *self){

    cout << "struct x value: " << &self.x;

    cout << "struct y value: " << &self.y;
}