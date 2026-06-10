// Try the following code for the scope of the variable i. 
#include <stdio.h>
int globalvar = 100;
void printglobalvar (){
        printf("Variable globalvar in printglobalvar is: %d\n", globalvar);
}

int main()
{ //int k;
    for (int i = 0; i < 10; i++){
        int j = i*3;
        printf("Variable i inside loop is: %d\n", i);
        printf("Variable j inside loop is: %d\n", j);
    }    
    printf("Variable i outside the for loop is: %d\n", i);  // wrong statement, you cannot use i here.
    printf("Variable j outside the for loop is: %d\n", j);   // wrong statement, you cannot use j here.
    // Did you see anything wrong here?
    // what if move i and j declaration to the outside of the for loop?
    printf("Variable globalvar is: %d\n", globalvar);
    printglobalvar();
    return 0;
}

