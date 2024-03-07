#include <stdio.h>
#include <stdlib.h>


struct Point{
    double x;
    double y;
};



int main(void){
    struct Point aPoint;
    aPoint.x = 10.0;
    aPoint.y = 20.0;

    printf("struct Point: x = %f, y = %f\n", aPoint.x, aPoint.y);
    exit(0);
}