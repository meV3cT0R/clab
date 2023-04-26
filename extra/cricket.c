#include <stdio.h>
#include <string.h>

struct employee
{
    char name[40];
    int age;
    int salary;
};

void main()
{
    struct employee employees[3];
    struct employee temp;
    for (int i = 0; i < 3; i++)
    {
        printf("Enter Name Age Salary:");
        scanf("%s%d%d", &employees[i].name, &employees[i].age, &employees[i].salary);
    }
    int min;
    for (int i = 0; i < 3; i++)
    {
        min = i;
        for (int j = i; j < 3; j++)
        {
            if (strcmp(employees[j].name, employees[min].name) < 0)
            {
                min = j;
            }
        }
        temp = employees[min];
        employees[min] = employees[i];
        employees[i] = temp;
        printf("%s\n", employees[i].name);
    }

    printf("\n\n");
    for(int i=0;i<3;i++) {
        printf("%s\n",employees[i].name);
    }
}

