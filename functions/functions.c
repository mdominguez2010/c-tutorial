#include <stdio.h>
#include <stdlib.h> 
#include <math.h> //must include to call math functions

void sayHi(char name[], int age) {
    printf("Hello %s! You are %d years old\n", name, age);
}

int main()
{
    sayHi("boggerballs", 34);
    sayHi("Jenny", 14);
    sayHi("cagon", 34);
    sayHi("Isabela", 5);
    sayHi("Natalia", 3);
    return 0;
}