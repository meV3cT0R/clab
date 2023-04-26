#include <stdio.h>
#include <string.h>

/*
 A data file contains name,address,salary of some person. WAP to increase salary of all persons by 15%.
*/
struct person {
    char name[40]; 
    char address[40];
    double salary;
};
void main() {
    FILE *fptr = fopen("people.data","r");
    FILE *nfptr = fopen("newSalary.data","w");
    if(fptr !=NULL || nfptr !=NULL) {
        char name[40],address[40];
        long salary;

        while(!feof(fptr)) {
            fscanf(fptr,"%s%s%ld",name,address,&salary);
            salary +=  (salary*15/100);
            fprintf(nfptr,"%s %s %ld\n",name,address,salary);
        };

        fclose(fptr);
        fclose(nfptr);

    }else {
        printf("File not Found");
    }
    printf("done!!\n");
}