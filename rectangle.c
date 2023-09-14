#include <stdio.h>

/*height and weight of a rectangle in inches*/

int width;
int height;
int area;
int perimeter;

int main () {

    height = 7;
    width = 5;

    perimeter = 2*(height=width);
    printf ("perimeter of the rectangle = %d inches\n", perimeter);
    area = height*width;
    printf ("area of the rectangle = %d square inches\n", area);


    return 0;


}
