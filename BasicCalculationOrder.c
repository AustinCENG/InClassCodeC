// C Program to illustrate the difference in different
// compiler execution
#include <stdio.h>
int main()
{
    int i = 2;
    int k = 30;
    int u = 100;
    u = u - -k*i;
    printf("%d %d %d\n", i, k, u);

    return 0;
}