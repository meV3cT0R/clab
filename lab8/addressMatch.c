#include <stdio.h>
#include <string.h>

struct person {
    char name[40]; 
    char address[40];
    double salary;
};
void main() {
    FILE *fptr = fopen("people.data","r");

    if(fptr !=NULL) {

        char reqd[40];
        printf("Search: ");
        scanf("%s",&reqd);

        char name[40],address[40];
        long salary;

        while(!feof(fptr)) {
            fscanf(fptr,"%s%s%ld",name,address,&salary);
            if(strcmp(reqd,address)==0) {
                printf("%s %s %ld\n",name,address,salary);
            }
        };

        fclose(fptr);
    }else {
        printf("File not Found");
    }
    printf("done!!\n");
}