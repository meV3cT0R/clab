#include <stdio.h>
/*
WAP to input 3 numbers and find their average.
*/
void main() {
    float a,b,c,result;
    printf("Enter three numbers :" );
    scanf("%f %f %f",&a,&b,&c);

    result = (a+b+c)/2.0;
    printf("Average : %.2f\n",result);
}