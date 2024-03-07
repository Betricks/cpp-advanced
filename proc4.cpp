#include <iostream>

using namespace std;


struct Point{
    double x;
    double y;
};


void print_point(const Point* sel){
    cout << "x: "<< sel->x << "  y: " << sel->y << endl;
}


int main(){

    Point a_Point;
    a_Point.x = 1.9;
    a_Point.y = 2.0;
    print_point(&a_Point);

}