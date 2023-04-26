#include <stdio.h>

void main() {
    int s = 0; 
    for(int i=0;i<5;i++) {
        for(int j=0;j<s;j++) {
            printf(" ");
        }
        for(int j=i;j<5;j++) {
            printf("%d",j%2==0?1:0);
        }
        s++;
        printf("\n");
    }
}