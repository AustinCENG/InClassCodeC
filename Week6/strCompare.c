/* Figure 8.8  Demonstration of Whole-Line Input */
/*
 *  Numbers and double spaces lines of a document. Lines longer than
 *  LINE_LEN - 1 characters are split on two lines.
 */

#include <stdio.h>
#include <string.h>

// use a pointer to declare and initialize the strings. 
char *constString = "Toronto, Brampton, Mississauga, Oakville and Markham are all cities in Ontario";

int main(void)
{
    char str1[50] = "College";
    char str2[50] = "College";
    char emptystr[100] = {0};   // initialize the string as an empty string with all 0 as the value. 
    // Method 1: Compare with Names of the strings - Wrong operations. 
    // str1 and str2 are the names of the arrays. 
    // And the names of the arrays are pointers. 
    if (str1 == str2)  // Why we cannot do this? Here we are comparing two pointers. 
        printf("Method 1 (Wrong way): Two strings are the same\n");
    else
        printf("Method 1 (Wrong way): Two strings are NOT the same\n");
    
    // Method 2 - Correct way to compare strings. 
    if (strcmp(str1, str2) == 0)  // have to use strcmp to compare two strings. 
        printf("Method 2: Two strings are the same\n");
    else
        printf("Method 2: Two strings are NOT the same\n");
}