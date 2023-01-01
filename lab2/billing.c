#include <stdio.h>


/*
WAP to input electricity units and find the billing amount.
    for first 20 units - Rs 0/unit
    for next 100 units - Rs 12/unit
    for next 100 units - Rs 11/unit
    for above 220 units - Rs 10/unit
*/

void main() {
    int unit,price;
    printf("Enter electricity unit : " );
    scanf("%d",&unit);

    if(unit <= 20) price =0;
    if(unit>20 && unit <=120) price += (unit-20)*12;

    if(unit>120 && unit <= 220) price +=(unit-120)*11;
    if(unit>220) price += (unit-220)*10;

    printf("Billing Amount : %d \n",price);
}