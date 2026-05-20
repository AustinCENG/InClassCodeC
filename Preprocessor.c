// C Program to illustrate the difference in different
// compiler execution
#include <stdio.h>  // header files 
#define VERSION 1.0
#define PI 3.1415926  // Macros allow you to create symbolic constants or inline function-like replacements
#define Area(a,b) a*b // Macros
#define DEBUG

int main()
{
    #ifdef DEBUG
        printf("Debug: Program started successfully.\n");
    #else
        printf("Not debugging code.\n");    
    #endif
    return 0;
}