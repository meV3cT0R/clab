#include <stdio.h>
/*
WAP to copy the content of file "tu.txt" into "university.txt".
*/
void main() {
    FILE *fptr = fopen("tu.txt","r");
    FILE *fptrW = fopen("university.txt","w");
    char content[100];
    if(fptr == NULL || fptrW == NULL) {
        printf("Unable to open file");
    }else {
        while(!feof(fptr)) {
            fgets(content,100,fptr);
        }
        fclose(fptr);
        fprintf(fptrW, content);
        fclose(fptrW);
    }


}