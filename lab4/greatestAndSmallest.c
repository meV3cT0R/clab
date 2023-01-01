#include <stdio.h>
/*
WAP to input numbers in an array and find the greatest and smallest number
*/

void main() {
    int i,min,max;
    int array[6] = {5,9,2,7,4,10};

    min = max = array[0];

    for(i =1;i<6;i++) {
        if(array[i] < min)
            min = array[i];
        if(array[i] > max)
            max = array[i];
    }

    printf("Max : %d \n",max);
    printf("Min : %d \n",min);

}