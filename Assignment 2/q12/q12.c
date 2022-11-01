//12. Write a program to take a three digit number from the user and rotate its digits by one position towards the right.


#include<stdio.h>

int main(){

    int x;

    printf("enter a 3 digit number: ");
    scanf("%d",&x);
    
    x=((x%10)*100)+(x/10);

    //to rotate left x=((x%100)*10)+(x/100);
    printf("rotating given 3 digit num. by one position towards right is %d",x);

    return 0;
}

