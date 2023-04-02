#include <stdio.h>

struct student {
    char name[30];
    int age;
    struct address {
        char country[30];
        char city[30];
        char zip[6];
    }addrs;
};

void main() {
    struct student std = {"Something",18,{"Somewhere","inside-somewhere","000000"}};
    printf("%-10s%-5s%-10s\n","name","age","country");
    printf("%-10s%-5d%-10s\n",std.name,std.age,std.addrs.country);
}