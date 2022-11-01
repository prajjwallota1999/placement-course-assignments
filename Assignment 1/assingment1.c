#include<stdio.h>

/*
int main(){

    printf("hello students");
    
     0;
}


int main(){

    printf("hello \nstudents");
    
     0;
}


int main(){

    printf("\"iNeuron\"");
    
     0;
}


int main()
{
    float R,A;
    //float pi=3.141;  dont use this,u r just increasing the work for compiler use it directly but it can be used when it is used in lot of spaces but by using const world priorto float

    printf("type the radius of circle: ");
    scanf("%f",&R);

    A=3.14 * R * R;
    
    printf("Area of circle is %f having the radius %f ",A,R);
    
    getch();   //this is used for stoping the screen when we run it directly through .exe file,but without that we don't need to use it in modern IDE's as they already inbuilt with stoping facilty...getch is short form of get character as it waits at the end to put characteer input before getting to return 0;.....after we enter charcter input it quits the screen when run directly through .exe.....you can relate it to real world ex.  like a delivery boy is waiting to see if you are available or  not after it get confermation either you are there or not he  leaves imdeaitely
    return 0;
}


//WAP to calculate the length of String using printf function


int main(){

    char name[40];

    printf("Enter your name: ");
    scanf("%s",&name);
    
    printf("\"hello %s\"",name);
    
     0;
}


int main(){

    printf("%%d");
    
    
     0;
}



int main(){

    printf("\\n");
    
    
     0;
}


int main(){

    
    printf("\\\\");
    
    
     0;
}


*/
int main(){

    int d, m, year;
    printf("Enter date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &d,&m,&year);

    //this is the property of scanf we can use any charcter(only) between format specifier in scanf but when we provide the input we have to insert that character between those values
    
    printf("Day-%d,Month-%d,Year-%d ",d,m,year);

    
    return 0;
}
/*

int main(){

     int h,m;
    printf("Enter time (HH:MM) :");
    scanf("%d:%d", &h,&m);
    
    printf("%d Hour and %d minute",h,m);

    
     0;
}




int main(){

    int x=printf("sabby");
    printf("%d",x);
   

    
     0;
}

*/

