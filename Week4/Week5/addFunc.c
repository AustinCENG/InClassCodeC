#include <stdio.h>


// a1 and b1 are parameters when we define the function. 
float add (float a1, float b1){
    float result;
    // do the calculation inside here
    result = a1 + b1;
    return result;
}
int main()
{
    float a, b;   // declare
    float c;
    a = 4.5;
    b = 3.6;
    // Why not do c = a+ b? 
    // because we are studying functions. 
    c = add(a, b);  // a and b here are arguments. expect the return value in c. 
    printf("Now c is: %f\n", c);
}
