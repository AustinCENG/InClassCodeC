#include <stdio.h> 
 
int main() { 
    int numbers[10] = {10, 20, 30, 40}; 
    int testInit[100] = {0};  // typical way to initialize an array with all 0 elements. 
    int *ptr = numbers; // Pointing to the beginning of the array numbers[0]
                        // same as  int *ptr = &numbers[0];

    printf("Value 1: %d\n", *ptr); // dereference the ptr to its value. 
    printf("Value 2: %d\n", *(ptr + 2)); // this is NOT *ptr + 2;
                                         //  it is actually same as numbers[2]

    printf("Value added: %d\n", *ptr + 2); // this is NOT *ptr + 2;

    ptr++; // increment ptr to ptr+1, i.e., &numbers[1]
    
    printf("Value 3: %d\n", *ptr); 
    return 0; 
} 