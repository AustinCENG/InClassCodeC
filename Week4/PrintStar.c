#include <stdio.h>

int main()
{
int i, j;
int n = 10;
printf("Example 1: \n");
for(i = 0; i <= n; i++) {   // outer loop controlled by i
   for(j = 0; j < i; j++) {// inner loop controlled by j
      printf("* ");
   }
   printf("\n");
}

printf("Example 2: \n");
int k;
for (i = 0;i < 3;++i) {   
     printf("Outer %4d\n", i);
     for(j = 0;j < 2;++j) {
       printf("  Inner j %3d%3d\n", i, j);
     }
     for(k = 2;k > 0; --k) {
       printf("  Inner k %3d%3d\n", i, k);
     }
}

printf("Example 3: \n");

int count_star = 0;
while (count_star < 10)
{
printf("count_star %d: * \n",count_star);
count_star = count_star+1;

}

// Keep on asking the user input until a valid input is gotten. 
printf("Example 4: \n");
int num_obs;
printf("Enter number of observed values： "); 
scanf("%d", &num_obs); /* initialization */ 

while (num_obs < 0) { 
printf("Negative number invalid; try again> "); 
scanf("%d", &num_obs); /* update */ 
}
printf("THe valid number is taken: %d> \n",num_obs); 





return 0;
}
