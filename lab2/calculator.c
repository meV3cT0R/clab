#include <stdio.h>
/*
WAP to input two numbers and then input the operator(+,-,*,/) and find the result using switch.
*/
void main() {
    float a,b,r;
    char c;
    printf("Enter two numbers:");
    scanf("%f%c%f",&a,&c,&b);

    switch(c) {
        case '+':
            r = a+b;
            break;
        case '-':
            r = a- b;
            break;
        case '*':
            r = a*b;
            break;
        case '/':
            r= a/b;
            break;
        default:
            printf("kawai koto\n");
    }

    printf("Answer : %.2f\n",r);
}