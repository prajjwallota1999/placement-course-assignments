#include<stdio.h>
/*
int main(){

    int x=2,y=3,z=4,max;
    
    max=(x>y)?((x>z)?x:z):((y>z)?y:z);

    printf("maximum of all 3 is: %d",max);
    return 0;
}
*/
int main(){

    int x=24,y=3,z=15,a=5,max;
    
    max=(x>y)?((x>z)?((x>a)?x:a):((z>a)?z:a)):((y>z)?((y>a)?y:a):((z>a)?z:a));

    printf("maximum of all 3 is: %d",max);
    return 0;
}