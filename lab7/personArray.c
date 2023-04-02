#include <stdio.h>
#include <string.h>

struct person {
    char name[30];
    char address[30];
    int salary;
};

void main() {
    struct person p;
    int i,max=0,maxIndex;
    struct person persons[3];

    for(i=0;i<3;i++) {
        scanf("%s%s%d",&persons[i].name,&persons[i].address,&persons[i].salary);
    } 
    
    for(i=0;i<3;i++) {
        if(persons[i].salary > max) {
            max = persons[i].salary;
            maxIndex = i;
        }
    }

    printf("\nHighest Paid Person Details\n\tName: %s\n\tAddress: %s\n\tSalary: %d\n",persons[maxIndex].name, persons[maxIndex].address, persons[maxIndex].salary);
}