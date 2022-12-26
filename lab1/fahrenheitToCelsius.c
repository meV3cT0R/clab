#include <stdio.h>

void main() {
    float f,c;
    printf("Enter temperature in Fahrenheit :");
    scanf("%f",&f);
    c = (f-32.0)*(5.0/9.0);
    printf("%.2f f = %.2f c\n",f,c);
}