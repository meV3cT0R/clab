#include <stdio.h>
/*
WAP to input 3 numbers and find the middle number.
*/
void main() {
    int a,b,c,m;
    printf("Enter  three numbers :" );
    scanf("%d %d %d",&a,&b,&c);

    m = a>b?(a>c?(c>b?c:b):a):(b>c?(c>a?c:a):b);

    printf("%d is the middle number \n",m);
}