#include <stdio.h>
/*
WAP to input temperature in fahrenheit and convert into celsius.
   [c=5/9(f-32) ]
*/
void main() {
    float f,c;
    printf("Enter temperature in Fahrenheit :");
    scanf("%f",&f);
    c = (f-32.0)*(5.0/9.0);
    printf("%.2f f = %.2f c\n",f,c);
}