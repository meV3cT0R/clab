#include <stdio.h>
#include <math.h>

void main() {
    float radius,area;
    printf("Enter radius of a circle: ");
    scanf("%f",&radius);
    area = M_PI * pow(radius,2);
    printf("Area of a circle : %.2f\n",area);
}