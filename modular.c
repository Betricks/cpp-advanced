#include <stdio.h>

#include "modular.h"


Point Point_value(double x, double y)
{
    Point initialize = {1.0, 23.1};
    return initialize;
}


void Print_Point(Point *self)
{
    printf("(%f, %f)", self->x, self->y);
}