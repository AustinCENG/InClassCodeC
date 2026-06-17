#include <stdio.h> 
 
int main() { 
    int numbers[10] = {10, 20, 30, 40}; 
    int *ptr = numbers; // Pointing to the array 
 
    printf("Value 1: %d\n", *ptr); 
    printf("Value 2: %d\n", *(ptr + 2)); 
     
    ptr++; 
    printf("Value 3: %d\n", *ptr); 
     
    return 0; 
} 