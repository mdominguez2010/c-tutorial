#include <stdio.h>
#include <stdlib.h> 

int main(){

    int age = 30;
    int * pAge = &age;

    double gpa = 4.5;
    double * pGpa = &gpa;
    
    char grade = 'P';
    char * pGrade = &grade;
    

    printf("age's memory address: %p\n", pAge);

    return 0;
}