#include <stdio.h>
/*
WAP to input a number and count the number of digits.
*/
void main() {
    int ui,c=0;

    printf("Enter a number:");
    scanf("%d",&ui);

    while(ui!=0) {
        c+=1;
        ui /=10;
    }

    printf("Number of digits: %d \n",c);
}