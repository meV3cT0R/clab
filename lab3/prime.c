#include <stdio.h>

void main() {
    int i,j,k;

    for(i=100;i<=200;i++) {
        k=0;
        for(j=2;j<i/2;j++) {
            if(i%j==0){
                k=1;
                break;
            } 
        }
        if(k!=1) printf("%d ",i);
    }
    printf("\n");
}