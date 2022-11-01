//4. Write a program to swap values of two int variables without using a third variable

#include<stdio.h>
/*
int main(){

    int x=-6,y=4;

    y=x-y;
    x=x-y;
    y=x+y;

    printf("after swapping x=%d and y=%d",x,y);

    return 0;
}
*/
//taking values from user

int main(){

    int x,y;

    printf("enter the 2 values: \n");
    scanf("%d %d",&x,&y);

    y=x-y;
    x=x-y;
    y=x+y;

    printf("after swaping 1st value=%d and 2nd value=%d",x,y);

    return 0;
}
