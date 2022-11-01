//5. Write a program to input a three digit number and display the sum of the digits.

#include<stdio.h>
/*
int main(){

    int x,y,z,a,b,c;

    printf("enter a 3 digit number: ");
    scanf("%d",&x);
    
    a=x%10;
    y=x/10;
    b=y%10;
    z=y/10;

    c=a+b+z;

    printf("sum of digits of 3digit number is %d",c);

    return 0;
}
*/
//better approach

int main(){

    int x,sum=0;

    printf("enter a 3 digit number: ");
    scanf("%d",&x);
    
    sum=x%10;
    x=x/10;
    sum=(x%10)+sum;
    x=x/10;
    sum=x+sum;


    printf("sum of digits of 3 digit number is %d",sum);

    return 0;
}
