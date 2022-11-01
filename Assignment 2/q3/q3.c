//3. Write a program to swap values of two int variables



#include<stdio.h>
/*
int main(){

    int x=5,y=4,z;

    z=x;
    x=y;
    y=z;

    printf("after swapping x=%d and y=%d",x,y);

    return 0;
}
*/
//taking values from user

int main(){

    int x,y,z;

    printf("enter the 2 values: \n");
    scanf("%d %d",&x,&y);

    z=x;
    x=y;
    y=z;

    printf("after swaping 1st value=%d and 2nd value=%d",x,y);

    return 0;
}
