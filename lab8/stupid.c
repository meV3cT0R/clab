#include <stdio.h>
/*
Write a program to input a line of text store it in a file and then read from file and display its contents.
*/
void main() {
    char text[100];
    FILE *fptr = fopen("stupid.txt","w");
    if(fptr !=NULL) {
        scanf("%s",&text);
        fputs(text,fptr);
        fclose(fptr);
    }else {
        printf("Unable to open file");
    }

    fptr = fopen("stupid.txt","r");
    if(fptr !=NULL) {
        while(!feof(fptr)) {
            fgets(text,100,fptr);
        }
    }
}