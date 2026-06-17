#include <stdio.h>
#include <string.h>

int main()
{
    char s1[21] = {0};  //  initialize the string to be all zero. 
    char s2[21] = {0};
    printf("At beginning: the string length of s1 is %d\n",strlen(s1));
    printf("At beginning: the string length of s2 is %d\n",strlen(s2));

    strcpy(s1, "hello");  // copy “hello” to s1.
    strcat(s1, " and more:");
    strncat(s1, "2343033033030", 2);


    strncpy(s2, "helloWorld", 3);  // copy 3 bytes of “helloWorld” to s2.
    puts(s1);
    puts(s2);
    printf("the string length of s1 is %d\n",strlen(s1));
    printf("the string length of s2 is %d\n",strlen(s2));

    printf("Try to use gets to get some user's inputs: (less than 20 bytes)\n");
    gets(s2);
    puts("The message you input is:");
    puts(s2);
    
    
}