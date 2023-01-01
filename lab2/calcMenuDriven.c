#include <stdio.h>
/*
Create a menu driven program to add/subtract/multiply/divide two numbers using switch.
*/
void main() {
    int a,b,c,i;
    printf("***************************\n");
    printf("*       Calculator        *\n");
    printf("*1. ADD                   *\n");
    printf("*2. SUB                   *\n");
    printf("*3. MUL                   *\n");
    printf("*4. DIV                   *\n");
    printf("***************************\n");

    printf("Enter two numbers to perform operation on:");
    scanf("%d%d",&a,&b);

    printf("choose a option:");
    scanf("%d",&i);


    switch(i) {
        case 1:
            c = a +b;
            break;
        case 2:
            c = a-b;
            break;
        case 3:
            c = a*b;
            break;
        case 4:
            if(b!=0) c= a/b; else {c = 0; printf("can't divide by 0\n");}
        default:
            printf("\n?\n");
    }
    printf("Answer : %d\n",c);
}