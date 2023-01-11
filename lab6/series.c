#include <stdio.h>
#include <string.h>

void main() {
    char country[] = "Nepal";
    /*
        N
        NE
        NEP
        NEPA
        NEPAL
    */
    for(int i=0;i<strlen(country);i++) {
        for(int j=0;j<=i;j++) {
            printf("%c",country[j]);
        }
        printf("\n");
    }

    /*
          N
         NEP
        NEPAL
    */
   int s = 3;
   for(int i=0;i<strlen(country);i+=2) {
    for(int j=0;j<s;j++) {
        printf(" ");
    }
    for(int j=0;j<=i;j++) {
        printf("%c",country[j]);
    }
    printf("\n");
    s--;
   }

   char capital[] = "KATHMANDU";
   s=0;
   for(int i=0;i<strlen(capital);i+=2) {
    for(int j=0;j<s;j++) {
        printf(" ");
    }

    for(int j=0;j<=strlen(capital)-i-1;j++) {
        printf("%c",capital[j]);
    }

    printf("\n");
    s++;
   }
}