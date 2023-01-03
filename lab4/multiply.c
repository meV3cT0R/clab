#include <stdio.h>

void main() {
    int a[2][2] = {
        {1,2},
        {2,3}
    };

    int b[2][2] = {
        {1,2},
        {3,4}
    };

    int c[2][2],i,j,k,sum;


    /*
        00 01    00 01
        10 11    10 11

        a  b  a  b    a  b  a  b
        00*00+01*10   00*01+01*11
        10*00+11*10   10*01+10*11


    */

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            sum =0;
            for(k=0;k<2;k++) {
                sum+= a[i][k] * b[k][j]; 
            }
            c[i][j]=sum;
        }
    }

    for(i=0;i<2;i++) {
        for(j=0;j<2;j++) {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }
}