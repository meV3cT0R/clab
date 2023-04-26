#include <stdio.h>
/*
Create a menu driven program to store and display records (name, address, salary of a person)
   1. Add Record
   2. Display Record
   Enter your choice: 
*/
void main() {
    int userInput,running =1;
    char name[40],address[40];
    long salary;
    FILE *fptr;
    printf("********************\n");
    printf("*     WELCOME      *\n");
    printf("********************\n\n");

        while(running==1) {
            printf("Options:\n1. Add a Record\n2. Display a Record\n3. exit\nchoice:");
            scanf("%d",&userInput);
            switch(userInput) {
                case 1:
                    fptr= fopen("record.data","a");
                    printf("\nEnter a record: ");
                    scanf("%s%s%ld",name,address,&salary);
                    if(fptr !=NULL) {
                        fprintf(fptr,"%s %s %ld\n",name,address,salary);
                    }else {
                        printf("File Not Found!!");
                    }

                    break;
                case 2:
                    fptr = fopen("record.data","r");
                    printf("%10s%10s%10s\n","Name","Address","Salary");
                    if(fptr != NULL) {
                        while(!feof(fptr)) {
                            fscanf(fptr,"%s%s%ld",name,address,&salary);
                            printf("%10s%10s%10ld\n",name,address,salary);
                        }
                    }else {
                        printf("File Not Found!1");
                    }
                    
                    break;
                case 3:
                    running =0;
                    break;
            }
        }
}