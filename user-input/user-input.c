#include <stdio.h>
#include <stdlib.h> 
#include <math.h> //must include to call math functions

int main() {

    // double weight;
    // printf("Enter your weight: ");
    // scanf("%lf\n", &weight); 
    // printf("You weight %f pounds! You are fat!\n", weight);

    // char grade;
    // printf("Enter your grade: ");
    // scanf("%c\n", &grade); 
    // printf("You received a(n) %c in programming\n", grade);

    char name[20];
    printf("Enter your name: ");
    fgets(name, 20, stdin); 
    printf("Your name is %s\n", name);

    return 0;
}