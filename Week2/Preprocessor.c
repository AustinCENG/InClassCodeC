// C Program to illustrate the difference in different
// compiler execution
#include <stdio.h>  // header files 

#define VERSION 1.0
#define PI 3.1415926  // Macros allow you to create symbolic constants or inline function-like replacements
#define AREA(w,l) (w)*(l) // Macros
#define CICLEAREA(r) PI*(r)*(r) // Macros

//#define DEBUG

int main()
{
    int i, j, k, result;
    float r = 2;
    float area1, area2;
    // calculate the area of a circle:
    area1 = CICLEAREA(r);  // equivalent to area1 = PI*(r)*(r);
    area2 = AREA(3,4);    //  equivalent to area2 = (3)*(4);
    printf("Case 1: area1 is %f\n", area1);
    printf("Case 1: area2 is %f\n\n", area2);
    // Example 2 calculate the area of a circle:
    area1 = CICLEAREA(r+1);  // equivalent to area1 = PI*(r+1)*(r+1);
    area2 = AREA(3+1,4+1);    //  equivalent to area2 = (3+1)*(4+1);
    printf("Case 2: area1 is %f\n", area1);  // expect 9*PI ~28
    printf("Case 2: area2 is %f\n", area2);  // expect 20



/*
    i = 2; 
    j = 3;
    k = i+j;
    result = k*100;

    #ifdef DEBUG
        printf("Debug code: k is %d\n", k);
    #endif

    printf("Final Result: result is %d", result); */

    return 0;
}