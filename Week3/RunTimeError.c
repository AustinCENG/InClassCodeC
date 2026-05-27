/* FIGURE 2.19  A Program That Produces Incorrect Results in Run Time */
#include <stdio.h>

int
main(void)
{
    int first, second, sum;
    float temp, ans;

    printf("Enter two integers> ");
    scanf("%d %d", &first, &second); /* ERROR!! should be &first, &second */
    temp =  second/first;

    if (temp == 0)// guard statement to make sure temp is not 0 before the division. 
    {
        printf("The temp is zero, cannnot calculate the results.");
        return -1;  // -1 as indicator that calculation is not correct. 
    }
    else
    {
        ans = first/temp;
        printf("Final answer is: %f\n", ans);
    } 

    return (0);
}

