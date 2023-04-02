#include <stdio.h>
#include <string.h>

struct person {
    char name[30];
    char address[30];
    int salary;
};

void main() {
    struct person p;
    long i,salary,max;
    char name[30];
    char address[30];
    strcpy(p.name,"Ram");
    strcpy(p.address,"Somewhere");
    p.salary = 2000;

    printf("Person Details\n\tName: %s\n\tAddress: %s\n\tSalary: %d\n",p.name, p.address, p.salary);
}