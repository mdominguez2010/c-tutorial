#include <stdio.h>
#include <stdlib.h> 
#include <math.h> //must include to call math functions

int main() {

    float num = 8.9;
    printf("%f\n", num);
    printf("%f\n", 5.0 * 4.5);
    printf("%d\n", 5 + 4);
    printf("%d\n", 5 / 4);

    printf("%f\n", pow(2, 3));
    printf("%f\n", sqrt(144));
    printf("%f, %f\n", ceil(36.35481), floor(36.35481));

    return 0;
}