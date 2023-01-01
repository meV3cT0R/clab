#include <stdio.h>

/*
1. Create a function void check(int n) that checks whether given number is odd or even.
*/
void check(int);


/*
2. Create a function int small(int a,int b) that finds the smaller number between two numbers.
*/
int small(int a,int b) {
    return a>b?b:a;
}

/*
3. Create a function that takes one integer argument and finds the sum of its digits.
*/
int sumOfDigits(int a) {
    int s=0;
    while(a!=0) {
        s+= a%10;
        a=a/10;
    }
    return s;
}

/*
WAP to find the factorial of a number using recursive function.
*/

int fact(int a) {
    if(a<=1) return 1;
    return a*fact(a-1);
}

/*
WAP to display the first 10 numbers in a fibonacci series using recursive function.
*/

int fibo(int a) {
    if(a<1) return 0;
    if(a==1) return 1;
    return fibo(a-1) + fibo(a-2);
}
void main() {
    // 1
    check(5); // Odd


    // 2
    printf("Smaller number between 5 and 19 is %d\n",small(5,19));


    //3
    printf("Sum of 456 : %d\n",sumOfDigits(456));

    //4
    printf("factorial of 5: %d\n",fact(5));

    //5 
    int i;
    printf("fibo \n");
    for(i=1;i<=10;i++) {
        printf("%d ",fibo(i));
    }
    printf("\n");
}

void check(int a) {
    if(a%2==0) printf("Even");
    else printf("Odd");
    printf("\n");
}