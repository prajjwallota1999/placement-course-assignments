/*10. Write a program to input a number from the user and also input a digit. Append a
digit in the number and print the resulting number. (Example - number=234 and
digit=9 then the resulting number is 2349)*/

#include<stdio.h>

int main(){

    int x,y;


    printf("enter a number: \n");
    scanf("%d",&x);
    printf("enter a digit : \n");
    scanf("%d",&y);
    
    if (y>0)
    {
        x=x*10;
        x=x+y;/* code */
    }
    else{
    x=x*10;
    x=x-y;
    }
    printf("value after apending the digit y after x is %d",x);

    return 0;
}
