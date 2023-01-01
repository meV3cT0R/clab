#include <stdio.h>
/*
 WAP to input numbers in an array of size 'N' and find the sum of even and odd numbers separately.
*/
void main() {
    int es,os,i;

    int array[6] = {5,9,2,7,4,10};

    for(i=0;i<6;i++) {
        if(array[i]%2==0)
            es+=array[i];
        else
            os+=array[i];
    }

    printf("Even Sum : %d\n",es);
    printf("Odd Sum : %d\n",os);
}