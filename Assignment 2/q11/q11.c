/*11. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR
and convert it into USD.*/

#include<stdio.h>

int main(){

    float x;

    printf("enter a amount in rupees: \n");
    scanf("%f",&x);

    x=x/76.23;

    printf("value of entered amount in US dollar is  %f",x);
   
    return 0;
}
1