#include <stdio.h>

int main() {
    int a = 10;
    int b = 20;
    int *ptr = &a;

    printf("Prediction 1 (a): %d\n", a);
    printf("Prediction 2 (*ptr): %d\n", *ptr);

    *ptr = 15;
    printf("Prediction 3 (a after *ptr=15): %d\n", a);

    ptr = &b;
    *ptr = *ptr + 5;
    
    printf("Prediction 4 (b): %d\n", b);
    printf("Prediction 5 (*ptr): %d\n", *ptr);

    return 0;
}
