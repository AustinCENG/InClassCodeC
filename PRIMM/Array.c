#include <stdio.h> 

// print out N elements from array
void printAllElements(int *array, int N)  // if N is 10. 
{
    for (int i=N-1; i>=0; i--)
    {
      printf("The %d th element of the array is: %d\n", i, array[i]);
      // or printf("The %d th element of the array is: %d\n", i, *(array+i));

    }
}


int main() { 
    int a[2];  // no initialization, then a[i] will be always random. 

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

    printAllElements(numbers, 10); // numbers is a pointer. 
    return 0; 
} 