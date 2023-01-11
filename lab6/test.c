#include <stdio.h>
#include <string.h>

void main() {
    // char meow[5] = "meow";
    // char* hello = "hello";
    // printf("%d\n",strcmp(hello,meow));

    char* meow = "meow";
    int i;
    for(i=0;*(meow)!='\0';meow++) {
        printf("%c ",*meow);
    }
}