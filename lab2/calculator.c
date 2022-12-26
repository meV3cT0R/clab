#include <stdio.h>

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
            r = 0;
            printf("kawai koto\n");
    }

    r!=0?printf("Answer : %.2f\n",r):printf("");
}