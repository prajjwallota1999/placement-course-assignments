// wap a program to set 3rd bit from RHS
/*
#include<stdio.h>

int main(){
    
    int x;
    printf("enter a num \n");
    scanf("%d",&x);

    // x=x|4;
    //printf("final num is %d ",x);

    //wap a program to check if last 2 bit from RHS is set or not
    (x&3)==3?printf("yes"):printf("no");
    // isko or operator se mt krna becz tumhe nhi pta kite bit ka number h

    return 0;
}
*/
//left shift........x*(2^n)
//question ye bnega....wap to multiply the given no. by 16 without multiplication operator
//right shift........x/(2^n)
//question ye bnega....wap to divide the given no. by 32 without division operator
#include<stdio.h>

int main()
{
    
    int x = 44,y;
    
    //x = (x<<4);
    y= x>>5;
    

    //printf("%d\n",x);
    printf("%d \n",y);
    return 0;

}

//bit^0=bit=>no change
//bit^1=bit'=>complement

//find one's complement of given num. without using ~
