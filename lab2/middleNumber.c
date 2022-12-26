#include <stdio.h>

void main() {
    int a,b,c,m;
    printf("Enter  three numbers :" );
    scanf("%d %d %d",&a,&b,&c);

    m = a>b?(a>c?(c>b?c:b):a):(b>c?(c>a?c:a):b);

    printf("%d is the middle number \n",m);
}