#include <stdio.h>

/*
WAP to display all numbers 100 to 200 that end with 0 or 1.
*/
void main() {
    int i;

    for(i=100;i<=200;i++) {
        if(i%10==0 || i%10 == 1) {
            printf("%d ",i);
        }
    }
    printf("\n");
}