#include <stdio.h>
/*
   
WAP to sort the elements of an array in descending order.
    
*/
void main() {
    int i,j,key;
    int array[6] = {5,9,2,7,4,10};

    for(i=1;i<6;i++) { 
        key= array[i];
        j = i-1;
        while(j>=0 && array[j] < key) {
            array[j+1] = array[j];
            j--;
        } 
        
        array[j+1] = key;
    }

    for(i=0;i<6;i++) {
        printf("%d ",array[i]);
    }

    printf("\n");
}