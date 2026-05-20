/* FIGURE 2.14  Batch Version of Miles-to-Kilometers Conversion Program */
/* Converts distances from miles to kilometers.        */

#include <stdio.h> /* printf, scanf definitions        */
#define KMS_PER_MILE 1.609 /* conversion constant      */

int main(void)
{
     int a, b, c;
     a = b = c =5;
     printf("Test a, b, c: %d, %d, \n %d \n", a, b, c);
     
     float miles,  /* distance in miles                 */
            kms;    /* equivalent distance in kilometers */

     /* Get and echo the distance in miles. */
     printf("\nPlease input the distance in miles->:\n", miles);
     scanf("%f", &miles);
     printf("The distance in miles is %.9lf.\n", miles);

     /* Convert the distance to kilometers. */
     kms = KMS_PER_MILE * miles;

     /* Display the distance in kilometers. */
     printf("That equals %.9lf kilometers.\n", kms);

     return (0);
}

/*
The distance in miles is 1
That equals 121 kilometers.
*/
