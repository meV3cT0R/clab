#include <stdio.h>
#include <math.h>
/*
WAP to input a number and find its square root.
*/
void main() {
    float i,sr;
    printf("Enter a number to find square root:");
    scanf("%f",&i);
    sr = sqrt(i);
    printf("Square root of %.2f is %.2f\n",i,sr);
}