#include <stdlib.h>
#include <stdio.h>
int main(){
    int *ptr;
    ptr = (int*) malloc(15); /* a block of 15 integers */

    if (ptr != NULL) {
        *(ptr + 3) = 129; /* assign 129 to the 4th integer */
        printf("Value of the 4th integer is %d", *(ptr + 3));
        }
    free(ptr);  // to prevent the memory leakage, has to free the memory block before return to the OS. 
}
