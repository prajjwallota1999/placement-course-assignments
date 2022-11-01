//2. Write a program to print a given number without its last digit.


#include<stdio.h>
/*
int main(){

    int x=1345,y;

    y=x/10;

    printf("no. without last digit of %d is: %d",x,y);

    return 0;
}
*/

//better aproach

int main(){

    int x=1345;

   

    printf("no. without last digit of %d is: %d",x,x/10);

    return 0;
}
