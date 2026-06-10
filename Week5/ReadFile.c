/* Figure 6.2  Program Using File Pointers */
/* Inputs each number from an input file and writes it
 * rounded to 2 decimal places on a line of an output file.
 */
#include <stdio.h>  // needed for file operations. 

int main(void)
{
      FILE *inp;         /* pointer to input file */
      FILE *outp;        /* pointer to ouput file */
      double item;
      int input_status;  /* status value returned by fscanf */

      /* Prepare files for input or output */
      inp = fopen("indata.txt", "r");   // r means read only
      outp = fopen("outdata.txt", "w");  // w means write only

      if (inp == NULL || outp == NULL){
        printf("The files are not found or created properly\n");
        fclose(inp);
        fclose(outp);
        return -2;  // -2 means files not opened. 
      }

      /* Input each item, format it, and write it */
      input_status = fscanf(inp, "%lf", &item);   // similar to scanf to read from keyboards.
      while (input_status == 1) {  // 1 means the number read from the file is 1 number. 
          fprintf(outp, "%.2f\n", item);  // similar to printf. 
          printf("%lf was writtern to the outputfile.\n", item);
          input_status = fscanf(inp, "%lf", &item);
      }

      /* Close the files */
      fclose(inp);
      fclose(outp);

      return (0);
}
