/* FIGURE 5.7  Function to Compute Factorial */
/*
 * Computes n!
 * Pre: n is greater than or equal to zero
 */
#include <stdio.h>
int main()
{
    int i, n, product = 1;   /* accumulator for product computation */

    n = 5;  // for user input. 

    /* Computes the product n x (n-1) x (n-2) x . . . x 2 x 1 */
    // i is the counter here. 
    for (i = n; i > 1; --i) {
         product = product * i;
    }
    
    // What is the value of i at this moment? After exiting the loop
    // it should be the first number that breaks the Loop condition. 
    printf("After the loop, i is %d\n", i);
    

    printf("%d! = %d\n", n, product);

    return (0);
}

