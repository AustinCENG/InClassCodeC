// passing array as a parameter to a function
#include <stdio.h>
#include <string.h>

void myfunction (double d[], int n)
// same as void myfunction (double *d)
{
  // now the d will be pointing to data. 
  for (int i=0; i<n; i++)
  {
    printf("The %d in d is %lf\n", i, d[i]);
    // same as:
    // printf("The %d in d is %lf\n", i, *(d+i));

  }
}

int main(void)
{
    // initialize the first 6 elements, all others would be 0. 
    double data[20] = {0.1, 0.2, 0.3, 0.4, 100.4, 3.14};
    // sizeof(data) is the number of bytes used by this array data. 
    int sizeOfTheArray = sizeof(data)/sizeof(data[0]);  
    myfunction(data, sizeOfTheArray);
    // About sizeof operations. 
    char str[] = "This is a radom string, I want to know the size of this string";
    int sizeofStr = sizeof(str)/sizeof(str[0]);
    int sizeofStrwithstrlen = strlen(str);
    // sizeofStr will be the length of the string str now. 
    printf("The size of the string str is %d and %d by using strlen\n",sizeofStr, sizeofStrwithstrlen);

}
    