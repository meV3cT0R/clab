#include <stdio.h>

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