#include <stdio.h>

void main() {
    char i;
    printf("Enter a character:");
    scanf("%c",&i);
    switch(i){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf("vowel");
            break;
        default:
            printf("consonant");
    }
    printf("\n");
}