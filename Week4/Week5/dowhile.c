#include <stdio.h>
int main() {

char letter_choice;
char c;
do { 
     printf("Enter a letter from A through E> ");
     scanf("%c", &letter_choice);
     while ((c = getchar()) != '\n' && c != EOF);  // clear the buffer.
     printf("The letter I got is: %c\n", letter_choice);
} while (letter_choice < 'A' || letter_choice > 'E');


// How to change the above to an infinite loop so that the code will break from the loop when
// an input is valid. 
printf("This is the second way to do it:\n");
do{
     printf("Method 2: Enter a letter from A through E> ");
     scanf("%c", &letter_choice);
    while ((c = getchar()) != '\n' && c != EOF);  // clear the buffer.
    printf("The letter I got is: %c\n", letter_choice);
    // How do I break?
    if (letter_choice >= 'A' && letter_choice <= 'E'){
        break;
    } 
}while(1);

}
