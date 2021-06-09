#include <stdio.h>
#include <stdlib.h> 
#include <math.h> //must include to call math functions

double cube(double num) {
    double result = num * num * num;
    return result;
}

double square(double num) {
    return num * num;
}

int main(){
    printf("Number cubed: %f\n", cube(1.0));
    printf("Number cubed: %f\n", cube(2.0));
    printf("Number cubed: %f\n", cube(3.0));
    printf("Number squared: %f\n", square(4.0));
    printf("Number squared: %f\n", square(5.0));
    printf("Number squared: %f\n", square(6.0));
    return 0;
}