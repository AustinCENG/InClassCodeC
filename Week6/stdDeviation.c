/* FIGURE 7.2  Program to Print a Table of Differences */
/*
 * Computes the mean and standard deviation of an array of data and displays
 * the difference between each value and the mean.
 */

#include <stdio.h>
#include <math.h>

#define MAX_ITEM 1000  /* maximum number of items in list of data       */

// print out the first NumberofElements of the array input
void printAllElements(double input[], int NumberofElements)
{
   for (int i = 0; i< NumberofElements; i++)
   {
       printf (" The %d element in the array is: %lf\n", i, input[i]);
   }
}

// print out the first NumberofElements of the array input
// same as above, but use a pointer. 
void printAllElementswithPtr(double *inputPtr, int NumberofElements)
{
   for (int i = 0; i< NumberofElements; i++){
       // How to access the data with inputPtr?  *(inputPtr+i) is the same as x[i]
       printf (" The %d element in the array is: %lf (using ptr)\n", i, *(inputPtr+i));
       // The following is the same as the above, but not preferred. 
       // printf (" The %d element in the array is: %lf (using ptr)\n", i, inputPtr[i]);
   }
}

// file operations, array operations and passing pointers as parameters. 
int main (void)
{
      double x[MAX_ITEM] ={0},   /* data list                              */
             mean,          /* mean (average) of the data             */
             st_dev,        /* standard deviation of the data         */
             sum,           /* sum of the data                        */
             sum_sqr;       /* sum of the squares of the data         */
      FILE *fptr; 
      int    i;
      int    DataCount = 0;

      fptr = fopen("data.txt", "r");
      if (fptr == NULL){
          printf("The file cannot be opened\n");
          return -1;  // return an error code is -1. 
       }
      /* Gets the data                                                */
      printf("Enter %d numbers separated by blanks or <return>\n> ",
             MAX_ITEM);
       for   (i = 0; i < MAX_ITEM; ++ i)
       {
          int returnvalue = fscanf(fptr, "%lf", &x[i]);
          if (returnvalue == EOF)  // end of the data file. 
              break;
          DataCount++;  // this is the counter. 
       }

       printf("%d numbers are received from the file data.txt\n", DataCount);
      /* Computes the sum and the sum of the squares of all data      */
      sum = 0;
      sum_sqr = 0;
      for   (i = 0; i < DataCount; ++i)  {
             sum += x[i];
             sum_sqr += x[i]  *  x[i];
      }
    /* computes and prints the mean and standard deviation            */
    mean = sum / DataCount;
    st_dev = sqrt (sum_sqr / DataCount - mean * mean);
    printf("The mean is %.2f.\n", mean);
    printf ("The standard deviation is %.2f.\n", st_dev);

    /* Displays the  difference between each item and the mean         */
    printf ("\nTable of differences between data values and mean\n");
    printf ("Index       Item      Difference\n");
    for  (i = 0; i < DataCount;  ++i)
        printf ("%3d%4c%9.2f%5c%9.2f\n", i, ' ', x[i], ' ', x[i] - mean);

    // print out the original array. 
    // printAllElements(x, DataCount);

    // print out the original array using pointers. 
    printAllElementswithPtr(x, DataCount);

    flcose(fptr);  // make sure the file is closed before return. 
    return (0);
}

/*
Enter 8 numbers separated by blanks or <return>s
> 16 12  6  8 2.5  12  14 ??54.5
The mean is 2.00.
The standard deviation is 21.75.

Table of differences between data values and mean
Index
Item
Difference
0
16.00
14.00
1
12.00
10.00
2
 6.00
 4.00
3
 8.00
 6.00
4
 2.50
 0.50
5
12.00
10.00
6
14.00
12.00
7
?54.50
?56.50
*/
