#include <stdio.h>


void main() {
    int i;

    for(i=100;i<=200;i++) {
        if(i%10==0 || i%10 == 1) {
            printf("%d \n",i);
        }
    }
}