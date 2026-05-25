// C Program to illustrate the difference in different
// compiler execution
#include <stdio.h>
int main()
{
    int a = 5, b = 2;
    float c = 1.0*a/b;  // what woudl be c? should be 2.0.
    float d = ((float)a)/b; // similar to the conversion in c. should be 2.0 here. 
    float e = a/b;  // what woudl be e? should be 2.0
    e = 5/2; // what woudl be e? should be 2.0
    printf("The result of 5/2 is: %d, and 5%%2 is : %d\n", a/b, a%b);
    printf("The result of a/b is: %f\n\n", c);
  
    int i = 2;
    int k = 30;
    int u = 100;
    u = u - -k*i;  // same as u = u - (-k)*i;
    printf("The results of i, k, u are: %d %d %d\n", i, k, u);

    return 0;
}