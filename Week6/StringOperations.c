/* Figure 8.2  String Input/Output with scanf and printf */
#include <stdio.h>

#define STRING_LEN 10

// Define some const string chars
char *consChar = "Today's Word-Of-The-Day is:";

int main(void)
{
       char dept[STRING_LEN+1];
       int  course_num;
       char days[STRING_LEN+1];
       int  time;

       printf("Enter department code, course number, days and ");
       printf("time like this:\n> COSC 2060 MWF 1410\n> ");
       scanf("%s%d%s%d", dept, &course_num, days, &time);
       printf("%s %d meets %s at %d\n", dept, course_num, days, time);
       printf("%s", consChar); // Test of the const char strings. 
       return (0);
}

/*
Enter department code, course number, days and time like this:
> COSC 2060 MWF 1410
> MATH 1270 TR 800
MATH 1270 meets TR at 800
*/
