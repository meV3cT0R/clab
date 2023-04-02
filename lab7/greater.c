#include <stdio.h>

void main() {
    int a,b;
    int *pa=&a,*pb=&b;
    scanf("%d %d",pa,pb);
    if(*pa>*pb) printf("%d is greater than %d\n",*pa,*pb);
    else printf("%d is greater than %d\n",*pb,*pa);
}