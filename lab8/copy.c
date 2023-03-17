#include <stdio.h>

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