#include <stdio.h>
#include <math.h>

/*
WAP to find volume of a cylinder.
*/
void main() {
    float radius,height,volume;
    printf("Enter radius of a base (in cm) :");
    scanf("%f",&radius);
    printf("Enter height of a cylinder (in cm):");
    scanf("%f",&height);
    volume = M_PI * pow(radius,2) * height;

    printf("Volume of a Cylinder : %.2f cubic cm\n",volume);
}