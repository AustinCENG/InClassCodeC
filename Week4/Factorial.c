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
    for (i = n; i > 1; --i) {
         product = product * i;
    }
    printf("%d! = %d", n, product);
    /* Returns function result */
    return (0);
}

