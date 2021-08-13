#include <stdio.h>
#include <stdlib.h> 
#include <string.h>
// data structure where u can store several data types

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main(){
    struct Student student1;
    student1.age = 34;
    student1.gpa = 3.9;
    strcpy(student1.name, "Marcos");
    strcpy(student1.major, "Statistics");

    struct Student student2;
    student2.age = 34;
    student2.gpa = 4.0;
    strcpy(student2.name, "Ires");
    strcpy(student2.major, "Programming");

    printf("%s\n",student1.name);
    printf("%s\n",student1.major);
    printf("%f\n", student1.gpa);
    printf("%d\n", student1.age);

    printf("%s\n",student2.name);
    printf("%s\n",student2.major);
    printf("%f\n", student2.gpa);
    printf("%d\n", student2.age);

    return 0;
}