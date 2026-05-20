
/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <locale.h>

int main()
{
    int k= 123;
    double f=3.1415926;
    printf("%d\n", k);
    printf("%6d\n", k);
    printf("%-6d\n", k);
    printf("%+6d\n\n", k);
    printf("The following is for print double:\n");
    
    printf("%+6.1f\n", f);
    printf("%-6.1f\n", f);
    printf("%15f\n", f);
    printf("%20f\n", f);
    printf("%-20f\n", f);
    printf("%-+20f\n", f);
    
   

    return 0;
}