
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
    printf("1. %dend\n", k);  // right alignment by default. No size is specified.
    printf("2. %-dend\n", k);
    printf("3. %+dend\n", k);
    printf("4. %6dend\n", k);
    printf("5. %-6dend\n", k);
    printf("6. %+6dend\n\n", k);
    
    printf("The following is for print double:\n");
    printf("7. %6.1fend\n", f);
    printf("8. %+6.1fend\n", f);
    printf("9. %-6.1fend\n", f);
    printf("10. %15fend\n", f);
    printf("11. %20fend\n", f);
    printf("12. %-20fend\n", f);
    printf("13. %-+20fend\n", f);
 

    return 0;
}