// Use infinite loop to validate a data. 

#include <stdio.h>

#define GUARD 0  // Make sure the input is valid positive number 

int main(void)
{
         int   data;   /* input - data to be taken                      */
        // validate the data and see if the data is valid. 
        while (1) {
            printf("Enter Your age:\n ");
            scanf("%d", &data);      /* Get age input        */
            if (data > GUARD )
                break; // break the while(1) loop ONLY when a positive number is reached.                 
        }
        printf("\nBingo! The age entered is %d, a positve valid number\n", data);
        return (0);
}
