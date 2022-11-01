//9. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)

#include<stdio.h>

int main(){

    int x;

    printf("enter a number: ");
    scanf("%d",&x);
    
    x=x/10;
    x=x*10;

    //or take y variable
    //y=x%10
    //x=x-y

    printf("last digit of entered number as o is: %d",x);

    return 0;
}

