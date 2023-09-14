#include <stdio.h>

int main () {

    int int1;
    int int2;
    int sum;

    printf ("First integer: ");
    scanf ("%d", &int1);
    printf ("second integer: ");
    scanf ("%d", &int2);

    sum = int1 + int2;
    printf ("\nSum of the above two integer = %d\n", sum);

    return 0;

}
