//1. Write a program to print unit digit of a given number


#include<stdio.h>
/*
int main(){

    int x=1345,unit;

    unit=x%10;

    printf("unit digit of %d is: %d",x,unit);

    return 0;
}*/

//better aproach no need to increase work of compiler


int main(){

    int x=1345;


    printf("unit digit of %d is: %d",x,x%10);

    return 0;
}