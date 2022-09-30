/* get-input.c: Reading input by calling getc() */
#include <stdio.h>

int main(){
  int ch;
  printf("Please type in one character:\n");
  ch = getc( stdin );
  printf("The charater you just entered is: %c\n", ch);
  return 0;
}
