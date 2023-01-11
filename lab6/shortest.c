#include <stdio.h>
#include <string.h>

void main() {
    char a[100],b[100],c[100];
    int x,y,z;

    scanf("%s %s %s",&a,&b,&c);
    x = strlen(a);
    y = strlen(b);
    z = strlen(c);

    if(x<y && x <z) puts(a);
    else if(y<x && y<z) puts(b);
    else puts(c);
}