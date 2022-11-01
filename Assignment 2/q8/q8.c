//8. Write a program to print size of an int, a float, a char and a double type variable

//printing directly
#include<stdio.h>
int main(){


    printf("size of integer variable is %d \n",sizeof(int));
    printf("size of floating variable is %d \n",sizeof(float));
    printf("size of character variable is %d \n",sizeof(char));
    printf("size of double variable is %d \n",sizeof(double));

    return 0;
}
/*
include<stdio.h>

int main(){

    int a,w;
    float b,x;
    char c,y;
    double d,z;
    
    w=sizeof(a);
    x=sizeof(b);
    y=sizeof(c);
    z=sizeof(d);
    
    printf("size of integer variable is %d \n",w);
    printf("size of floating variable is %d \n",x);
    printf("size of character variable is %d \n",y);
    printf("size of double variable is %d \n",z);

    return 0;
}
*/