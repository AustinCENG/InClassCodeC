#include <stdio.h>

#define PI 3   // Approximate PI as 3
//#define SQUARE(x)   (x) * (x)  // fixed by adding brakets around x
#define SQUARE(x)   x * x  // original definition

#define LEVEL 20
#define DEBUG 1

int mysquare(int x){  // this is a function, see the difference between function and Macro. 
    return x*x;
}

int main() {
    int radius = 2;
    int area = PI * SQUARE(radius);
    printf("Area calculation: %d\n", area);

    int regular_math = SQUARE(2 + 3);
    printf("SQUARE(2 + 3) evaluation: %d\n", regular_math);
    int function_math = mysquare(2 + 3);
    printf("mysqure(2 + 3) evaluation: %d\n", function_math);

    #if LEVEL == 1
        printf("System Status: Basic Mode\n");
    #elif LEVEL == 2
        printf("System Status: Advanced Mode\n");
    #else
        printf("System Status: Unknown Mode\n");
#endif

#if DEBUG
        printf("Currently in debug mode, print some internal messages\n"); 
#else
        printf("Currently Not in debug mode\n"); 
#endif
    return 0;
}
