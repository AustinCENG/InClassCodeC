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


}
