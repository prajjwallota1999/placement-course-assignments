#include<stdio.h>

//1. Write a program to print Hello Students on the screen.

/*
int main(){

    printf("hello students");
    
     0;
}

//2. Write a program to print Hello in the first line and Students in the second line

int main(){

    printf("hello \nstudents");
    
     0;
}

//. 3. Write program to print "iNeuron" on the screen. (Remember to print in double quotes) 

int main(){

    printf("\"iNeuron\"");
    
     0;
}

// 4. WAP to find the area of the circle. Take radius of circle from user as input and print the result in below given format.


int main()
{
    float R,A;
    //float pi=3.141;  dont use this,u r just increasing the work for compiler use it directly but it can be used when it is used in lot of spaces but by using const world prior to float

    printf("type the radius of circle: ");
    scanf("%f",&R);

    A=3.14 * R * R;
    
    printf("Area of circle is %f having the radius %f ",A,R);
    
    getch();   //this is used for stoping the screen when we run it directly through .exe file,but without that we don't need to use it in modern IDE's as they already inbuilt with stoping facilty...getch is short form of get character as it waits at the end to put characteer input before getting to return 0;.....after we enter charcter input it quits the screen when run directly through .exe.....you can relate it to real world ex.  like a delivery boy is waiting to see if you are available or  not after it get confermation either you are there or not he  leaves imdeaitely
    return 0;
}


//6. WAP to print the name of the user in double quotes.


int main(){

    char name[40];

    printf("Enter your name: ");
    scanf("%s",&name);
    
    printf("\"hello %s\"",name);
    
     0;
}

//7. WAP to print "%d" on the screen.


int main(){

    printf("%%d");
    
    
     0;
}


//8. WAP to print "\n" on the screen

int main(){

    printf("\\n");
    
    
     0;
}

//9. WAP to print "\\" on the screen

int main(){

    
    printf("\\\\");
    
    
     0;
}

//10. WAP to take date as an input in below given format and convert the date format and display the result as given below.
//User Input date format – “DD/MM/YYYY” (27/11/2022)



int main(){

    int d, m, year;
    printf("Enter date (DD/MM/YYYY): ");
    scanf("%d/%d/%d", &d,&m,&year);

    //this is the property of scanf we can use any charcter(only) between format specifier in scanf but when we provide the input we have to insert that character between those values
    
    printf("Day-%d,Month-%d,Year-%d ",d,m,year);

    
    return 0;
}

//11. WAP to take time as an input in below given format and convert the time format and display the result as given below.
//User Input date format – “HH:MM”



int main(){

     int h,m;
    printf("Enter time (HH:MM) :");
    scanf("%d:%d", &h,&m);
    
    printf("%d Hour and %d minute",h,m);

    
     0;
}


//q12/q5

int main(){

    int x=printf("sabby");
    printf("%d",x);
   

    
     0;
}


*/
