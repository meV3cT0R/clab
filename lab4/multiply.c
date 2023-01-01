#include <stdio.h>

void main() {
    int a[2][3] = {
        {1,2,3},
        {1,2,3}
    };

    int b[2][3] = {
        {2,3,4},
        {2,3,4},
    };


    int c[2][3],i,j;
    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            c[i][j] = a[i][j] * b[i][j];
        }
    }  

    for(i=0;i<2;i++) {
        for(j=0;j<3;j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    } 
}