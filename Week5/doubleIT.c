#include <stdio.h>
void doubleIT(int *k)  // parameter should be a pointer, and it should be int * type. 
{
	// *k is the same as x now
	*k = (*k) *2;
	
}

void main(){
int x=12;
printf("before the operation, x is %d\n", x);
doubleIT(&x); /* after this call, x is equal to 10 */
printf("After the operation, x is %d\n", x);
}

