#include <stdio.h>
int main() {
    
int m = 25; 
printf("1. m is %d\n", m); /* What will be printed? */ 
int *itemp; /* a pointer to an integer */ 
itemp = &m; /* Store address of m in pointer itemp */ 
*itemp = 35; /* same as m = 35; 
              *itemp is to find the variable pointed by itemp. 
              Assign 35 to address itemp i.e.,to variable m. */ 
printf("2. m is %d\n", m); /* What will be printed? */ 
printf("*itemp is %d\n", *itemp); /* What will be printed? */ 
printf("itemp %ld\n", itemp); /* What will be printed? */ 
printf("&m is %ld\n", &m); /* What will be printed? */ 
}
