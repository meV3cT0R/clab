#include <stdio.h>

void main() {
    FILE *fptr = fopen("number.txt","r");
    FILE *even = fopen("even.txt","w");
    FILE *odd = fopen("odd.txt","w");

    int number;
    if(fptr == NULL) {
        printf("Unable to open file");
    }else {
        while(!feof(fptr)) {
            fscanf(fptr,"%d",&number);
            printf("%d\n",number);
            if(number %2 ==0) {
                fprintf(even,"%d ",number);
            }else {
                fprintf(odd,"%d ",number);
            }
            
        }
        fclose(fptr);
        fclose(even);
        fclose(odd);
    }
}