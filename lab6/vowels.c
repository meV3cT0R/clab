#include <stdio.h>
#include <string.h>

void main() {
    char w[100];
    int i,j,isVowel,count=0;
    char vowel[5] = {'a','e','i','o','u'};

    scanf("%s",&w);
    for(i=0;w[i]!='\0';i++) {

        isVowel = 0;
        for(j=0;j<5;j++) {
            if(w[i] == vowel[j]) {
                isVowel = 1;
                break;
            }
        }
        if(isVowel == 1) count++;
    }

    printf("No. of Vowels : %d\n",count);
}