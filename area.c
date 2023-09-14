#include <stdio.h>

int main () {

    int radius;
    float area, parameter;
        radius = 6;
        parameter = 2*3.14*radius;

    printf ("Parameter of the circle = %f inches\n", parameter);
    area = 3.14*radius*radius;
    printf ("Area of the circle = %f square inches\n", area);

    return 0;
}
