#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int *ptr = &a;   // * means what: means ptr is a pointer to integer and assigned as the address of a. 

    printf("Prediction 1 (a): %d\n", a);
    printf("Prediction 2 (*ptr): %d\n", *ptr);  // indirect reference 
                                                // *ptr dereference the pointer ptr, meaning. find the values of the memory
                                                // pointed by the ptr. 

    *ptr = 15;   // *ptr is the same as a now. 
    printf("Prediction 3 (a after *ptr=15): %d\n", a);

    ptr = &b;  
    *ptr = *ptr + 5;// *ptr is the same as b now. 
    
    printf("Prediction 4 (b): %d\n", b);
    printf("Prediction 5 (*ptr): %d\n", *ptr);  // 25

    printf("Prediction 6 (ptr): %d\n", ptr);  // what is this?  address of b. 
    printf("Prediction 7 (b): %d\n", &b);  // what is this?    // same as 6. 

    return 0;
}
