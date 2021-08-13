#include <stdio.h>
#include <stdlib.h> 
// compares one value to several specific values

int main()
{
    char grade = 'D';

    switch(grade){
        case 'A':
            printf("You did great!\n");
            break;
        case 'B':
            printf("You did ok\n");
            break;
        case 'C':
            printf("You suck\n");
            break;
        case 'D':
            printf("You definitely suck!\n");
            break;
        case 'F':
            printf("You failed!\n");
            break;
        default:
            printf("Invalid Grade\n");
    }

    return 0;
}