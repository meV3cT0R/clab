#include <stdio.h>
#include <string.h>

char* strrev(char* word) {
    static char newWord[100];
    for(int i=0;i<strlen(word);i++) {
        newWord[i]=*(word+strlen(word)-1-i);
    }
    return newWord;
}

void main() {
    char a[100];
    scanf("%s",&a);
    if(strcmp(a,strrev(a))==0) puts("palindrome");
    else puts("not palindrome");
}

